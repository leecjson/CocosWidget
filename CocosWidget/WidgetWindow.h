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
#ifndef __CCWIDGET_WIDGETWINDOW_H__
#define __CCWIDGET_WIDGETWINDOW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"
#include <map>

NS_CC_WIDGET_BEGIN

/**
 * class  : CWidgetWindow
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CWidgetWindow : public CCNodeRGBA, public CCTouchDelegate
{
public:
	CWidgetWindow();
	virtual ~CWidgetWindow();
	virtual bool init();
	static CWidgetWindow* create();

	virtual int getTouchPriority();
	virtual void setTouchPriority(int nTouchPriority);
	virtual bool isTouchEnabled();
	virtual void setTouchEnabled(bool bTouchEnabled);
	CCObject* findViewById(const char* id);
	bool isMultiTouchEnabled() const;
	void setMultiTouchEnabled(bool bEnabled);
	void setModalable(bool bModalable);
	bool isModalable() const;

	virtual void setOnTouchMovedAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);
	virtual void setOnTouchEndedAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);
	virtual void setOnTouchCancelledAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);

public:
	virtual void visit();
	virtual void onEnter();
	virtual void onExit();

	virtual bool ccTouchBegan(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchMoved(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchEnded(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchCancelled(CCTouch* pTouch, CCEvent* pEvent);

	virtual void ccTouchesBegan(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesMoved(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesEnded(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesCancelled(CCSet* pTouches, CCEvent* pEvent);

	virtual void setLongClickTouchHandlerWidget(CCObject* pWidgetObject, int nTouchId);

	CCObject* find(CCArray* pChidren, const char* id);

	virtual void executeTouchMovedAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchEndedAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchCancelledAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);

protected:
	struct __ccMULTITOUCHTARGET
	{
		CWidget* pWidget;
		CCObject* pLongClickedWidgetObject;
		float fTouchedDuration;
	};
	std::map<int, __ccMULTITOUCHTARGET> m_mMultiTouchKeeper;

protected:
	int m_nTouchPriority;
	bool m_bTouchEnabled;
	float m_fTouchedDuration;
	bool m_bIsTouched;
	bool m_bMultiTouchEnabled;
	bool m_bModalable;

	CCObject* m_pLongClickedWidgetObject;
	CWidget* m_pSelectedWidget;

    CCObject* m_pTouchMovedAfterLongClickListener;
    CCObject* m_pTouchEndedAfterLongClickListener;
    CCObject* m_pTouchCancelledAfterLongClickListener;

    SEL_AfterLongClickHandler m_pTouchMovedAfterLongClickHandler;
    SEL_AfterLongClickHandler m_pTouchEndedAfterLongClickHandler;
    SEL_AfterLongClickHandler m_pTouchCancelledAfterLongClickHandler;

#if USING_LUA
protected:
	int m_nTouchMovedAfterLongClickScriptHandler;
	int m_nTouchEndedAfterLongClickScriptHandler;
	int m_pTouchCancelledAfterLongClickScriptHandler;
public:
	void setOnTouchMovedAfterLongClickScriptHandler(int nHandler);
	void setOnTouchEndedAfterLongClickScriptHandler(int nHandler);
	void setOnTouchCancelledAfterLongClickScriptHandler(int nHandler);
	void removeOnTouchMovedAfterLongClickScriptHandler();
	void removeOnTouchEndedAfterLongClickScriptHandler();
	void removeOnTouchCancelledAfterLongClickScriptHandler();
#endif

};

NS_CC_WIDGET_END

#endif //__CCWIDGET_WIDGETWINDOW_H__