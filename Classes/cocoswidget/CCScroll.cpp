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
#include "CCScroll.h"

NS_CC_WIDGET_BEGIN

#define CCScroll_RELOCATE_DURATION 0.2f
#define CCScroll_DEACCELERATE_VA 2000.0f
#define CCScroll_DEACCELERATE_MAX 400.0f
#define CCScroll_DEACCELERATE_INTERVAL 0.245f
#define CCScroll_DEACCELERATE_PERCENTAGE 0.94f
#define CCScroll_MOVE_INCH 7.0f/160.0f
#define CCScroll_MOVE_ACTION_TAG 1
#define CCScroll_MOVE_EASEIN_RATE 0.5f

float ccScrollconvertPointToInch(float pointDis)
{
    float factor = ( CCEGLView::sharedOpenGLView()->getScaleX() + CCEGLView::sharedOpenGLView()->getScaleY() ) / 2;
    return pointDis * factor / CCDevice::getDPI();
}

void CCScrollContainer::reset()
{
	removeAllChildrenWithCleanup(true);
	ignoreAnchorPointForPosition(true);
	setAnchorPoint(CCPointZero);
	setPosition(CCPointZero);
}

CCScroll::CCScroll()
: m_pContainer(NULL)
, m_eDirection(eScrollDirectionBoth)
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
, m_pScrollListener(NULL)
, m_pScrollHandler(NULL)
{
	m_pContainer = new CCScrollContainer();
	m_pContainer->init();
	m_pContainer->ignoreAnchorPointForPosition(true);
	m_pContainer->setContentSize(CCDirector::sharedDirector()->getWinSize());
	m_pContainer->setAnchorPoint(CCPointZero);
	addChild(m_pContainer);
	m_pContainer->release();
}

CCScroll::~CCScroll()
{
	
}

void CCScroll::setContainerSize(CCSize tSize)
{
	tSize.width  = MAX(tSize.width, m_obContentSize.width);
	tSize.height = MAX(tSize.height, m_obContentSize.height);

	m_pContainer->setContentSize(tSize);
	updateLimitOffset();
}

const CCSize& CCScroll::getContainerSize() const
{
	return m_pContainer->getContentSize();
}

CCScrollDirection CCScroll::getDirection()
{
	return m_eDirection;
}

void CCScroll::setDirection(CCScrollDirection eDirection)
{
	m_eDirection = eDirection;
}

CCScrollContainer* CCScroll::getContainer()
{
	return m_pContainer;
}

void CCScroll::setContentSize(const CCSize& contentSize)
{
	CCPanel::setContentSize(contentSize);
	updateLimitOffset();
}

bool CCScroll::init()
{
	if( CCPanel::init() )
	{
		setContentSize(CCDirector::sharedDirector()->getWinSize());
		setAnchorPoint(CCPoint(0.5f, 0.5f));
		setPosition(CCPointZero);
		return true;
	}
	return false;
}

void CCScroll::onExit()
{
	stoppedAnimatedScroll();
	stoppedDeaccelerateScroll();
    CCPanel::onExit();
}

bool CCScroll::initWithSize(const CCSize& tSize)
{
	if( init() )
	{
		setContentSize(tSize);
		m_pContainer->setPosition(CCPointZero);
		updateLimitOffset();
		return true;
	}
	return false;
}

CCWidget* CCScroll::collisionWithWidget(const CCPoint& tPoint)
{
    if( m_pContainer->boundingBox().containsPoint(tPoint) )
    {
        return m_pContainer;
    }
    return NULL;
}

CCWidgetTouchModel CCScroll::onTouchBegan(CCTouch *pTouch)
{
    CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
    m_pSelectedWidget = collisionWithWidget(tNodePoint);
    
    if( m_pSelectedWidget )
    {
		m_eChildTouchModel = m_pSelectedWidget->executeTouchBegan(pTouch);
        if( m_eChildTouchModel == eWidgetTouchNone )
        {
           m_pSelectedWidget = NULL;
        }
    }
    
    m_tTouchBeganPoint = tNodePoint;
    
    if( m_eChildTouchModel == eWidgetTouchNone && m_bDragable )
    {
        m_tLastMovePoint = tNodePoint;
        m_bDragging = true;
		stoppedDeaccelerateScroll();
		stoppedAnimatedScroll();
    }

    return eWidgetTouchSustained;
}

