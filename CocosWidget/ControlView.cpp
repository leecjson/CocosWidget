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
#include "ControlView.h"
#include <cmath>

#define MOVE_DELAY 0.2f
#define PARAM_PRE 10

NS_CC_WIDGET_BEGIN

CControlView::CControlView()
: m_pBaseBoard(NULL)
, m_pJoystick(NULL)
, m_fRadius(100.0f)
, m_tCenterPoint(CCPointZero)
, m_bRelocateWithAnimation(true)
, m_bAnimationUpdate(false)
, m_bExecuteEventUpdate(false)
, m_tLastPoint(CCPointZero)
{
	setThisObject(this);
}

CControlView::~CControlView()
{

}

CControlView* CControlView::create()
{
	CControlView* pRet = new CControlView();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CControlView* CControlView::create(const char* pBaseBoard, const char* pJoystick)
{
	CControlView* pRet = new CControlView();
	if( pRet && pRet->initWithFile(pBaseBoard, pJoystick) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CControlView::setRadius(float fRadius)
{
	m_fRadius = fRadius;
}

float CControlView::getRadius() const
{
	return m_fRadius;
}

void CControlView::setRelocateWithAnimation(bool bAni)
{
	m_bRelocateWithAnimation = bAni;
}

bool CControlView::isRelocateWithAnimation() const
{
	return m_bRelocateWithAnimation;
}

bool CControlView::init()
{
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);

	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);

	return true;
}

bool CControlView::initWithFile(const char* pBaseBoard, const char* pJoystick)
{
	if( init() )
	{
		if( pBaseBoard && pJoystick && strlen(pBaseBoard) && strlen(pJoystick) )
		{
			setBaseBoardImage(pBaseBoard);
			setJoystickImage(pJoystick);
		}
		return true;
	}
	return false;
}

void CControlView::relocateJoystick(bool bAni)
{
	if( bAni )
	{
		CCSequence* pSequence = CCSequence::create(
			CCMoveTo::create(MOVE_DELAY, m_tCenterPoint),
			CCCallFunc::create(this, callfunc_selector(CControlView::stopAnimateUpdate)),
			NULL);
		m_pJoystick->runAction(pSequence);
		performAnimateUpdate();
	}
	else
	{
		m_pJoystick->setPosition(m_tCenterPoint);
	}
}

void CControlView::onAnimateUpdate(float dt)
{

}

void CControlView::performAnimateUpdate()
{
	if( !m_bAnimationUpdate )
	{
		m_bAnimationUpdate = true;
	}
}

void CControlView::stopAnimateUpdate()
{
	if( m_bAnimationUpdate )
	{
		if( m_pJoystick )
		{
			m_pJoystick->stopAllActions();
		}
		m_bAnimationUpdate = false;
		stopExecuteUpdate();
	}
}

void CControlView::onExecuteEventUpdate(float dt)
{
	if( m_pJoystick )
	{
		CCPoint tOffset = m_pJoystick->getPosition() - m_tCenterPoint;
		executeControlHandler(this, tOffset.x / PARAM_PRE, tOffset.y / PARAM_PRE);
	}
	else
	{
		CCPoint tOffset = m_tLastPoint - m_tCenterPoint;
		executeControlHandler(this, tOffset.x / PARAM_PRE, tOffset.y / PARAM_PRE);
	}
}

void CControlView::performExecuteUpdate()
{
	if( !m_bExecuteEventUpdate )
	{
		schedule(schedule_selector(CControlView::onExecuteEventUpdate));
		m_bExecuteEventUpdate = true;
	}
}

void CControlView::stopExecuteUpdate()
{
	if( m_bExecuteEventUpdate )
	{
		unschedule(schedule_selector(CControlView::onExecuteEventUpdate));
		m_bExecuteEventUpdate = false;
	}
}

CWidgetTouchModel CControlView::onTouchBegan(CCTouch *pTouch)
{
	stopAnimateUpdate();
	CCPoint tPoint = convertToNodeSpace(pTouch->getLocation());
	if( m_pJoystick )
	{
		if( m_pJoystick->boundingBox().containsPoint(tPoint) )
		{
			performExecuteUpdate();
			return eWidgetTouchSustained;
		}
	}
	else
	{
		m_tLastPoint = tPoint;
		performExecuteUpdate();
		return eWidgetTouchSustained;
	}
	return eWidgetTouchNone;
}

void CControlView::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	if( m_pJoystick )
	{
		// i don't wanna let u understand this
		CCPoint tA = convertToNodeSpace(pTouch->getLocation());
		CCPoint tN = m_tCenterPoint-tA;
		float fD = sqrtf(tN.x*tN.x+tN.y*tN.y);
		fD < m_fRadius ? m_pJoystick->setPosition(tA) : m_pJoystick->setPosition(CCPoint(
			((tA.x - m_tCenterPoint.x) / fD) * m_fRadius + m_tCenterPoint.x,
			((tA.y - m_tCenterPoint.y) / fD) * m_fRadius + m_tCenterPoint.y
			)
		);
	}
	else
	{
		CCPoint tA = convertToNodeSpace(pTouch->getLocation());
		CCPoint tN = m_tCenterPoint-tA;
		float fD = sqrtf(tN.x*tN.x+tN.y*tN.y);
		fD < m_fRadius ? m_tLastPoint = tA : m_tLastPoint = (CCPoint(
			((tA.x - m_tCenterPoint.x) / fD) * m_fRadius + m_tCenterPoint.x,
			((tA.y - m_tCenterPoint.y) / fD) * m_fRadius + m_tCenterPoint.y
			)
		);
	}
}

