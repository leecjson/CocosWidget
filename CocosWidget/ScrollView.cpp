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
#include "ScrollView.h"

NS_CC_WIDGET_BEGIN

#define CSCORLLVIEW_RELOCATE_DURATION 0.2f
#define CSCROLLVIEW_DEACCELERATE_VA 2000.0f
#define CSCROLLVIEW_DEACCELERATE_MAX 400.0f
#define CSCROLLVIEW_DEACCELERATE_INTERVAL 0.245f
#define CSCROLLVIEW_DEACCELERATE_PERCENTAGE 0.955f
#define CSCROLLVIEW_MOVE_INCH 7.0f/160.0f
#define CSCROLLVIEW_MOVE_ACTION_TAG 1
#define CSCROLLVIEW_MOVE_EASEIN_RATE 0.5f

float ccScrollconvertPointToInch(float pointDis)
{
    float factor = ( CCEGLView::sharedOpenGLView()->getScaleX() + CCEGLView::sharedOpenGLView()->getScaleY() ) / 2;
    return pointDis * factor / CCDevice::getDPI();
}

void CScrollViewContainer::reset()
{
	removeAllChildrenWithCleanup(true);
	ignoreAnchorPointForPosition(true);
	setAnchorPoint(CCPointZero);
	setPosition(CCPointZero);
}

CScrollView::CScrollView()
: m_pContainer(NULL)
, m_eDirection(eScrollViewDirectionBoth)
, m_tLastMovePoint(CCPointZero)
, m_bBounceable(true)
, m_bDragging(false)
, m_bDeaccelerateable(true)
, m_fDragSpeed(0.0f)
, m_tScrollDistance(CCPointZero)
, m_tTouchBeganPoint(CCPointZero)
, m_bDragable(true)
, m_bTouchMoved(false)
, m_tMaxOffset(CCPointZero)
, m_tMinOffset(CCPointZero)
, m_bDeaccelerateScrolling(false)
, m_bAnimatedScrolling(false)
{
	m_pContainer = new CScrollViewContainer();
	m_pContainer->init();
	m_pContainer->setAnchorPoint(CCPointZero);
	m_pContainer->ignoreAnchorPointForPosition(true);
	m_pContainer->setContentSize(CCWIDGET_LAYOUT_DEFAULT_CONTENT_SIZE);
	addChild(m_pContainer);
	m_pContainer->release();
}

CScrollView::~CScrollView()
{
	
}

void CScrollView::setContainerSize(CCSize tSize)
{
	tSize.width  = MAX(tSize.width, m_obContentSize.width);
	tSize.height = MAX(tSize.height, m_obContentSize.height);

	m_pContainer->setContentSize(tSize);
	updateLimitOffset();
}

const CCSize& CScrollView::getContainerSize() const
{
	return m_pContainer->getContentSize();
}

CScrollViewDirection CScrollView::getDirection()
{
	return m_eDirection;
}

void CScrollView::setDirection(CScrollViewDirection eDirection)
{
	m_eDirection = eDirection;
}

CScrollViewContainer* CScrollView::getContainer()
{
	return m_pContainer;
}

void CScrollView::setContentSize(const CCSize& contentSize)
{
	CLayout::setContentSize(contentSize);
	updateLimitOffset();
}

bool CScrollView::init()
{
	if( CLayout::init() )
	{
		setContentSize(CCWIDGET_LAYOUT_DEFAULT_CONTENT_SIZE);
		setAnchorPoint(CCWIDGET_LAYOUT_DEFAULT_ANCHOR_POINT);
		return true;
	}
	return false;
}

void CScrollView::onExit()
{
	stoppedAnimatedScroll();
	stoppedDeaccelerateScroll();
    CLayout::onExit();
}

bool CScrollView::initWithSize(const CCSize& tSize)
{
	if( init() )
	{
		setContentSize(tSize);
		setContainerSize(tSize);
		m_pContainer->setPosition(CCPointZero);
		updateLimitOffset();
		return true;
	}
	return false;
}

CWidgetTouchModel CScrollView::onTouchBegan(CCTouch *pTouch)
{
    CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());

	if( m_pContainer->boundingBox().containsPoint(tNodePoint) )
    {
		m_pSelectedWidget = m_pContainer;
    }
	else
	{
		m_pSelectedWidget = NULL;
	}
    
    if( m_pSelectedWidget )
    {
		m_eSelectedWidgetTouchModel = m_pSelectedWidget->executeTouchBeganHandler(pTouch);
        if( m_eSelectedWidgetTouchModel == eWidgetTouchNone )
        {
			m_pSelectedWidget = NULL;
        }
    }
    
    m_tTouchBeganPoint = tNodePoint;
    
    if( m_eSelectedWidgetTouchModel == eWidgetTouchNone && m_bDragable )
    {
        m_tLastMovePoint = tNodePoint;
        m_bDragging = true;
		stoppedDeaccelerateScroll();
		stoppedAnimatedScroll();
    }

    return eWidgetTouchSustained;
}