void CCScroll::onTouchMoved(CCTouch *pTouch, float fDuration)
{
    CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
    
    if( m_pSelectedWidget )
    {
        if( m_eChildTouchModel == eWidgetTouchTransient && !m_bTouchMoved )
        {
            float fDistance = ccpDistance(tNodePoint, m_tTouchBeganPoint);
            
            if ( !m_bTouchMoved && fabs(ccScrollconvertPointToInch(fDistance)) < CCScroll_MOVE_INCH )
            {
                m_pSelectedWidget->executeTouchMoved(pTouch, fDuration);
                return;
            }
            
            m_bTouchMoved = true;
            m_pSelectedWidget->interruptTouch(pTouch, fDuration);
        }
        
        if( !m_pSelectedWidget->isTouchInterrupted() )
        {
            m_pSelectedWidget->executeTouchMoved(pTouch, fDuration);
            
            if( !m_pSelectedWidget->isTouchInterrupted() )
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
            case eScrollDirectionHorizontal:
                m_tScrollDistance.y = 0;
                break;
            case eScrollDirectionVertical:
                m_tScrollDistance.x = 0;
                break;
            default:
                break;
        }
        
        setContentOffset( getContentOffset() + m_tScrollDistance );
    }
}

void CCScroll::onTouchEnded(CCTouch *pTouch, float fDuration)
{
    if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
    {
        m_pSelectedWidget->executeTouchEnded(pTouch, fDuration);
        return;
    }
	
    if( m_bDragable )
    {
        if( m_bDeaccelerateable && m_eDirection != eScrollDirectionBoth && fDuration < CCScroll_DEACCELERATE_INTERVAL )
        {
            CCPoint tEndPoint = convertToNodeSpace(pTouch->getLocation());
            switch( m_eDirection )
            {
                case eScrollDirectionHorizontal:
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

void CCScroll::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
    if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
    {
        m_pSelectedWidget->executeTouchCancelled(pTouch, fDuration);
    }
    
    m_bTouchMoved = false;
    m_bDragging = false;
}

void CCScroll::setDeaccelerateable(bool bDeaccelerateable)
{
	m_bDeaccelerateable = bDeaccelerateable;
}

bool CCScroll::isDeaccelerateable()
{
	return m_bDeaccelerateable;
}

const CCPoint& CCScroll::getContentOffset() const
{
	return m_pContainer->getPosition();
}

void CCScroll::setBounceable(bool bBounceable)
{
	m_bBounceable = bBounceable;
}

bool CCScroll::isBounceable()
{
	return m_bBounceable;
}

void CCScroll::setDragable(bool bDragable)
{
	m_bDragable = bDragable;
}

bool CCScroll::isDragable()
{
	return m_bDragable;
}

bool CCScroll::isTouchMoved() 
{
	return m_bTouchMoved; 
}

void CCScroll::setScrollSelector(CCObject* pTarget, SEL_ScrollHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pScrollListener = pTarget;
		m_pScrollHandler = pHandler;
	}
}

void CCScroll::executeScroll()
{
	if( m_pScrollHandler && m_pScrollListener )
	{
		(m_pScrollListener->*m_pScrollHandler)(this);
	}
}

void CCScroll::stopContainerAnimation()
{
	if( m_pContainer )
	{
		m_pContainer->stopActionByTag(CCScroll_MOVE_ACTION_TAG);
	}
}

const CCPoint& CCScroll::getMaxOffset() const
{
	return m_tMaxOffset;
}

const CCPoint& CCScroll::getMinOffset() const
{
	return m_tMinOffset;
}

void CCScroll::visit()
{
	glEnable(GL_SCISSOR_TEST);

	CCRect rect = CCRectMake(0, 0, m_obContentSize.width, m_obContentSize.height);
	rect = CCRectApplyAffineTransform(rect, nodeToWorldTransform());

	CCEGLView::sharedOpenGLView()->setScissorInPoints(rect.origin.x, rect.origin.y, rect.size.width, rect.size.height);
	CCPanel::visit();

	glDisable(GL_SCISSOR_TEST);
}

CCScroll* CCScroll::create(const CCSize& contentSize)
{
	CCScroll * pRet = new CCScroll();
	if( pRet && pRet->initWithSize(contentSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CCScroll::perpareDeaccelerateScroll()
{
	if(!m_bDeaccelerateScrolling && m_bDeaccelerateable)
	{
		schedule(schedule_selector(CCScroll::performedDeaccelerateScrolling));
		m_bDeaccelerateScrolling = true;
	}
}

void CCScroll::performedDeaccelerateScrolling(float dt)
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
		case eScrollDirectionHorizontal:
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
		m_fDragSpeed = MIN(CCScroll_DEACCELERATE_MAX, m_fDragSpeed);
		m_fDragSpeed = m_fDragSpeed - CCScroll_DEACCELERATE_VA * dt;
	}
	else
	{
		m_fDragSpeed = CCScroll_DEACCELERATE_PERCENTAGE * m_fDragSpeed - CCScroll_DEACCELERATE_VA * dt;
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

void CCScroll::stoppedDeaccelerateScroll()
{
	if( m_bDeaccelerateScrolling )
	{
		unschedule(schedule_selector(CCScroll::performedDeaccelerateScrolling));
		m_bDeaccelerateScrolling = false;
	}
}

void CCScroll::perpareAnimatedScroll()
{
	if( !m_bAnimatedScrolling )
	{
		schedule(schedule_selector(CCScroll::performedAnimatedScrolling));
		m_bAnimatedScrolling = true;
	}
}

void CCScroll::performedAnimatedScrolling(float dt)
{
	if( m_bDragging )
    {
		m_pContainer->stopActionByTag(CCScroll_MOVE_ACTION_TAG);
		stoppedAnimatedScroll();
        return;
    }
    this->onScrolling();
	this->executeScroll();
}

void CCScroll::stoppedAnimatedScroll()
{
	if( m_bAnimatedScrolling )
	{
		unschedule(schedule_selector(CCScroll::performedAnimatedScrolling));
		m_bAnimatedScrolling = false;

		this->onScrolling();
		this->executeScroll();
	}
}

void CCScroll::relocateContainerWithoutCheck(const CCPoint& tOffset)
{
	setContentOffsetEaseInWithoutCheck(tOffset, CCScroll_RELOCATE_DURATION, CCScroll_MOVE_EASEIN_RATE);
}

void CCScroll::relocateContainer()
{
	CCPoint tOffset = getContentOffset();
	if( validateOffset(tOffset) )
	{
		setContentOffsetEaseInWithoutCheck(tOffset, CCScroll_RELOCATE_DURATION, CCScroll_MOVE_EASEIN_RATE);
	}
}

void CCScroll::setContentOffsetToTop()
{
	if( m_eDirection == eScrollDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffset(tPoint);
	}
}

void CCScroll::setContentOffsetToTopInDuration(float fDuration)
{
	if( m_eDirection == eScrollDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffsetInDuration(tPoint, fDuration);
	}
}

void CCScroll::setContentOffsetToTopEaseIn(float fDuration, float fRate)
{
	if( m_eDirection == eScrollDirectionVertical )
	{
		CCPoint tPoint(0, -(m_pContainer->getContentSize().height - m_obContentSize.height));
		setContentOffsetEaseIn(tPoint, fDuration, fRate);
	}
}

void CCScroll::setContentOffsetWithoutCheck(const CCPoint& tOffset)
{
	m_pContainer->setPosition(tOffset);
	this->onScrolling();
	this->executeScroll();
}

void CCScroll::setContentOffset(CCPoint tOffset)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	m_pContainer->setPosition(tOffset);
    this->onScrolling();
	this->executeScroll();
}

void CCScroll::setContentOffsetInDurationWithoutCheck(const CCPoint& tOffset, float fDuration)
{
	m_pContainer->stopActionByTag(CCScroll_MOVE_ACTION_TAG);
    CCSequence* pSequence = CCSequence::create(
		CCMoveTo::create(fDuration, tOffset),
		CCCallFunc::create(this, callfunc_selector(CCScroll::stoppedAnimatedScroll)),
		NULL);
	pSequence->setTag(CCScroll_MOVE_ACTION_TAG);
	m_pContainer->runAction(pSequence);

	perpareAnimatedScroll();
	this->onScrolling();
	this->executeScroll();
}

void CCScroll::setContentOffsetInDuration(CCPoint tOffset, float fDuration)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	setContentOffsetInDurationWithoutCheck(tOffset, fDuration);
}

void CCScroll::setContentOffsetEaseInWithoutCheck(const CCPoint& tOffset, float fDuration, float fRate)
{
	m_pContainer->stopActionByTag(CCScroll_MOVE_ACTION_TAG);
	CCSequence* pSequence = CCSequence::create(
		CCEaseIn::create(
			CCMoveTo::create(fDuration, tOffset),
			fRate
		),
		CCCallFunc::create(this, callfunc_selector(CCScroll::stoppedAnimatedScroll)), NULL
	);
	pSequence->setTag(CCScroll_MOVE_ACTION_TAG);
	m_pContainer->runAction(pSequence);

	perpareAnimatedScroll();
	this->onScrolling();
	this->executeScroll();
}

void CCScroll::setContentOffsetEaseIn(CCPoint tOffset, float fDuration, float fRate)
{
	if( !m_bBounceable )
	{
		validateOffset(tOffset);
	}
	setContentOffsetEaseInWithoutCheck(tOffset, fDuration, fRate);
}

void CCScroll::updateLimitOffset()
{
	m_tMaxOffset.x = 0;
	m_tMinOffset.x = m_obContentSize.width - m_pContainer->m_obContentSize.width;

	m_tMaxOffset.y = 0;
	m_tMinOffset.y = m_obContentSize.height - m_pContainer->m_obContentSize.height;

	if( m_eDirection == eScrollDirectionHorizontal )
	{
		m_tMinOffset.y = 0;
	}
	else if( m_eDirection == eScrollDirectionVertical )
	{
		m_tMinOffset.x = 0;
	}
}

bool CCScroll::validateOffset(CCPoint& tPoint)
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