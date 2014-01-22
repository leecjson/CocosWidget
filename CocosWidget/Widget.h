/****************************************************************************
Copyright (c) 2014 Lijunlin - Jason lee

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
#ifndef __CCWIDGET_WIDGET_H__
#define __CCWIDGET_WIDGET_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CWidget
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : widget define
 */
class CWidget : public CWidgetTouchProtocol
{
public:
	CWidget();
	virtual ~CWidget();

	// get user tag, it's not relationship with tag
	int getUserTag() const;

	// set user tag
	void setUserTag(int nTag);

	// get widget id
	const char* getId();

	// set widget id
	void setId(const char* id);

	// get description of widget
	const char* getDescription();

	// set description for widget
	void setDescription(const char* description);

	// is widget enabled ? if not, this widget is not going to handle touch event
	virtual bool isEnabled();

	// set enabled
	virtual void setEnabled(bool bEnabled);

	// is widget touch enabled ? if not, this widget is not going to handle touch event
	virtual bool isTouchEnabled();

	// set touch enabled
	virtual void setTouchEnabled(bool bTouchEnabled);

	// interrupt touch event on this widget and beginning interrupt
	virtual void interruptTouchCascade(CCTouch* pTouch, float fDuration);

	// interrupt this widget's touch event and call on touch cancelled immediately
    virtual void interruptTouch(CCTouch* pTouch, float fDuration);

	// is touch interruptted
    virtual bool isTouchInterrupted();

	// set on touch began listener
	virtual void setOnTouchBeganListener(CCObject* pListener, SEL_TouchBeganHandler pHandler);

	// set on touch moved listener
    virtual void setOnTouchMovedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

	// set on touch ended listener
    virtual void setOnTouchEndedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

	// set on touch cancelled listener
    virtual void setOnTouchCancelledListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

public:
	// for child the custom impl 
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch){ return eWidgetTouchNone; }

	// for child the custom impl 
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration){}

	// for child the custom impl 
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration){}

	// for child the custom impl 
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration){}

	// execute touch began handler, it will call listener's hanlder first, next it will call onTouchBegan
	virtual CWidgetTouchModel executeTouchBeganHandler(CCTouch* pTouch);

	// execute touch moved handle
	virtual void executeTouchMovedHandler(CCTouch* pTouch, float fDuration);

	// execute touch ended handle
	virtual void executeTouchEndedHandler(CCTouch* pTouch, float fDuration);

	// execute touch cancelled handle
    virtual void executeTouchCancelledHandler(CCTouch* pTouch, float fDuration);

public:
	virtual void setLongClickTouchHandlerWidget(CCNode* pWidget, int id);

protected:
	// for keep this object
	void setThisObject(CCObject* pThis);

protected:
	std::string m_strId;
	std::string m_strDescription;
	int m_nUserTag;
	bool m_bEnabled;
	bool m_bTouchEnabled;
    bool m_bTouchInterrupt;

	CCObject* m_pThisObject;
    
    CCObject* m_pTouchBeganListener;
    CCObject* m_pTouchMovedListener;
    CCObject* m_pTouchEndedListener;
    CCObject* m_pTouchCancelledListener;

    SEL_TouchBeganHandler m_pTouchBeganHandler;
    SEL_TouchEventHandler m_pTouchMovedHandler;
    SEL_TouchEventHandler m_pTouchEndedHandler;
    SEL_TouchEventHandler m_pTouchCancelledHandler;

#if USING_LUA
protected:
	int m_nTouchBeganScriptHandler;
	int m_nTouchMovedScriptHandler;
	int m_nTouchEndedScriptHandler;
	int m_nTouchCancelledScriptHandler;
public:
	virtual void setOnTouchBeganScriptHandler(int nHandler);
	virtual void setOnTouchMovedScriptHandler(int nHandler);
	virtual void setOnTouchEndedScriptHandler(int nHandler);
	virtual void setOnTouchCancelledScriptHandler(int nHandler);
	virtual void removeOnTouchBeganScriptHandler();
	virtual void removeOnTouchMovedScriptHandler();
	virtual void removeOnTouchEndedScriptHandler();
	virtual void removeOnTouchCancelledScriptHandler();
#endif
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_WIDGET_H__