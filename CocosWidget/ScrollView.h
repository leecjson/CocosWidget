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
#ifndef __CCWIDGET_SCROLLVIEW_H__
#define __CCWIDGET_SCROLLVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Panel.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

class CScrollView;
class CScrollViewContainer;

/**
 * enum     : CScrollViewDirection
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 滚动视图的方向枚举定义
 */
enum CScrollViewDirection
{
	eScrollViewDirectionHorizontal,    //水平滚动
	eScrollViewDirectionVertical,      //垂直滚动
	eScrollViewDirectionBoth           //多方向滚动
};

/**
 * class    : CScrollViewContainer
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 滚动视图容器
 */
class CScrollViewContainer : public CPanel
{
public:
	virtual void reset();
	friend class CScrollView;
};

/**
 * class    : CScrollView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 滚动视图控件定义
 */
class CScrollView : public CPanel, public CScrollableProtocol
{
public:
	CScrollView();
	virtual ~CScrollView();
	virtual void visit();
	
	// 当从节点移除时关闭自调整动画
    virtual void onExit();
	// 初始化默认数据
	virtual bool init();
	// 通过视图大小初始化
	static CScrollView* create(const CCSize& contentSize);
	// 通过视图大小初始化
	virtual bool initWithSize(const CCSize& tSize);
	// 设置滑动控件容器的大小
	void setContainerSize(CCSize tSize);
	// 获取滑动控件容器的大小
	const CCSize& getContainerSize() const;
	// 获取滑动方向
	CScrollViewDirection getDirection();
	// 设置滑动方向
	void setDirection(CScrollViewDirection eDirection);
	// 获取滑动容器
	CScrollViewContainer* getContainer();
	// 当设置大小时更新内容数据
	virtual void setContentSize(const CCSize& contentSize);
	
	// 获取滑动容器当前位置
	const CCPoint& getContentOffset() const;
	// 设置是否有弹性
	void setBounceable(bool bBounceable);
	// 获取是否有弹性
	bool isBounceable();
	// 设置是否惯性减速度
	void setDeaccelerateable(bool bDeaccelerateable);
	// 获取是否惯性减速度
	bool isDeaccelerateable();
	// 设置是否可以拖动
	void setDragable(bool bDragable);
	// 获取是否可以拖动
	bool isDragable();
	// 是否被拖动了
    bool isTouchMoved();
    
	// 停止滑动容器的调整动画
	void stopContainerAnimation();
	// 获取滑动容器的最大位置
	const CCPoint& getMaxOffset() const;
	// 获取滑动容器的最小位置
	const CCPoint& getMinOffset() const;
	// 滚动到最上方
	void setContentOffsetToTop();
	// 滚动到最上方 动画
	void setContentOffsetToTopInDuration(float fDuration);
	// 滚动到最上方 动画 + 减速度
	void setContentOffsetToTopEaseIn(float fDuration, float fRate);
	// 滚动到最下方
	void setContentOffsetToBottom();
	// 滚动到最右方
	void setContentOffsetToRight();
	// 滚动到最左方
	void setContentOffsetToLeft();
	// 自动调整滑动容器的位置
	void relocateContainer();
	// 设置滑动容器的位置
	void setContentOffset(CCPoint tOffset);
	// 设置滑动容器的位置 动画
	void setContentOffsetInDuration(CCPoint tOffset, float fDuration);
	// 设置滑动容器的位置 减速度
	void setContentOffsetEaseIn(CCPoint tOffset, float fDuration, float fRate);

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

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

protected:
	// 滑动容器
	CScrollViewContainer *m_pContainer;
	// 滑动方向
	CScrollViewDirection m_eDirection;
	// 最后一次move的位置
	CCPoint m_tLastMovePoint;
	// 是否减速度滑动
	bool m_bDeaccelerateable;
	// 是否有弹性
	bool m_bBounceable;
	// 是否正在拖动
	bool m_bDragging;
	// 是否可以拖动
	bool m_bDragable;
	// 拖动的速度
	float m_fDragSpeed;
	// 拖动的距离
	CCPoint m_tScrollDistance;
	// 按下时的位置
	CCPoint m_tTouchBeganPoint;
	// 是否拖住并且移动了
    bool m_bTouchMoved;
	// 滑动容器最小的位置
	CCPoint m_tMinOffset;
	// 滑动容器最大的位置
	CCPoint m_tMaxOffset;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_SCROLLVIEW_H__