void CScrollView::onTouchMoved(CCTouch *pTouch, float fDuration)
{
    CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
    
    if( m_pSelectedWidget )
    {
        if( m_eSelectedWidgetTouchModel == eWidgetTouchTransient && !m_bTouchMoved )
        {
            float fDistance = ccpDistance(tNodePoint, m_tTouchBeganPoint);   

            if(!m_bTouchMoved && fabs(ccScrollconvertPointToInch(fDistance)) < CSCROLLVIEW_MOVE_INCH)
            {
                m_pSelectedWidget->executeTouchMovedHandler(pTouch, fDuration);
                return;
            }

            m_bTouchMoved = true;
            m_pSelectedWidget->interruptTouch(pTouch, fDuration);
        }
        
        if(!m_pSelectedWidget->isTouchInterrupted())
        {
            m_pSelectedWidget->executeTouchMovedHandler(pTouch, fDuration);

            if(!m_pSelectedWidget->isTouchInterrupted())
            {
                return;
            }
        }
    }
    
    if( !m_bDragging )
    {
        m_tTouchBeganPoint = tNodePoint;
        m_tLastMovePoint = tNodePoint;
        m_bDragging = true;
		stoppedDeaccelerateScroll();
		stoppedAnimatedScroll();
    }
    
    if( m_bDragable )
    {
        m_tScrollDistance = tNodePoint - m_tLastMovePoint;
        m_tLastMovePoint = tNodePoint;
        
        switch( m_eDirection )
        {
            case eScrollViewDirectionHorizontal:
                m_tScrollDistance.y = 0;
                break;
            case eScrollViewDirectionVertical:
                m_tScrollDistance.x = 0;
                break;
            default:
                break;
        }
        
        setContentOffset( getContentOffset() + m_tScrollDistance );
    }
}

void CScrollView::onTouchEnded(CCTouch *pTouch, float fDuration)
{
    if( m_pSelectedWidget && !m_bTouchMoved && !m_pSelectedWidget->isTouchInterrupted() )
    {
        m_pSelectedWidget->executeTouchEndedHandler(pTouch, fDuration);
		m_bTouchMoved = false;
		m_bDragging = false;
        return;
    }
	
    if( m_bDragable )
    {
        if( m_bDeaccelerateable && m_eDirection != eScrollViewDirectionBoth && fDuration < CSCROLLVIEW_DEACCELERATE_INTERVAL )
        {
            CCPoint tEndPoint = convertToNodeSpace(pTouch->getLocation());
            switch( m_eDirection )
            {
                case eScrollViewDirectionHorizontal:
                    m_fDragSpeed = abs( m_tTouchBeganPoint.x - tEndPoint.x ) / fDuration;
                    break;
                default:
					m_fDragSpeed = abs( m_tTouchBeganPoint.y - tEndPoint.y ) / fDuration;
                    break;
            }
			perpareDeaccelerateScroll();
        }
        else
        {
			CCPoint tOffset = getContentOffset();
			if( validateOffset(tOffset) )
			{
				relocateContainerWithoutCheck(tOffset);
			}
			else
			{
				onDraggingScrollEnded();
			}
        }
    }
    
    m_bTouchMoved = false;
    m_bDragging = false;
}

void CScrollView::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
    if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
    {
        m_pSelectedWidget->executeTouchCancelledHandler(pTouch, fDuration);
    }
    
    m_bTouchMoved = false;
    m_bDragging = false;
}

void CScrollView::setDeaccelerateable(bool bDeaccelerateable)
{
	m_bDeaccelerateable = bDeaccelerateable;
}

bool CScrollView::isDeaccelerateable()
{
	return m_bDeaccelerateable;
}

const CCPoint& CScrollView::getContentOffset() const
{
	return m_pContainer->getPosition();
}

void CScrollView::setBounceable(bool bBounceable)
{
	m_bBounceable = bBounceable;
}

bool CScrollView::isBounceable()
{
	return m_bBounceable;
}

void CScrollView::setDragable(bool bDragable)
{
	m_bDragable = bDragable;
}

bool CScrollView::isDragable()
{
	return m_bDragable;
}

bool CScrollView::isTouchMoved() 
{
	return m_bTouchMoved; 
}

void CScrollView::stopContainerAnimation()
{
	if( m_pContainer )
	{
		m_pContainer->stopActionByTag(CSCROLLVIEW_MOVE_ACTION_TAG);
	}
}

