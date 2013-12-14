/****************************************************************************
Copyright (c) 2013 viva-Lijunlin

Created by Li JunLin on 2013

csdn_viva@foxmail.com
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

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
///
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class    : CToggleView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 开关按钮控件
 */
class CWidget : public CWidgetTouchProtocol
{
public:
	CWidget();
	virtual ~CWidget();

	// 获取用户标签
	int getUserTag() const;
	// 设置用户标签
	void setUserTag(int nTag);
	// 获取控件ID
	const char* getId();
	// 设置控件ID
	void setId(const char* id);

	// 获取控件是否可用
	virtual bool isEnabled();
	// 设置控件是否可用
	virtual void setEnabled(bool bEnabled);
	// 获取控件是否可以触摸
	virtual bool isTouchEnabled();
	// 设置控件是否可以触摸
	virtual void setTouchEnabled(bool bTouchEnabled);

	// 设置按下事件的外部处理函数
	virtual void setOnTouchBeganListener(CCObject* pListener, SEL_TouchBeganHandler pHandler);
	// 设置移动事件的外部处理函数
    virtual void setOnTouchMovedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
	// 设置触摸结束事件的外部处理函数
    virtual void setOnTouchEndedListener(CCObject* pListener, SEL_TouchEventHandler pHandler);
	// 设置触摸中断事件的外部处理函数
    virtual void setOnTouchCancelledListener(CCObject* pListener, SEL_TouchEventHandler pHandler);

	// 从本控件开始向上依次中断触摸事件
	virtual void interruptTouchCascade(CCTouch* pTouch, float fDuration);
	// 中断本控件触摸事件
    virtual void interruptTouch(CCTouch* pTouch, float fDuration);
	// 获取本控件是否已经中断触摸事件
    virtual bool isTouchInterrupted();

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