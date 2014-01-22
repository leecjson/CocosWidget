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
#ifndef __CCWIDGET_SCROLLVIEW_H__
#define __CCWIDGET_SCROLLVIEW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Layout.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

class CScrollView;
class CScrollViewContainer;

/**
 * enum   : CScrollViewDirection
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : direction of scroll view
 */
enum CScrollViewDirection
{
	eScrollViewDirectionHorizontal,
	eScrollViewDirectionVertical,
	eScrollViewDirectionBoth
};

/**
 * class  : CScrollViewContainer
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : scroll view container define
 */
class CScrollViewContainer : public CLayout
{
public:
	virtual void reset();
	friend class CScrollView;
};

/**
 * class  : CScrollView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : scroll view define
 */
class CScrollView : public CLayout, public CScrollableProtocol
{
public:
	CScrollView();
	virtual ~CScrollView();
	virtual bool init();
	static CScrollView* create(const CCSize& contentSize);
	virtual bool initWithSize(const CCSize& tSize);
	void setContainerSize(CCSize tSize);
	const CCSize& getContainerSize() const;
	CScrollViewDirection getDirection();
	void setDirection(CScrollViewDirection eDirection);
	CScrollViewContainer* getContainer();
	virtual void setContentSize(const CCSize& contentSize);
	
	const CCPoint& getContentOffset() const;
	void setBounceable(bool bBounceable);
	bool isBounceable();
	void setDeaccelerateable(bool bDeaccelerateable);
	bool isDeaccelerateable();
	void setDragable(bool bDragable);
	bool isDragable();
    bool isTouchMoved();
    
	void stopContainerAnimation();
	const CCPoint& getMaxOffset() const;
	const CCPoint& getMinOffset() const;
	void setContentOffsetToTop();
	void setContentOffsetToTopInDuration(float fDuration);
	void setContentOffsetToTopEaseIn(float fDuration, float fRate);
	void setContentOffsetToBottom();
	void setContentOffsetToRight();
	void setContentOffsetToLeft();
	void relocateContainer();
	void setContentOffset(CCPoint tOffset);
	void setContentOffsetInDuration(CCPoint tOffset, float fDuration);
	void setContentOffsetEaseIn(CCPoint tOffset, float fDuration, float fRate);

public:
	virtual void visit();
    virtual void onExit();
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

protected:
	void relocateContainerWithoutCheck(const CCPoint& tOffset);
	void setContentOffsetWithoutCheck(const CCPoint& tOffset);
	void setContentOffsetInDurationWithoutCheck(const CCPoint& tOffset, float fDuration);
	void setContentOffsetEaseInWithoutCheck(const CCPoint& tOffset, float fDuration, float fRate);

	bool m_bDeaccelerateScrolling;
	void perpareDeaccelerateScroll();
	void performedDeaccelerateScrolling(float dt);
	void stoppedDeaccelerateScroll();

	bool m_bAnimatedScrolling;
	void perpareAnimatedScroll();
    void performedAnimatedScrolling(float dt);
    void stoppedAnimatedScroll();

    virtual void onScrolling(){};
	virtual void onDeaccelerateScrollEnded(){};
	virtual void onDraggingScrollEnded(){};
	void updateLimitOffset();
	bool validateOffset(CCPoint& tPoint);

protected:
	CScrollViewContainer *m_pContainer;
	CScrollViewDirection m_eDirection;
	CCPoint m_tLastMovePoint;
	bool m_bDeaccelerateable;
	bool m_bBounceable;
	bool m_bDragging;
	bool m_bDragable;
	float m_fDragSpeed;
	CCPoint m_tScrollDistance;
	CCPoint m_tTouchBeganPoint;
    bool m_bTouchMoved;
	CCPoint m_tMinOffset;
	CCPoint m_tMaxOffset;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_SCROLLVIEW_H__