const CCPoint& CScrollView::getMaxOffset() const
{
	return m_tMaxOffset;
}

const CCPoint& CScrollView::getMinOffset() const
{
	return m_tMinOffset;
}

void CScrollView::visit()
{
	glEnable(GL_SCISSOR_TEST);

	CCRect rect = CCRectMake(0, 0, m_obContentSize.width, m_obContentSize.height);
	rect = CCRectApplyAffineTransform(rect, nodeToWorldTransform());

	CCEGLView::sharedOpenGLView()->setScissorInPoints(rect.origin.x, rect.origin.y, rect.size.width, rect.size.height);
	CLayout::visit();

	glDisable(GL_SCISSOR_TEST);
}

CScrollView* CScrollView::create(const CCSize& contentSize)
{
	CScrollView * pRet = new CScrollView();
	if( pRet && pRet->initWithSize(contentSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CScrollView::perpareDeaccelerateScroll()
{
	if(!m_bDeaccelerateScrolling && m_bDeaccelerateable)
	{
		schedule(schedule_selector(CScrollView::performedDeaccelerateScrolling));
		m_bDeaccelerateScrolling = true;
	}
}

void CScrollView::performedDeaccelerateScrolling(float dt)
{
	if( m_bDragging )
	{
		stoppedDeaccelerateScroll();
		return;
	}

	CCPoint tOldOffset;
	CCPoint tNewOffset;
	float fDistance = m_fDragSpeed * dt;
	switch( m_eDirection )
	{
		case eScrollViewDirectionHorizontal:
			fDistance  = m_tScrollDistance.x < 0 ? -fDistance : fDistance;
			tNewOffset = getContentOffset() + CCPoint(fDistance, 0);
			break;
		default:
			fDistance  = m_tScrollDistance.y < 0 ? -fDistance : fDistance;
			tNewOffset = getContentOffset() + CCPoint(0, fDistance);
			break;
	}
	tOldOffset = tNewOffset;
	bool bOutOfView = validateOffset(tNewOffset);

	if( bOutOfView && !m_bBounceable )
	{
		setContentOffsetWithoutCheck(tNewOffset);
		stoppedDeaccelerateScroll();
		return;
	}

	setContentOffsetWithoutCheck(tOldOffset);

	if( bOutOfView )
	{
		m_fDragSpeed = MIN(CSCROLLVIEW_DEACCELERATE_MAX, m_fDragSpeed);
		m_fDragSpeed = m_fDragSpeed - CSCROLLVIEW_DEACCELERATE_VA * dt;
	}
	else
	{
		m_fDragSpeed = CSCROLLVIEW_DEACCELERATE_PERCENTAGE * m_fDragSpeed - CSCROLLVIEW_DEACCELERATE_VA * dt;
	}

	if( m_fDragSpeed <= 0 )
	{
		stoppedDeaccelerateScroll();
		
		if( bOutOfView )
		{
			relocateContainerWithoutCheck(tNewOffset);
		}
		else
		{
			onDeaccelerateScrollEnded();
		}
	}
}

void CScrollView::stoppedDeaccelerateScroll()
{
	if( m_bDeaccelerateScrolling )
	{
		unschedule(schedule_selector(CScrollView::performedDeaccelerateScrolling));
		m_bDeaccelerateScrolling = false;
	}
}

void CScrollView::perpareAnimatedScroll()
{
	if( !m_bAnimatedScrolling )
	{
		schedule(schedule_selector(CScrollView::performedAnimatedScrolling));
		m_bAnimatedScrolling = true;
	}
}

void CScrollView::performedAnimatedScrolling(float dt)
{
	if( m_bDragging )
    {
		m_pContainer->stopActionByTag(CSCROLLVIEW_MOVE_ACTION_TAG);
		stoppedAnimatedScroll();
        return;
    }
    this->onScrolling();
	this->executeScrollingHandler(this);
}

void CScrollView::stoppedAnimatedScroll()
{
	if( m_bAnimatedScrolling )
	{
		unschedule(schedule_selector(CScrollView::performedAnimatedScrolling));
		m_bAnimatedScrolling = false;

		this->onScrolling();
		this->executeScrollingHandler(this);
	}
}

void CScrollView::relocateContainerWithoutCheck(const CCPoint& tOffset)
{
	setContentOffsetEaseInWithoutCheck(tOffset, CSCORLLVIEW_RELOCATE_DURATION, CSCROLLVIEW_MOVE_EASEIN_RATE);
}

void CScrollView::relocateContainer()
{
	CCPoint tOffset = getContentOffset();
	if( validateOffset(tOffset) )
	{
		setContentOffsetEaseInWithoutCheck(tOffset, CSCORLLVIEW_RELOCATE_DURATION, CSCROLLVIEW_MOVE_EASEIN_RATE);
	}
}

void CScrollView::setContentOffsetToTop()
{
	if( m_eDirection == eScrollViewDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffset(tPoint);
	}
}

void CScrollView::setContentOffsetToTopInDuration(float fDuration)
{
	if( m_eDirection == eScrollViewDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffsetInDuration(tPoint, fDuration);
	}
}

void CScrollView::setContentOffsetToTopEaseIn(float fDuration, float fRate)
{
	if( m_eDirection == eScrollViewDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffsetEaseIn(tPoint, fDuration, fRate);
	}
}

void CScrollView::setContentOffsetToBottom()
{
	if( m_eDirection == eScrollViewDirectionVertical )
	{
		setContentOffset(m_tMaxOffset);
	}
}

void CScrollView::setContentOffsetToRight()
{
	if( m_eDirection == eScrollViewDirectionHorizontal )
	{
		setContentOffset(m_tMinOffset);
	}
}

void CScrollView::setContentOffsetToLeft()
{
	if( m_eDirection == eScrollViewDirectionHorizontal )
	{
		setContentOffset(m_tMaxOffset);
	}
}

void CScrollView::setContentOffsetWithoutCheck(const CCPoint& tOffset)
{
	m_pContainer->setPosition(tOffset);
	this->onScrolling();
	this->executeScrollingHandler(this);
}

void CScrollView::setContentOffset(CCPoint tOffset)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	m_pContainer->stopActionByTag(CSCROLLVIEW_MOVE_ACTION_TAG);
	m_pContainer->setPosition(tOffset);
    this->onScrolling();
	this->executeScrollingHandler(this);
}

void CScrollView::setContentOffsetInDurationWithoutCheck(const CCPoint& tOffset, float fDuration)
{
	m_pContainer->stopActionByTag(CSCROLLVIEW_MOVE_ACTION_TAG);
    CCSequence* pSequence = CCSequence::create(
		CCMoveTo::create(fDuration, tOffset),
		CCCallFunc::create(this, callfunc_selector(CScrollView::stoppedAnimatedScroll)),
		NULL);
	pSequence->setTag(CSCROLLVIEW_MOVE_ACTION_TAG);
	m_pContainer->runAction(pSequence);

	perpareAnimatedScroll();
	this->onScrolling();
	this->executeScrollingHandler(this);
}

void CScrollView::setContentOffsetInDuration(CCPoint tOffset, float fDuration)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	setContentOffsetInDurationWithoutCheck(tOffset, fDuration);
}

void CScrollView::setContentOffsetEaseInWithoutCheck(const CCPoint& tOffset, float fDuration, float fRate)
{
	m_pContainer->stopActionByTag(CSCROLLVIEW_MOVE_ACTION_TAG);
	CCSequence* pSequence = CCSequence::create(
		CCEaseIn::create(
			CCMoveTo::create(fDuration, tOffset),
			fRate
		),
		CCCallFunc::create(this, callfunc_selector(CScrollView::stoppedAnimatedScroll)), NULL
	);
	pSequence->setTag(CSCROLLVIEW_MOVE_ACTION_TAG);
	m_pContainer->runAction(pSequence);

	perpareAnimatedScroll();
	this->onScrolling();
	this->executeScrollingHandler(this);
}

void CScrollView::setContentOffsetEaseIn(CCPoint tOffset, float fDuration, float fRate)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	setContentOffsetEaseInWithoutCheck(tOffset, fDuration, fRate);
}

void CScrollView::updateLimitOffset()
{
	m_tMaxOffset.x = 0;
	m_tMinOffset.x = m_obContentSize.width - m_pContainer->m_obContentSize.width;

	m_tMaxOffset.y = 0;
	m_tMinOffset.y = m_obContentSize.height - m_pContainer->m_obContentSize.height;

	if( m_eDirection == eScrollViewDirectionHorizontal )
	{
		m_tMinOffset.y = 0;
	}
	else if( m_eDirection == eScrollViewDirectionVertical )
	{
		m_tMinOffset.x = 0;
	}
}

bool CScrollView::validateOffset(CCPoint& tPoint)
{
	float x = tPoint.x, y = tPoint.y;
	x = MAX(x, m_tMinOffset.x);
	x = MIN(x, m_tMaxOffset.x);
	y = MAX(y, m_tMinOffset.y);
	y = MIN(y, m_tMaxOffset.y);

	if( tPoint.x != x || tPoint.y != y )
	{
		tPoint.x = x;
		tPoint.y = y;
		return true;
	}

	tPoint.x = x;
	tPoint.y = y;
	return false;
}


NS_CC_WIDGET_END