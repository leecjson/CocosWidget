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
#ifndef __CCWIDGET_WIDGET_H__
#define __CCWIDGET_WIDGET_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"

NS_CC_WIDGET_BEGIN

class CCWidget;
class CCCheckableProtocol;
class CCWidgetTouchProtocol;

/**
 * 枚举 : CCWidgetTouchModel
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : cocoswidget体系中的控件触摸模式
 */
enum CCWidgetTouchModel
{
	eWidgetTouchNone,          // 不接收事件
	eWidgetTouchTransient,     // 暂时性接收事件，这个事件可能会被上级控件所中断。
	eWidgetTouchSustained,     // 持续性接收事件，这个事件不会被上级控件中断。
};

/**
 * 名称 : SEL_TouchBeganHandler
 * 功能 : 触摸开始事件的外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 *        pTouch - 触摸信息
 * 输出 : 触摸模式
 */
typedef CCWidgetTouchModel (CCObject::*SEL_TouchBeganHandler)(CCObject *pSender, CCTouch *pTouch);

/**
 * 名称 : SEL_TouchHandler
 * 功能 : 触摸事件的外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 *        pTouch - 触摸信息
 *        fDuration - 距触摸开始所经过的时间 单位(秒)
 * 输出 : 是否让控件继续处理事件
 */
typedef bool (CCObject::*SEL_TouchHandler)(CCObject *pSender, CCTouch *pTouch, float fDuration);

/**
 * 名称 : SEL_ClickHandler
 * 功能 : 点击事件外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 * 输出 : 
 */
typedef void (CCObject::*SEL_ClickHandler)(CCObject *pSender);

/**
 * 名称 : SEL_LongClickHandler
 * 功能 : 长点击事件外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 * 输出 : 是否接受后续触摸事件
 */
typedef bool (CCObject::*SEL_LongClickHandler)(CCObject* pSender);

/**
 * 名称 : SEL_CheckHandler
 * 功能 : 选中事件外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 *        bChecked - 是否被选中
 * 输出 : 
 */
typedef void (CCObject::*SEL_CheckHandler)(CCObject *pSender, bool bChecked);

#define touchbegan_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchBeganHandler)(&_SELECTOR_)
#define touch_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_TouchHandler)(&_SELECTOR_)
#define click_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ClickHandler)(&_SELECTOR_)
#define longclick_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_LongClickHandler)(&_SELECTOR_)
#define check_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_CheckHandler)(&_SELECTOR_)

/**
 * 类名 : CCWidgetTouchProtocol
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 描述了在cocoswidget控件体系中所存在的事件分发回调函数
 */
class CCWidgetTouchProtocol
{
public:
    virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch) = 0;
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration) = 0;
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration) = 0;
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration) = 0;
};

/**
 * 类名 : CCCheckableProtocol
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 描述了所有具有选中状态属性的控件
 */
class CCCheckableProtocol
{
public:
	CCCheckableProtocol();

	/**
	 * 名称 : isChecked()
	 * 功能 : 获取是否选中
	 * 输入 : 
	 * 输出 : 是否选中
	 */
	virtual bool isChecked();

	/**
	 * 名称 : setChecked()
	 * 功能 : 设置是否选中
	 * 输入 : bChecked - 是否选中
	 * 输出 : 
	 */
	virtual void setChecked(bool bChecked);

	/**
	 * 名称 : setCheckSelector()
	 * 功能 : 设置选中状态改变事件的外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	virtual void setCheckSelector(CCObject* pTarget, SEL_CheckHandler pHandler);

	/**
	 * 名称 : setExclusion()
	 * 功能 : 设置互斥组，在互斥组内的对象不能同时被选中
	 * 输入 : nExclusion - 互斥组
	 * 输出 : 
	 */
	virtual void setExclusion(int nExclusion);

	/**
	 * 名称 : getExclusion()
	 * 功能 : 获取互斥组，在互斥组内的对象不能同时被选中
	 * 输入 : 
	 * 输出 : 互斥组
	 */
	virtual int getExclusion();

protected:
	/**
	 * 名称 : executeCheck()
	 * 功能 : 执行当选中时的外部处理函数
	 * 输入 : pTarget - 控件本身
	 * 输出 : 
	 */
	virtual void executeCheck(CCObject* pTarget);

protected:
	/// 是否被选中
	bool m_bChecked;
	/// 互斥组
	int  m_nExclusion;

	CCObject* m_pCheckListener;
	SEL_CheckHandler m_pCheckHandler;
};

