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
 * descpt : 
 */
class CWidget : public CWidgetTouchProtocol
{
public:
	CWidget();
	virtual ~CWidget();

	int getUserTag() const;
	void setUserTag(int nTag);
	const char* getId();
	void setId(const char* id);
	const char* getDescription();
	void setDescription(const char* description);

	virtual bool isEnabled();
	virtual void setEnabled(bool bEnabled);
	virtual bool isTouchEnabled();
	virtual void setTouchEnabled(bool bTouchEnabled);

	virtual void interruptTouchCascade(CCTouch* pTouch, float fDuration);
    virtual void interruptTouch(CCTouch* pTouch, float fDuration);
    virtual bool isTouchInterrupted();

	virtual void setOnTouchBeganListener(CCObject* pListener, SEL_TouchBeganHandler pHandler);
    virtual void setOnTouchMovedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
    virtual void setOnTouchEndedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
    virtual void setOnTouchCancelledListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch){ return eWidgetTouchNone; }
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration){}
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration){}
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration){}

	virtual CWidgetTouchModel executeTouchBeganHandler(CCTouch* pTouch);
	virtual void executeTouchMovedHandler(CCTouch* pTouch, float fDuration);
	virtual void executeTouchEndedHandler(CCTouch* pTouch, float fDuration);
    virtual void executeTouchCancelledHandler(CCTouch* pTouch, float fDuration);

	virtual void setLongClickTouchHandlerWidget(CCNode* pWidget, int id);

protected:
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