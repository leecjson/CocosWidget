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
#ifndef __CCWIDGET_SCROLL_H__
#define __CCWIDGET_SCROLL_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"
#include "CCWidget.h"
#include "CCPanel.h"

NS_CC_WIDGET_BEGIN

class CCScroll;
class CCScrollContainer;

/**
 * 名称 : SEL_ScrollHandler
 * 功能 : 滚动事件的外部处理函数模型
 * 输入 : pSender - 调用本函数的控件
 * 输出 : 
 */
typedef void (CCObject::*SEL_ScrollHandler)(CCObject* pSender);
#define scroll_selector(_SELECTOR_) (cocos2d::cocoswidget::SEL_ScrollHandler)(&_SELECTOR_)

/**
 * 枚举 : CCScrollDirection
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : ScrollView的滚动方向
 */
enum CCScrollDirection
{
	eScrollDirectionHorizontal,    //水平滚动
	eScrollDirectionVertical,      //垂直滚动
	eScrollDirectionBoth           //多方向滚动
};

/**
 * 类名 : CCScrollContainer
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : ScrollView的内容容器
 */
class CCScrollContainer : public CCPanel
{
public:
	virtual void reset();
	friend class CCScroll;
};

/**
 * 类名 : CCScroll
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 实现了滚动效果
 */
class CCScroll : public CCPanel
{
public:
	CCScroll();
	virtual ~CCScroll();
    virtual void onExit();
	virtual bool init();
	static CCScroll* create(const CCSize& contentSize);

	/**
	 * 名称 : visit()
	 * 功能 : 覆盖函数，实现裁剪
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void visit();

	/**
	 * 名称 : initWithSize()
	 * 功能 : 通过滑动控件的可视区域大小初始化
	 * 输入 : tSize - 大小
	 * 输出 : 是否初始化成功
	 */
	virtual bool initWithSize(const CCSize& tSize);

	/**
	 * 名称 : collisionWithWidget()
	 * 功能 : 检测是否点击滑动控件的容器
	 * 输入 : tPoint - 点击坐标
	 * 输出 : 滑动控件容器
	 */
	virtual CCWidget* collisionWithWidget(const CCPoint& tPoint);

	/**
	 * 名称 : setContainerSize()
	 * 功能 : 设置滑动控件容器的大小
	 * 输入 : tSize - 大小
	 * 输出 : 
	 */
	void setContainerSize(CCSize tSize);

	/**
	 * 名称 : getContainerSize()
	 * 功能 : 获取滑动控件容器的大小
	 * 输入 : 
	 * 输出 : 大小
	 */
	const CCSize& getContainerSize() const;

	/**
	 * 名称 : getContainerSize()
	 * 功能 : 获取滑动控件容器的大小
	 * 输入 : 
	 * 输出 : 大小
	 */
	CCScrollDirection getDirection();

	/**
	 * 名称 : setDirection()
	 * 功能 : 设置滑动反响
	 * 输入 : eDirection - 方向
	 * 输出 : 
	 */
	void setDirection(CCScrollDirection eDirection);

	/**
	 * 名称 : getContainer()
	 * 功能 : 获取滑动反响
	 * 输入 : 
	 * 输出 : 方向
	 */
	CCScrollContainer* getContainer();

	/**
	 * 名称 : setContentSize()
	 * 功能 : 设置滑动控件视图的大小
	 * 输入 : contentSize - 视图大小
	 * 输出 : 
	 */
	virtual void setContentSize(const CCSize& contentSize);

	/**
	 * 名称 : getContentOffset()
	 * 功能 : 获取滑动控件视图的大小
	 * 输入 : 
	 * 输出 : 视图大小
	 */
	const CCPoint& getContentOffset() const;

	/**
	 * 名称 : setBounceable()
	 * 功能 : 设置滑动控件是否具有弹性
	 * 输入 : bBounceable - 是否有弹性
	 * 输出 : 
	 */
	void setBounceable(bool bBounceable);

	/**
	 * 名称 : isBounceable()
	 * 功能 : 获取滑动控件是否具有弹性
	 * 输入 : 
	 * 输出 : 是否有弹性
	 */
	bool isBounceable();

	/**
	 * 名称 : setDeaccelerateable()
	 * 功能 : 设置滑动控件是否启用滑动减速度
	 * 输入 : bDeaccelerateable - 滑动减速度
	 * 输出 : 
	 */
	void setDeaccelerateable(bool bDeaccelerateable);

	/**
	 * 名称 : isDeaccelerateable()
	 * 功能 : 获取滑动控件是否启用滑动减速度
	 * 输入 : 
	 * 输出 : 滑动减速度
	 */
	bool isDeaccelerateable();

	/**
	 * 名称 : setDragable()
	 * 功能 : 设置滑动控件是否能够被拖拽
	 * 输入 : bDragable - 是否能够被拖拽
	 * 输出 : 
	 */
	void setDragable(bool bDragable);

	/**
	 * 名称 : isDragable()
	 * 功能 : 获取滑动控件是否能够被拖拽
	 * 输入 : 
	 * 输出 : 是否能够被拖拽
	 */
	bool isDragable();

	/**
	 * 名称 : isTouchMoved()
	 * 功能 : 获取滑动控件是否开始滑动
	 * 输入 : 
	 * 输出 : 是否开始滑动
	 */
    bool isTouchMoved();

