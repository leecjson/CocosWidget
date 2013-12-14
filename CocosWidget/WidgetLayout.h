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
#ifndef __CCWIDGET_WIDGETLAYOUT_H__
#define __CCWIDGET_WIDGETLAYOUT_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"
#include <map>

NS_CC_WIDGET_BEGIN

/**
 * class    : CWidgetLayout
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 控件布局容器，作为控件树的根
 */
class CWidgetLayout : public CCNodeRGBA, public CCTouchDelegate
{
public:
	CWidgetLayout();
	virtual ~CWidgetLayout();

	// 初始化默认数据
	virtual bool init();
	// 计时
	virtual void visit();
	// 开启触摸事件接收
	virtual void onEnter();
	// 关闭触摸事件接收
	virtual void onExit();
	
	// 获取接收触摸事件的优先级
	virtual int getTouchPriority();
	// 设置接收触摸事件的优先级
	virtual void setTouchPriority(int nTouchPriority);
	// 获取是否接收触摸事件
	virtual bool isTouchEnabled();
	// 设置接收触摸事件
	virtual void setTouchEnabled(bool bTouchEnabled);
	
	// 在控件树内查找第一个配置ID的控件
	virtual CCObject* findViewById(const char* id);

	// 获取是否开启多点触摸
	bool isMultiTouchEnabled() const;
	// 设置开启多点触摸
	void setMultiTouchEnabled(bool bEnabled);

	// 设置当长点击后移动事件的外部处理函数
	virtual void setOnTouchMovedAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);
	// 设置当长点击后结束事件的外部处理函数
	virtual void setOnTouchEndedAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);
	// 设置当长点击后中断事件的外部处理函数
	virtual void setOnTouchCancelledAfterLongClickListener(CCObject* pListener, SEL_AfterLongClickHandler pHandler);

	virtual bool ccTouchBegan(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchMoved(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchEnded(CCTouch* pTouch, CCEvent* pEvent);
	virtual void ccTouchCancelled(CCTouch* pTouch, CCEvent* pEvent);

	virtual void ccTouchesBegan(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesMoved(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesEnded(CCSet* pTouches, CCEvent* pEvent);
	virtual void ccTouchesCancelled(CCSet* pTouches, CCEvent* pEvent);

	static CWidgetLayout* create();

public:
	virtual void setLongClickTouchHandlerWidget(CCObject* pWidgetObject, int nTouchId);
	
protected:
	virtual CCObject* find(CCArray* pChidren, const char* id);
	virtual void executeTouchMovedAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchEndedAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchCancelledAfterLongClickHandler(CCObject* pSender, CCTouch* pTouch, float fDuration);

protected:
	struct tagMultiTouchKeeper
	{
		CWidget* pWidget;
		CCObject* pLongClickedWidgetObject;
		float fTouchedDuration;
	};
	std::map<int, tagMultiTouchKeeper> m_mMultiTouchKeeper;

protected:
	int m_nTouchPriority;
	bool m_bTouchEnabled;
	float m_fTouchedDuration;
	bool m_bIsTouched;
	bool m_bMultiTouchEnabled;

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

#endif //__CCWIDGET_WIDGETLAYOUT_H__