/**
 * 类名 : CCWidget
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : CCWidget是一个描述了控件基本信息的接口类。所以实现的控件都继承自CCWidget
 */
class CCWidget : public CCWidgetTouchProtocol
{
public:
	CCWidget();
	virtual ~CCWidget();

	/**
	 * 名称 : getUserTag()
	 * 功能 : 获取用户标识
	 * 输入 : 
	 * 输出 : 用户标识
	 */
	virtual int getUserTag() const;

	/**
	 * 名称 : setUserTag()
	 * 功能 : 设置用户标识
	 * 输入 : nTag - 用户标识
	 * 输出 : 
	 */
	virtual void setUserTag(int nTag);

	/**
	 * 名称 : getId()
	 * 功能 : 获取控件id
	 * 输入 : 
	 * 输出 : 控件id
	 */
	virtual int getId() const;

	/**
	 * 名称 : setId()
	 * 功能 : 设置控件id
	 * 输入 : nId - 控件id
	 * 输出 : 
	 */
	virtual void setId(int nId);

	/**
	 * 名称 : isEnabled()
	 * 功能 : 获取控件是否可用
	 * 输入 : 
	 * 输出 : 是否可能
	 */
	virtual bool isEnabled();

	/**
	 * 名称 : setEnabled()
	 * 功能 : 设置空间是否可用
	 * 输入 : bEnabled - 是否可能
	 * 输出 : 
	 */
	virtual void setEnabled(bool bEnabled);

	/**
	 * 名称 : isTouchEnabled()
	 * 功能 : 获取控件是否可接收触摸事件
	 * 输入 : 
	 * 输出 : 是否可以接收
	 */
	virtual bool isTouchEnabled();

