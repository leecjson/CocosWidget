/****************************************************************************
Copyright (c) 2013 Lijunlin - Jason lee

Created by Lijunlin - Jason lee on 2014

jason.lee.c@foxmail.com
http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __CCWIDGET_WIDGETPROTOCOL_H__
#define __CCWIDGET_WIDGETPROTOCOL_H__

#include "cocos2d.h"
#include "WidgetMacros.h"

#define CC_WIDGET_LONGPRESS_TIME 0.5f
#define CC_WIDGET_NONE_EXCLUSION -1

NS_CC_WIDGET_BEGIN

class CWidget;

static const CCPoint CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT = CCPoint(0.5f, 0.5f);
static const CCSize CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE = CCSize(100, 100);

static const CCPoint CCWIDGET_LAYOUT_DEFAULT_ANCHOR_POINT = CCPoint(0.5f, 0.5f);
static const CCSize CCWIDGET_LAYOUT_DEFAULT_CONTENT_SIZE = CCSize(300, 300);

/**
 * class  : CGridPageView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
enum CWidgetTouchModel
{
	eWidgetTouchNone,
	eWidgetTouchTransient,
	eWidgetTouchSustained,
};

typedef void (CCObject::*SEL_ClickHandler)(CCObject *pSender);
typedef bool (CCObject::*SEL_LongClickHandler)(CCObject* pSender, CCTouch* pTouch);
typedef void (CCObject::*SEL_AfterLongClickHandler)(CCObject* pSender, CCTouch* pTouch, float fDuration);
typedef void (CCObject::*SEL_CheckHandler)(CCObject *pSender, bool bChecked);
typedef void (CCObject::*SEL_ControlHandler)(CCObject* pSender, float fx, float fy);
typedef void (CCObject::*SEL_ValueChangedHandler)(CCObject* pSender, int nValue);
typedef void (CCObject::*SEL_ProgressEndedHandler)(CCObject* pSender);
typedef void (CCObject::*SEL_ScrollingHandler)(CCObject* pSender);
typedef void (CCObject::*SEL_PageChangedHandler)(CCObject* pSender, unsigned int nPageIdx);
typedef CCObject* (CCObject::*SEL_DataSoucreAdapterHandler)(CCObject* pConvertCell, unsigned int uIdx);
typedef CWidgetTouchModel (CCObject::*SEL_TouchBeganHandler)(CCObject* pSender, CCTouch* pTouch);
typedef bool (CCObject::*SEL_TouchEventHandler)(CCObject* pSender, CCTouch* pTouch, float fDuration);
typedef void (CCObject::*SEL_TextRichClickHandler)(CCObject* pSender, const char* description);


#define ccw_click_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ClickHandler)(&_SELECTOR_)
#define ccw_longclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_LongClickHandler)(&_SELECTOR_)
#define ccw_afterlongclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_AfterLongClickHandler)(&_SELECTOR_)
#define ccw_check_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_CheckHandler)(&_SELECTOR_)
#define ccw_control_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ControlHandler)(&_SELECTOR_)
#define ccw_valuechanged_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ValueChangedHandler)(&_SELECTOR_)
#define ccw_progressended_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ProgressEndedHandler)(&_SELECTOR_)
#define ccw_scrolling_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ScrollingHandler)(&_SELECTOR_)
#define ccw_pagechanged_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_PageChangedHandler)(&_SELECTOR_)
#define ccw_datasource_adapter_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_DataSoucreAdapterHandler)(&__SELECTOR__)
#define ccw_touchbegan_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchBeganHandler)(&_SELECTOR_)
#define ccw_touchevent_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchEventHandler)(&_SELECTOR_)
#define ccw_textrichclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TextRichClickHandler)(&_SELECTOR_)


class CWidgetTouchProtocol
{
public:
    virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch) = 0;
    virtual void onTouchMoved(CCTouch* pTouch, float fDuration) = 0;
    virtual void onTouchEnded(CCTouch* pTouch, float fDuration) = 0;
    virtual void onTouchCancelled(CCTouch* pTouch, float fDuration) = 0;
};

class CDataSourceAdapterProtocol
{
public:
	CDataSourceAdapterProtocol();
	virtual ~CDataSourceAdapterProtocol();
	virtual void setDataSourceAdapter(CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

protected:
	CCObject* m_pDataSourceAdapterListener;
	SEL_DataSoucreAdapterHandler m_pDataSourceAdapterHandler;
	CCObject* executeDataSourceAdapterHandler(CCObject* pConvertCell, unsigned int uIdx);
#if USING_LUA
protected:
	int m_nDataSourceAdapterScriptHandler;
	CCObject* executeDataSourceAdapterScriptHandler(CCObject* pConvertCell, unsigned int uIdx);
public:
	virtual void setDataSourceAdapterScriptHandler(int nHandler);
	virtual void removeDataSourceAdapterScriptHandler();
#endif
};

class CTextRichClickableProtocol
{
public:
	CTextRichClickableProtocol();
	virtual ~CTextRichClickableProtocol();
	void setOnTextRichClickListener(CCObject* pListener, SEL_TextRichClickHandler pHandler);

protected:
	CCObject* m_pRichTextClickListener;
	SEL_TextRichClickHandler m_pRichTextClickHandler;
	void executeTextRichClickHandler(CCObject* pSender, const char* pDescription);
#if USING_LUA
protected:
	int m_nRichTextClickScriptHandler;
	void executeTextRichScriptHandler(CCObject* pSender, const char* pDescription);
public:
	virtual void setOnTextRichClickScriptHandler(int nHandler);
	virtual void removeOnTextRichClickScriptHandler();
#endif
};

class CLayoutableProtocol
{
public:
	CLayoutableProtocol();
	virtual ~CLayoutableProtocol();

protected:
	CWidget* m_pSelectedWidget;
    CWidgetTouchModel m_eSelectedWidgetTouchModel;
};

class CPageChangeableProtocol
{
public:
	CPageChangeableProtocol();
	virtual ~CPageChangeableProtocol();
	void setOnPageChangedListener(CCObject* pListener, SEL_PageChangedHandler pHandler);

protected:
	unsigned int m_nPageIndex;
	CCObject* m_pPageChangedListener;
	SEL_PageChangedHandler m_pPageChangedHandler;
	void executePageChangedHandler(CCObject* pSender, unsigned int uPageIdx);
#if USING_LUA
protected:
	int m_nPageChangedScriptHandler;
	void executePageChangedScriptHandler(CCObject* pSender, unsigned int uPageIdx);
public:
	virtual void setOnPageChangedScriptHandler(int nHandler);
	virtual void removeOnPageChangedScriptHandler();
#endif
};

class CScrollableProtocol
{
public:
	CScrollableProtocol();
	virtual ~CScrollableProtocol();
	void setOnScrollingListener(CCObject* pListener, SEL_ScrollingHandler pHandler);

protected:
	CCObject* m_pScrollingListener;
	SEL_ScrollingHandler m_pScrollingHandler;
	void executeScrollingHandler(CCObject* pSender);
#if USING_LUA
protected:
	int m_nScrollingScriptHandler;
	void executeScrollingScriptHandler(CCObject* pSender);
public:
	virtual void setOnScrollingScriptHandler(int nHandler);
	virtual void removeOnScrollingScriptHandler();
#endif
};

class CProgressEndedProtocol
{
public:
	CProgressEndedProtocol();
	virtual ~CProgressEndedProtocol();
	void setOnProgressEndedListener(CCObject* pListener, SEL_ProgressEndedHandler pHandler);

protected:
	CCObject* m_pProgressEndedListener;
	SEL_ProgressEndedHandler m_pProgressEndedHandler;
	void executeProgressEndedHandler(CCObject* pSender);
#if USING_LUA
protected:
	int m_nProgressEndedScriptHandler;
	void executeProgressEndedScriptHandler(CCObject* pSender);
public:
	virtual void setOnProgressEndedScriptHandler(int nHandler);
	virtual void removeOnProgressEndedScriptHandler();
#endif
};

class CValueChangeableProtocol
{
public:
	CValueChangeableProtocol();
	virtual ~CValueChangeableProtocol();
	void setOnValueChangedListener(CCObject* pListener, SEL_ValueChangedHandler pHandler);

protected:
	int m_nValue;
	CCObject* m_pValueChangedListener;
	SEL_ValueChangedHandler m_pValueChangedHandler;
	void executeValueChangedHandler(CCObject* pSender, int nValue);
#if USING_LUA
protected:
	int m_nValueChangedScriptHandler;
	void executeValueChangedScriptHandler(CCObject* pSender, int nValue);
public:
	virtual void setOnValueChangedScriptHandler(int nHandler);
	virtual void removeOnValueChangedScriptHandler();
#endif
};

class CClickableProtocol
{
public:
	CClickableProtocol();
	virtual ~CClickableProtocol();
	void setOnClickListener(CCObject* pListener, SEL_ClickHandler pHandler);

protected:
	CCObject* m_pClickListener;
	SEL_ClickHandler m_pClickHandler;
	void executeClickHandler(CCObject* pSender);
#if USING_LUA
protected:
	int m_nClickScriptHandler;
	void executeClickScriptHandler(CCObject* pSender);
public:
	virtual void setOnClickScriptHandler(int nHandler);
	virtual void removeOnClickScriptHandler();
#endif
};

class CLongClickableProtocol
{
public:
	CLongClickableProtocol();
	virtual ~CLongClickableProtocol();
	void setOnLongClickListener(CCObject* pListener, SEL_LongClickHandler pHandler);

protected:
	CCObject* m_pLongClickListener;
	SEL_LongClickHandler m_pLongClickHandler;
	bool executeLongClickHandler(CCObject* pSender, CCTouch* pTouch);

protected:
	bool m_bLongClickedUpdate;
	float m_fLongClickTimeCounter;
	bool m_bLongClickEnabled;

	float m_fLongClickLastTouchDuration;
	CCTouch* m_pLongClickLastTouch;
#if USING_LUA
protected:
	int m_nLongClickScriptHandler;
	bool executeLongClickScriptHandler(CCObject* pSender, CCTouch* pTouch);
public:
	virtual void setOnLongClickScriptHandler(int nHandler);
	virtual void removeOnLongClickScriptHandler();
#endif
};

class CCheckableProtocol
{
public:
	CCheckableProtocol();
	virtual ~CCheckableProtocol();
	virtual void setChecked(bool bChecked);
	bool isChecked() const;
	virtual void setExclusion(int nExclusion);
	int getExclusion() const;
	void setOnCheckListener(CCObject* pListener, SEL_CheckHandler pHandler);

protected:
	virtual void executeCheckHandler(CCObject* pSender, bool bChecked);
	void setUnCheckedForOtherWidgetsByExclusion(CCNode* pParent);

protected:
	bool m_bChecked;
	int  m_nExclusion;
	CCObject* m_pCheckListener;
	SEL_CheckHandler m_pCheckHandler;
#if USING_LUA
protected:
	int m_nCheckScriptHandler;
	void executeCheckScriptHandler(CCObject* pSender, bool bChecked);
public:
	virtual void setOnCheckScriptHandler(int nHandler);
	virtual void removeCheckScriptHandler();
#endif
};

class CControlableProtocol
{
public:
	CControlableProtocol();
	virtual ~CControlableProtocol();
	void setOnControlListener(CCObject* pListener, SEL_ControlHandler pHandler);

protected:
	CCObject* m_pControlListener;
	SEL_ControlHandler m_pControlHandler;
	void executeControlHandler(CCObject* pSender, float cx, float cy);
#if USING_LUA
protected:
	int m_nControlScriptHandler;
	void executeControlScriptHandler(CCObject* pSender, float cx, float cy);
public:
	virtual void setOnControlScriptHandler(int nHandler);
	virtual void removeOnControlScriptHandler();
#endif
};

#ifndef CC_WIDGET_LONGCLICK_SCHEDULE
#define CC_WIDGET_LONGCLICK_SCHEDULE(__CHILDE__) \
protected: \
\
void performLongClickUpdate() \
{ \
	schedule(schedule_selector(__CHILDE__::onLongClickUpdate)); \
} \
\
void stopLongClickUpdate() \
{ \
	unschedule(schedule_selector(__CHILDE__::onLongClickUpdate)); \
} \
\
void onLongClickUpdate(float dt) \
{ \
	if( m_bLongClickedUpdate && m_bLongClickEnabled ) \
	{ \
		if( m_fLongClickTimeCounter > CC_WIDGET_LONGPRESS_TIME ) \
		{ \
			CCTouch* pTempTouch = m_pLongClickLastTouch; \
			interruptTouchCascade(pTempTouch, m_fLongClickLastTouchDuration); \
			if( executeLongClickHandler(this, pTempTouch) ) \
			{ \
				setLongClickTouchHandlerWidget(this, pTempTouch->getID()); \
			} \
			m_bLongClickedUpdate = false; \
			stopLongClickUpdate(); \
		} \
		else \
		{ \
			m_fLongClickTimeCounter += dt; \
		} \
	} \
}
#endif //CC_WIDGET_LONGCLICK_SCHEDULE

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHBEGAN
#define CC_WIDGET_LONGCLICK_ONTOUCHBEGAN \
m_pLongClickLastTouch = NULL; \
m_fLongClickTimeCounter = 0.0f; \
if( m_bLongClickEnabled ) \
{ \
	m_pLongClickLastTouch = pTouch; \
	m_fLongClickLastTouchDuration = 0.0f; \
	m_bLongClickedUpdate = true; \
	performLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHBEGAN

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHMOVED
#define CC_WIDGET_LONGCLICK_ONTOUCHMOVED \
if( m_bLongClickEnabled ) \
{ \
	m_pLongClickLastTouch = pTouch; \
	m_fLongClickLastTouchDuration = fDuration; \
	\
	CCPoint tMovePoint = getParent()->convertToNodeSpace(pTouch->getLocation()); \
	if( !boundingBox().containsPoint(tMovePoint) ) \
	{ \
		m_bLongClickedUpdate = false; \
		stopLongClickUpdate(); \
	} \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHMOVED

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHENDED
#define CC_WIDGET_LONGCLICK_ONTOUCHENDED \
if( m_bLongClickEnabled ) \
{ \
	m_fLongClickTimeCounter = 0.0f; \
	m_pLongClickLastTouch = NULL; \
	m_bLongClickedUpdate = false; \
	stopLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHENDED

#ifndef CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED
#define CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED \
if( m_bLongClickEnabled ) \
{ \
	m_fLongClickTimeCounter = 0.0f; \
	m_pLongClickLastTouch = NULL; \
	m_bLongClickedUpdate = false; \
	stopLongClickUpdate(); \
}
#endif //CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED


#ifndef CC_WIDGET_UPDATE_BACKGROUND_POS
#define CC_WIDGET_UPDATE_BACKGROUND_POS \
if(m_pBackgroundImage) m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
if(m_pBackgroundColor) m_pBackgroundColor->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
if(m_pBackgroundColor) m_pBackgroundColor->setContentSize(m_obContentSize); \
if(m_pBackgroundGradient) m_pBackgroundGradient->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
if(m_pBackgroundGradient) m_pBackgroundGradient->setContentSize(m_obContentSize);
#endif //CC_WIDGET_UPDATE_BACKGROUND_POS

#ifndef CC_WIDGET_BACKGROUND
#define CC_WIDGET_BACKGROUND \
public: \
	void setBackgroundImage(const char* pFile) \
	{ \
		CCAssert(pFile && strlen(pFile), "file path should not null"); \
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile); \
		setBackgroundTexture(pTexture); \
	} \
	\
	void setBackgroundTexture(CCTexture2D* pTexture) \
	{ \
		if( m_pBackgroundColor ) \
		{ \
			removeChild(m_pBackgroundColor); \
			m_pBackgroundColor = NULL; \
		} \
		\
		if( m_pBackgroundGradient ) \
		{ \
			removeChild(m_pBackgroundGradient); \
			m_pBackgroundGradient = NULL; \
		} \
		\
		if( m_pBackgroundImage ) \
		{ \
			CCRect rect; \
			rect.origin = CCPointZero; \
			rect.size = pTexture->getContentSize(); \
			\
			m_pBackgroundImage->setTexture(pTexture); \
			m_pBackgroundImage->setTextureRect(rect); \
		} \
		else \
		{ \
			m_pBackgroundImage = CCSprite::createWithTexture(pTexture); \
			m_pBackgroundImage->setZOrder(-128); \
			addChild(m_pBackgroundImage); \
		} \
		m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void setBackgroundSpriteFrame(CCSpriteFrame* pSpriteFrame) \
	{ \
		if( m_pBackgroundColor ) \
		{ \
			removeChild(m_pBackgroundColor); \
			m_pBackgroundColor = NULL; \
		} \
		\
		if( m_pBackgroundGradient ) \
		{ \
			removeChild(m_pBackgroundGradient); \
			m_pBackgroundGradient = NULL; \
		} \
		\
		if( m_pBackgroundImage ) \
		{ \
			m_pBackgroundImage->setDisplayFrame(pSpriteFrame); \
		} \
		else \
		{ \
			m_pBackgroundImage = CCSprite::createWithSpriteFrame(pSpriteFrame); \
			m_pBackgroundImage->setZOrder(-128); \
			addChild(m_pBackgroundImage); \
		} \
		m_pBackgroundImage->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void setBackgroundSpriteFrameName(const char* pFrameName) \
	{ \
		CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pFrameName); \
		return setBackgroundSpriteFrame(pFrame); \
	} \
	\
	CCSprite* getBackgroundImage() const \
	{ \
		return m_pBackgroundImage; \
	} \
	\
	void removeBackgroundImage() \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			removeChild(m_pBackgroundImage); \
			m_pBackgroundImage = NULL; \
		} \
	} \
	\
protected: \
	CCSprite* m_pBackgroundImage; \
	\
public: \
	void setBackgroundColor(const ccColor4B& tColor) \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			removeChild(m_pBackgroundImage); \
			m_pBackgroundImage = NULL; \
		} \
		\
		if( m_pBackgroundGradient ) \
		{ \
			removeChild(m_pBackgroundGradient); \
			m_pBackgroundGradient = NULL; \
		} \
		\
		if( m_pBackgroundColor ) \
		{ \
			m_pBackgroundColor->setColor(ccc3(tColor.r, tColor.g, tColor.b)); \
			m_pBackgroundColor->setOpacity(tColor.a); \
		} \
		else \
		{ \
			m_pBackgroundColor = CColorView::create(tColor); \
			m_pBackgroundColor->setTouchEnabled(false); \
			m_pBackgroundColor->setZOrder(-128); \
			m_pBackgroundColor->setContentSize(m_obContentSize); \
			addChild(m_pBackgroundColor); \
		} \
		m_pBackgroundColor->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void removeBackgroundColor() \
	{ \
		if( m_pBackgroundColor ) \
		{ \
			removeChild(m_pBackgroundColor); \
			m_pBackgroundColor = NULL; \
		} \
	} \
	\
protected: \
	CColorView* m_pBackgroundColor; \
	\
public: \
	void setBackgroundGradient(const ccColor4B& tStart, const ccColor4B& tEnd, const CCPoint& v) \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			removeChild(m_pBackgroundImage); \
			m_pBackgroundImage = NULL; \
		} \
		\
		if( m_pBackgroundColor ) \
		{ \
			removeChild(m_pBackgroundColor); \
			m_pBackgroundColor = NULL; \
		} \
		\
		if( m_pBackgroundGradient ) \
		{ \
			m_pBackgroundGradient->setStartColor(ccc3(tStart.r, tStart.g, tStart.b)); \
			m_pBackgroundGradient->setEndColor(ccc3(tEnd.r, tEnd.g, tEnd.b)); \
			m_pBackgroundGradient->setStartOpacity(tStart.a); \
			m_pBackgroundGradient->setEndOpacity(tEnd.a); \
			m_pBackgroundGradient->setVector(v); \
		} \
		else \
		{ \
			m_pBackgroundGradient = CGradientView::create(tStart, tEnd, v); \
			m_pBackgroundGradient->setTouchEnabled(false); \
			m_pBackgroundGradient->setZOrder(-128); \
			m_pBackgroundGradient->setContentSize(m_obContentSize); \
			addChild(m_pBackgroundGradient); \
		} \
		m_pBackgroundGradient->setPosition(CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2)); \
	} \
	\
	void removeBackgroundGradient() \
	{ \
		if( m_pBackgroundGradient ) \
		{ \
			removeChild(m_pBackgroundGradient); \
			m_pBackgroundGradient = NULL; \
		} \
	} \
protected: \
	CGradientView* m_pBackgroundGradient; \
	\
public: \
	void setBackgroundOpacity(GLbyte opacity) \
	{ \
		if( m_pBackgroundImage ) \
		{ \
			m_pBackgroundImage->setOpacity(opacity); \
			return; \
		} \
		\
		if( m_pBackgroundColor ) \
		{ \
			m_pBackgroundColor->setOpacity(opacity); \
			return; \
		} \
		\
		if( m_pBackgroundGradient ) \
		{ \
			m_pBackgroundGradient->setOpacity(opacity);\
			return; \
		} \
	}
#endif //CC_WIDGET_BACKGROUND


NS_CC_WIDGET_END

#endif //__CCWIDGET_EVENT_MACROS_H__