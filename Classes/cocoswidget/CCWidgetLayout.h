/****************************************************************************
Copyright (c) 2013 viva

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
#include "CCWidgetMacros.h"
#include "CCWidget.h"

NS_CC_WIDGET_BEGIN

/**
 * 名称 : SEL_AfterLongClickHandler
 * 功能 : 长点击之后的触摸事件的外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 *        pTouch - 触摸信息
 *        fDuration - 经过的时间
 * 输出 : 
 */
typedef void (CCObject::*SEL_AfterLongClickHandler)(CCObject *pSender, CCTouch *pTouch, float fDuration);
#define afterlongclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_AfterLongClickHandler)(&_SELECTOR_)

/**
 * 类名 : CCWidgetLayout
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 所有控件的根节点，负责接收2d-x提供的事件处理，并提供
          处理长点击之后的事件处理
 */
class CCWidgetLayout : public CCNode, public CCTouchDelegate
{
public:
	CCWidgetLayout();
	virtual ~CCWidgetLayout();
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
	static CCWidgetLayout* create();

	/**
	 * 名称 : visit()
	 * 功能 : 每帧记录触摸所经过的时间
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void visit();	

	/**
	 * 名称 : getTouchPriority()
	 * 功能 : 获取注册引擎的触摸优先级
	 * 输入 : 
	 * 输出 : 优先级
	 */
	virtual int getTouchPriority();

	/**
	 * 名称 : setTouchPriority()
	 * 功能 : 设置注册引擎的触摸优先级
	 * 输入 : nTouchPriority - 优先级
	 * 输出 : 
	 */
	virtual void setTouchPriority(int nTouchPriority);

	/**
	 * 名称 : isTouchEnabled()
	 * 功能 : 获取是否接收触摸事件
	 * 输入 : 
	 * 输出 : 是否接收
	 */
	virtual bool isTouchEnabled();

	/**
	 * 名称 : setTouchEnabled()
	 * 功能 : 设置是否接收触摸事件
	 * 输入 : bTouchEnabled - 是否接收
	 * 输出 : 
	 */
	virtual void setTouchEnabled(bool bTouchEnabled);

	/**
	 * 名称 : ccTouchBegan()
	 * 功能 : 当触摸发生时，由引擎调用
	 * 输入 : pTouch - 触摸信息 pEvent - 事件
	 * 输出 : 是否接收后续事件
	 */
	virtual bool ccTouchBegan(CCTouch* pTouch, CCEvent* pEvent);

	/**
	 * 名称 : ccTouchMoved()
	 * 功能 : 当触摸移动时，由引擎调用
	 * 输入 : pTouch - 触摸信息 pEvent - 事件
	 * 输出 : 
	 */
	virtual void ccTouchMoved(CCTouch* pTouch, CCEvent* pEvent);

	/**
	 * 名称 : ccTouchEnded()
	 * 功能 : 当触摸完成时，由引擎调用
	 * 输入 : pTouch - 触摸信息 pEvent - 事件
	 * 输出 : 
	 */
	virtual void ccTouchEnded(CCTouch* pTouch, CCEvent* pEvent);

	/**
	 * 名称 : ccTouchCancelled()
	 * 功能 : 当触摸被中断时，由引擎调用
	 * 输入 : pTouch - 触摸信息 pEvent - 事件
	 * 输出 : 
	 */
	virtual void ccTouchCancelled(CCTouch* pTouch, CCEvent* pEvent);

	/**
	 * 名称 : findViewById()
	 * 功能 : 获取控件树里的子控件 通过id
	 * 输入 : id - 子控件id
	 * 输出 : 子控件
	 */
	virtual CCObject* findViewById(int id);

	/**
	 * 名称 : setTouchMovedAfterLongClickSelector()
	 * 功能 : 设置当子控件长点击之后的触摸事件的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	virtual void setTouchMovedAfterLongClickSelector(CCObject* pTarget, SEL_AfterLongClickHandler pHandler);

	/**
	 * 名称 : setTouchEndedAfterLongClickSelector()
	 * 功能 : 设置当子控件长点击之后的触摸事件的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	virtual void setTouchEndedAfterLongClickSelector(CCObject* pTarget, SEL_AfterLongClickHandler pHandler);

	/**
	 * 名称 : setTouchEndedAfterLongClickSelector()
	 * 功能 : 设置当子控件长点击之后的触摸事件的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	virtual void setTouchCancelledAfterLongClickSelector(CCObject* pTarget, SEL_AfterLongClickHandler pHandler);

public:
	virtual void setLongClickTouchHandlerWidget(CCNode* pWidget);
	
protected:
	virtual CCObject* findViewById(CCArray* pChidren, int id);
	CCWidget* collisionWithWidget(const CCPoint& tPoint);
	virtual void executeTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
    virtual void executeTouchCancelledAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);

protected:
	int m_nId;
	int m_nTouchPriority;
	bool m_bTouchEnabled;
	float m_fTouchedDuration;
	bool m_bIsTouched;

	CCNode* m_pLongClickedWidget;
	CCWidget* m_pSelectedWidget;

    CCObject* m_pTouchMovedAfterLongClickListener;
    CCObject* m_pTouchEndedAfterLongClickListener;
    CCObject* m_pTouchCancelledAfterLongClickListener;

    SEL_AfterLongClickHandler m_pTouchMovedAfterLongClickHandler;
    SEL_AfterLongClickHandler m_pTouchEndedAfterLongClickHandler;
    SEL_AfterLongClickHandler m_pTouchCancelledAfterLongClickHandler;

};

NS_CC_WIDGET_END

#endif //__CCWIDGET_WIDGETLAYOUT_H__