	/**
	 * 名称 : setTouchEnabled()
	 * 功能 : 设置控件是否可接收触摸事件
	 * 输入 : bTouchEnabled - 是否可以接收
	 * 输出 : 
	 */
	virtual void setTouchEnabled(bool bTouchEnabled);
    
	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 触摸开始时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 * 输出 : 触摸模式
	 */
    virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch){ return eWidgetTouchNone; }

	/**
	 * 名称 : onTouchMoved()
	 * 功能 : 触摸过程移动时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration){}

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸完成时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration){}

	/**
	 * 名称 : onTouchCancelled()
	 * 功能 : 触摸被中断时调用 需要子类覆盖
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration){}

	/**
	 * 名称 : executeTouchBegan()
	 * 功能 : 触摸开始时调用，触摸信息先由外部处理，再返回到内部
	 * 输入 : pTouch - 触摸信息
	 * 输出 : 触摸模式
	 */
	virtual CCWidgetTouchModel executeTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : executeTouchMoved()
	 * 功能 : 触摸过程中移动时调用，触摸信息先由外部处理，再返回到内部
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void executeTouchMoved(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : executeTouchEnded()
	 * 功能 : 触摸完成动时调用，触摸信息先由外部处理，再返回到内部
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void executeTouchEnded(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : executeTouchCancelled()
	 * 功能 : 触摸被中断时调用，触摸信息先由外部处理，再返回到内部
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void executeTouchCancelled(CCTouch *pTouch, float fDuration);
    
	/**
	 * 名称 : setTouchBeganSelector()
	 * 功能 : 设置触摸开始事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
    virtual void setTouchBeganSelector(CCObject *pTarget, SEL_TouchBeganHandler pHandler);

	/**
	 * 名称 : setTouchMovedSelector()
	 * 功能 : 设置触摸移动事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
    virtual void setTouchMovedSelector(CCObject *pTarget, SEL_TouchHandler pHandler);

	/**
	 * 名称 : setTouchEndedSelector()
	 * 功能 : 设置触摸结束事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
    virtual void setTouchEndedSelector(CCObject *pTarget, SEL_TouchHandler pHandler);

	/**
	 * 名称 : setTouchCancelledSelector()
	 * 功能 : 设置触摸被中断事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
    virtual void setTouchCancelledSelector(CCObject *pTarget, SEL_TouchHandler pHandler);
    
	/**
	 * 名称 : setClickSelector()
	 * 功能 : 设置控件点击事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
	virtual void setClickSelector(CCObject* pTarget, SEL_ClickHandler pHandler);

	/**
	 * 名称 : setLongClickSelector()
	 * 功能 : 设置控件长点击事件的外部处理函数。
	 * 输入 : pTarget - 接收对象
	 *        pHandler - 接收函数
	 * 输出 : 
	 */
	virtual void setLongClickSelector(CCObject* pTarget, SEL_LongClickHandler pHandler);
    
	/**
	 * 名称 : onTouchedUpdate()
	 * 功能 : 每帧更新函数，与控件visit结合，每帧检测是否长点击
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onTouchedUpdate();

	/**
	 * 名称 : setLongClickTouchHandlerWidget()
	 * 功能 : 当本控件触发长点击后，把这个控件作为目标控件，传递到最底层
	 *        的CCWidgetLayout，并由CCWidgetLayout作为控制器分发长点击之
	 *        后的事件给外部函数
	 * 输入 : pWidget - 本控件的Node对象
	 * 输出 : 
	 */
	virtual void setLongClickTouchHandlerWidget(CCNode* pWidget);

	/**
	 * 名称 : interruptTouchCascade()
	 * 功能 : 中断触摸事件，从本控件开始，向上逐级中断，直到CCWidgetLayout
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
	virtual void interruptTouchCascade(CCTouch* pTouch, float fDuration);

	/**
	 * 名称 : interruptTouch()
	 * 功能 : 中断本控件触摸事件
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void interruptTouch(CCTouch* pTouch, float fDuration);

	/**
	 * 名称 : isTouchInterrupted()
	 * 功能 : 获取是否已经中断了触摸事件
	 * 输入 : 
	 * 输出 : 是否中断
	 */
    virtual bool isTouchInterrupted();
	
	/**
	 * 名称 : updateBackgroundNodePosition()
	 * 功能 : 更新背景Node的坐标到本控件的中心点
	 * 输入 : 
	 * 输出 : 是否中断
	 */
	virtual void updateBackgroundNodePosition();

	/**
	 * 名称 : setBackgroundNode()
	 * 功能 : 设置背景对象
	 * 输入 : pNode - 背景对象
	 * 输出 : 
	 */
	virtual void setBackgroundNode(CCNode* pNode);

	/**
	 * 名称 : getBackgroundNode()
	 * 功能 : 获取背景对象
	 * 输入 : 
	 * 输出 : 背景对象
	 */
	virtual CCNode* getBackgroundNode() const;

private:
	/// 每帧更新函数的开关
	bool m_bTouchedUpdate;
	/// 长点击后最后一次触摸事件所经过的时间
	float m_fLongClickLastTouchDuration;
	/// 长点击后最后一次触摸事件信息
	CCTouch* m_pLongClickLastTouch;

protected:
	/**
	 * 名称 : performTouchedUpdate()
	 * 功能 : 允许开始执行每帧更新函数
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void performTouchedUpdate();

	/**
	 * 名称 : performTouchedUpdate()
	 * 功能 : 立即禁止执行每帧更新函数
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void stopTouchedUpdate();

	/**
	 * 名称 : executeLongClick()
	 * 功能 : 执行长点击的外部处理事件
	 * 输入 : 
	 * 输出 : 长点击后是否接收后续事件
	 */
	virtual bool executeLongClick();

	/**
	 * 名称 : executeClick()
	 * 功能 : 执行点击的外部处理事件
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void executeClick();

	/**
	 * 名称 : setWidgetNode()
	 * 功能 : 设置本控件的具体Node对象
	 * 输入 : pWidgetNode - 控件
	 * 输出 : 
	 */
	virtual void setWidgetNode(CCNode* pWidgetNode);

protected:
	/// 控件id
	int m_nId;
	/// 控件用户标识
	int m_nUserTag;
	/// 控件是否可用
	bool m_bEnabled;
	/// 控件是否接收触摸事件
	bool m_bTouchEnabled;
	/// 控件触摸事件是否已经被中断
    bool m_bTouchInterrupt;
	/// 控件是否开启了长点击事件处理
	bool m_bLongClickEnabled;
	/// 当点击控件后 开始记录时间，判断是否为长点击 单位(秒)
	float m_fLongClickTimeCounter;

	/// 本控件
	CCNode* m_pWidgetNode;
	/// 背景对象
	CCNode* m_pBackgroundNode;
    
    CCObject* m_pTouchBeganListener;
    CCObject* m_pTouchMovedListener;
    CCObject* m_pTouchEndedListener;
    CCObject* m_pTouchCancelledListener;
	CCObject* m_pClickListener;
	CCObject* m_pLongClickListener;

    SEL_TouchBeganHandler m_pTouchBeganHandler;
    SEL_TouchHandler m_pTouchMovedHandler;
    SEL_TouchHandler m_pTouchEndedHandler;
    SEL_TouchHandler m_pTouchCancelledHandler;
	SEL_ClickHandler m_pClickHandler;
	SEL_LongClickHandler m_pLongClickHandler;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_WIDGET_H__