	/**
	 * 名称 : setScrollSelector()
	 * 功能 : 设置滑动控件的滑动事件外部处理函数
	 * 输入 : pTarget - 处理对象
	 *        pHandler - 处理函数
	 * 输出 : 
	 */
	void setScrollSelector(CCObject* pTarget, SEL_ScrollHandler pHandler);
    
	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 触摸开始时调用，并传递事件给子控件
	 * 输入 : pTouch - 触摸信息
	 * 输出 : eWidgetTouchSustained
	 */
    virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchMoved()
	 * 功能 : 触摸过程移动时调用，并传递事件给子控件，如果子控件
	 *        可以被中断，并且开始拖动，就中断子控件的触摸消息
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸完成时调用，记录速度，并开始减速度滑动
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchCancelled()
	 * 功能 : 触摸被中断时调用
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距离触摸开始到现在所经过的时间 单位(秒)
	 * 输出 : 
	 */
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

public:

	/**
	 * 名称 : stopContainerAnimation()
	 * 功能 : 停止滑动容器的移动动作 tag 1
	 * 输入 : 
	 * 输出 : 
	 */
	void stopContainerAnimation();

	/**
	 * 名称 : getMaxOffset()
	 * 功能 : 获取滑动容器可移动到的最大坐标
	 * 输入 : 
	 * 输出 : 最大坐标
	 */
	const CCPoint& getMaxOffset() const;

	/**
	 * 名称 : getMinOffset()
	 * 功能 : 获取滑动容器可移动到的最小坐标
	 * 输入 : 
	 * 输出 : 最小坐标
	 */
	const CCPoint& getMinOffset() const;

	/**
	 * 名称 : setContentOffsetToTop()
	 * 功能 : 设置滑动容器内容的位置，显示在最顶边，只有在垂直滚动时生效
	 * 输入 : 
	 * 输出 : 
	 */
	void setContentOffsetToTop();

	/**
	 * 名称 : setContentOffsetToTop()
	 * 功能 : 设置滑动容器内容的位置，显示在最顶边，只有在垂直滚动时生效
	 *        并指定时间属性，通过move动作完成
	 * 输入 : fDuration - 移动到顶部所需要的时间
	 * 输出 : 
	 */
	void setContentOffsetToTopInDuration(float fDuration);

	/**
	 * 名称 : setContentOffsetToTopEaseIn()
	 * 功能 : 设置滑动容器内容的位置，显示在最顶边，只有在垂直滚动时生效
	 *        并指定时间属性，通过move动作完成
	 * 输入 : fDuration - 移动到顶部所需要的时间
	 *        fRate - 减速度的百分比
	 * 输出 : 
	 */
	void setContentOffsetToTopEaseIn(float fDuration, float fRate);

	/**
	 * 名称 : relocateContainer()
	 * 功能 : 如果内容容器超出边界，自动调整到边界内
	 * 输入 : 
	 * 输出 : 
	 */
	void relocateContainer();

	/**
	 * 名称 : setContentOffset
	 * 功能 : 设置内容容器的偏移位置，不能超出边界
	 * 输入 : tOffset - 位置偏移
	 * 输出 : 
	 */
	void setContentOffset(CCPoint tOffset);

	/**
	 * 名称 : setContentOffsetInDuration
	 * 功能 : 设置内容容器的偏移位置，不能超出边界，通过动作实现
	 * 输入 : tOffset - 位置偏移
	 *        fDuration - 动作需要的时间
	 * 输出 : 
	 */
	void setContentOffsetInDuration(CCPoint tOffset, float fDuration);

	/**
	 * 名称 : setContentOffsetEaseIn
	 * 功能 : 设置内容容器的偏移位置，不能超出边界，通过动作实现
	 * 输入 : tOffset - 位置偏移
	 *        fDuration - 动作需要的时间
	 *        fRate - 减速度百分比
	 * 输出 : 
	 */
	void setContentOffsetEaseIn(CCPoint tOffset, float fDuration, float fRate);

protected:
	void relocateContainerWithoutCheck(const CCPoint& tOffset);
	void setContentOffsetWithoutCheck(const CCPoint& tOffset);
	void setContentOffsetInDurationWithoutCheck(const CCPoint& tOffset, float fDuration);
	void setContentOffsetEaseInWithoutCheck(const CCPoint& tOffset, float fDuration, float fRate);

protected:
	bool m_bDeaccelerateScrolling;
	void perpareDeaccelerateScroll();
	void performedDeaccelerateScrolling(float dt);
	void stoppedDeaccelerateScroll();

protected:
	bool m_bAnimatedScrolling;
	void perpareAnimatedScroll();
    void performedAnimatedScrolling(float dt);
    void stoppedAnimatedScroll();

protected:
    virtual void onScrolling(){};
	virtual void onDeaccelerateScrollEnded(){};
	virtual void onDraggingScrollEnded(){};
	void updateLimitOffset();
	bool validateOffset(CCPoint& tPoint);
	void executeScroll();

protected:
	/// 滑动容器
	CCScrollContainer *m_pContainer;
	/// 滑动方向
	CCScrollDirection m_eDirection;
	/// 最后一次move的位置
	CCPoint m_tLastMovePoint;
	/// 是否减速度滑动
	bool m_bDeaccelerateable;
	/// 是否有弹性
	bool m_bBounceable;
	/// 是否正在拖动
	bool m_bDragging;
	/// 是否可以拖动
	bool m_bDragable;
	/// 拖动的速度
	float m_fDragSpeed;
	/// 拖动的距离
	CCPoint m_tScrollDistance;
	/// 按下时的位置
	CCPoint m_tTouchBeganPoint;
	/// 是否拖住并且移动了
    bool m_bTouchMoved;
	/// 滑动容器最小的位置
	CCPoint m_tMinOffset;
	/// 滑动容器最大的位置
	CCPoint m_tMaxOffset;

	CCObject* m_pScrollListener;
	SEL_ScrollHandler m_pScrollHandler;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_SCROLL_H__