void CControlView::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	if( m_pJoystick )
	{
		if( !m_bRelocateWithAnimation )
		{
			stopExecuteUpdate();
		}
		relocateJoystick(m_bRelocateWithAnimation);
	}
	else
	{
		stopExecuteUpdate();
	}
}

void CControlView::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	onTouchEnded(pTouch, fDuration);
}

void CControlView::setContentSize(const CCSize& tContentSize)
{
	CCNodeRGBA::setContentSize(tContentSize);

	m_tCenterPoint = CCPoint(m_obContentSize.width / 2, m_obContentSize.height / 2);

	if( m_pBaseBoard )
	{
		m_pBaseBoard->setPosition(m_tCenterPoint);
	}

	if( m_pJoystick )
	{
		m_pJoystick->setPosition(m_tCenterPoint);
	}
}

void CControlView::setBaseBoardImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setBaseBoardTexture(pTexture);
	}
}

void CControlView::setJoystickImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setJoystickTexture(pTexture);
	}
}

void CControlView::setBaseBoardSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pBaseBoard )
		{
			m_pBaseBoard->setDisplayFrame(pFrame);
		}
		else
		{
			m_pBaseBoard = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pBaseBoard);
		}
		setContentSize(m_pBaseBoard->getContentSize());
		m_pBaseBoard->setPosition(m_tCenterPoint);
	}
}

void CControlView::setJoystickSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pJoystick )
		{
			m_pJoystick->setDisplayFrame(pFrame);
		}
		else
		{
			m_pJoystick = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pJoystick, 1);
		}
		m_pJoystick->setPosition(m_tCenterPoint);
	}
}

void CControlView::setBaseBoardTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pBaseBoard )
		{
			m_pBaseBoard->setTexture(pTexture);
			
			CCRect tRect = CCRectZero;
			tRect.size = pTexture->getContentSize();
			m_pBaseBoard->setTextureRect(tRect);
		}
		else
		{
			m_pBaseBoard = CCSprite::createWithTexture(pTexture);
			addChild(m_pBaseBoard);
		}
		setContentSize(m_pBaseBoard->getContentSize());
		m_pBaseBoard->setPosition(m_tCenterPoint);
	}
}

void CControlView::setJoystickTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pJoystick )
		{
			m_pJoystick->setTexture(pTexture);
			
			CCRect tRect = CCRectZero;
			tRect.size = pTexture->getContentSize();
			m_pJoystick->setTextureRect(tRect);
		}
		else
		{
			m_pJoystick = CCSprite::createWithTexture(pTexture);
			addChild(m_pJoystick, 1);
		}
		m_pJoystick->setPosition(m_tCenterPoint);
	}
}

void CControlView::setBaseBoardSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setBaseBoardSpriteFrame(pFrame);
}

void CControlView::setJoystickSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setJoystickSpriteFrame(pFrame);	
}



NS_CC_WIDGET_END