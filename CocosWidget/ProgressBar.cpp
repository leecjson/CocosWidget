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
#include "ProgressBar.h"

NS_CC_WIDGET_BEGIN

CProgressBar::CProgressBar()
: m_pProgressSprite(NULL)
, m_eDirection(eProgressBarDirectionLeftToRight)
, m_nMaxValue(100)
, m_nMinValue(0)
, m_nValue(0)
, m_bFirstTick(true)
, m_fLapsed(0.0f)
, m_fDuration(0.0f)
, m_nToValue(0)
, m_nFromValue(0)
, m_bProgressing(false)
, m_tProgressSize(CCSizeZero)
, m_tCenterPoint(CCPointZero)
, m_pBackgroundImage(NULL)
, m_pBackgroundColor(NULL)
, m_pBackgroundGradient(NULL)
{
	
}

CProgressBar::~CProgressBar()
{
	
}

CProgressBar* CProgressBar::create()
{
	CProgressBar* pRet = new CProgressBar();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CProgressBar* CProgressBar::create(const char* pProgress)
{
	CProgressBar* pRet = new CProgressBar();
	if( pRet && pRet->initWithFile(pProgress) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CProgressBar::init()
{
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);

	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);

	return true;
}

bool CProgressBar::initWithFile(const char* pProgress)
{
	if( init() )
	{
		setProgressImage(pProgress);
		return true;
	}
	return false;
}

void CProgressBar::setValue(int nValue)
{
	changeValueAndExecuteEvent(nValue, true);
}

void CProgressBar::changeValueAndExecuteEvent(int nValue, bool bExeEvent)
{
#if 1
	CCAssert(m_nMinValue >= 0 && m_nMaxValue >= 0 && m_nMinValue < m_nMaxValue, "err");
#endif
	int nOldValue = m_nValue;

	nValue = MAX(nValue, m_nMinValue);
	nValue = MIN(nValue, m_nMaxValue);
	m_nValue = nValue;

	CCRect tScissorRect;
	getScissorRectByPercentage(tScissorRect);

	switch( m_eDirection )
	{
	case eProgressBarDirectionLeftToRight:
		{
			m_pProgressSprite->setAnchorPoint(CCPoint(0.0f, 0.5f));
			m_pProgressSprite->setPosition(CCPoint(m_tCenterPoint.x - m_tProgressSize.width / 2, m_tCenterPoint.y));
		}
		break;
	case eProgressBarDirectionBottomToTop:
		{
			m_pProgressSprite->setAnchorPoint(CCPoint(0.5f, 0.0f));
			m_pProgressSprite->setPosition(CCPoint(m_tCenterPoint.x, m_tCenterPoint.y - m_tProgressSize.height / 2));
		}
		break;
	case eProgressBarDirectionRightToLeft:
		{
			m_pProgressSprite->setAnchorPoint(CCPoint(1.0f, 0.5f));
			m_pProgressSprite->setPosition(CCPoint(m_tCenterPoint.x + m_tProgressSize.width / 2, m_tCenterPoint.y));
		}
		break;
	case eProgressBarDirectionTopToBottom:
		{
			m_pProgressSprite->setAnchorPoint(CCPoint(0.5f, 1.0f));
			m_pProgressSprite->setPosition(CCPoint(m_tCenterPoint.x, m_tCenterPoint.y + m_tProgressSize.height / 2));
		}
		break;
	default:
		break;
	}
	m_pProgressSprite->setTextureRect(tScissorRect);

	if( bExeEvent && nOldValue != nValue )
	{
		executeValueChangedHandler(this, nValue);
	}
}

int CProgressBar::getValue() const
{
	return m_nValue;
}

void CProgressBar::setMaxValue(int nMaxValue)
{
	m_nMaxValue = nMaxValue;
}

int CProgressBar::getMaxValue() const
{
	return m_nMaxValue;
}

void CProgressBar::setMinValue(int nMinValue)
{
	m_nMinValue = nMinValue;
}

int CProgressBar::getMinValue() const
{
	return m_nMinValue;
}

void CProgressBar::setDirection(CProgressBarDirection eDirection)
{
	if( m_eDirection != eDirection )
	{
		m_eDirection = eDirection;
		changeValueAndExecuteEvent(m_nValue, false);
	}
}

CProgressBarDirection CProgressBar::getDirection() const
{
	return m_eDirection;
}

bool CProgressBar::isProgressEnded() const
{
	return m_fLapsed >= m_fDuration;
}

void CProgressBar::startProgress(int nValue, float fDuration)
{
#if 1
	CCAssert(nValue >= 0, "nValue >= 0");
#endif
	if( nValue >= m_nMaxValue && nValue <= m_nMinValue )
	{
		return;
	}

	m_fLapsed = 0.0f;
	m_bFirstTick = true;
	m_fDuration = fDuration;

	if( m_fDuration == 0 )
	{
		m_fDuration = FLT_EPSILON;
	}

	m_nToValue = nValue;
	m_nFromValue = m_nValue;

	performProgressing();
}

void CProgressBar::startProgressFromTo(int nFromValue, int nToValue, float fDuration)
{
	changeValueAndExecuteEvent(nFromValue, true);
	startProgress(nToValue, fDuration);
}

void CProgressBar::stopProgress()
{
	stoppedProgressing();
}

void CProgressBar::performProgressing()
{
	if( !m_bProgressing )
	{
		schedule(schedule_selector(CProgressBar::onProgressing));
		m_bProgressing = true;
	}
}

void CProgressBar::onProgressing(float dt)
{
	if( isProgressEnded() )
	{
		stoppedProgressing();
		executeProgressEndedHandler(this);
	}
	else
	{
		if( m_bFirstTick )
		{
			m_bFirstTick = false;
			m_fLapsed = 0.0f;
		}
		else
		{
			m_fLapsed += CCDirector::sharedDirector()->getDeltaTime();
		}

		float fTime = MAX(0, MIN(1, m_fLapsed / MAX(m_fDuration, FLT_EPSILON)));
		changeValueAndExecuteEvent(m_nFromValue + (m_nToValue - m_nFromValue) * fTime, true);
	}
}

void CProgressBar::stoppedProgressing()
{
	if( m_bProgressing )
	{
		unschedule(schedule_selector(CProgressBar::onProgressing));
		m_bProgressing = false;
	}
}

float CProgressBar::getPercentage() const
{
	return (float)(m_nValue - m_nMinValue) / (float)(m_nMaxValue - m_nMinValue);
}

void CProgressBar::getScissorRectByPercentage(CCRect& tRect)
{
	float fPercentage = getPercentage();
	switch( m_eDirection )
	{
	case eProgressBarDirectionLeftToRight:
		{
			tRect.origin = CCPointZero;
			tRect.size.width = m_tProgressSize.width * fPercentage;
			tRect.size.height = m_tProgressSize.height;
		}
		break;
	case eProgressBarDirectionRightToLeft:
		{
			tRect.origin.x = m_tProgressSize.width - m_tProgressSize.width * fPercentage;
			tRect.size.width = m_tProgressSize.width * fPercentage;
			tRect.origin.y = 0;
			tRect.size.height = m_tProgressSize.height;
		}
		break;
	case eProgressBarDirectionBottomToTop:
		{
			tRect.origin.x = 0;
			tRect.origin.y = m_tProgressSize.height - m_tProgressSize.height * fPercentage;
			tRect.size.width = m_tProgressSize.width;
			tRect.size.height = m_tProgressSize.height * fPercentage;
		}
		break;
	case eProgressBarDirectionTopToBottom:
		{
			tRect.origin = CCPointZero;
			tRect.size.width = m_tProgressSize.width;
			tRect.size.height = m_tProgressSize.height * fPercentage;
		}
		break;
	default:
		break;
	}
}

void CProgressBar::setContentSize(const CCSize& tSize)
{
	CCNodeRGBA::setContentSize(tSize);

	m_tCenterPoint.x = m_obContentSize.width / 2;
	m_tCenterPoint.y = m_obContentSize.height / 2;

	if( m_pProgressSprite )
	{
		changeValueAndExecuteEvent(m_nValue, false);
	}

	CC_WIDGET_UPDATE_BACKGROUND_POS;
}

void CProgressBar::setProgressImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setProgressTexture(pTexture);
	}
}

void CProgressBar::setProgressTexture(CCTexture2D* pTexture)
{
	if( m_pProgressSprite )
	{
		m_pProgressSprite->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pProgressSprite->setTextureRect(tRect);

		m_tProgressSize = pTexture->getContentSize();
		setContentSize(m_tProgressSize);
	}
	else
	{
		m_pProgressSprite = CCSprite::createWithTexture(pTexture);
		m_pProgressSprite->setZOrder(1);

		m_tProgressSize = m_pProgressSprite->getContentSize();
		setContentSize(m_tProgressSize);
		addChild(m_pProgressSprite);
	}
	changeValueAndExecuteEvent(m_nValue, false);
}

void CProgressBar::setProgressSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pProgressSprite )
		{
			m_pProgressSprite->setDisplayFrame(pFrame);
			m_tProgressSize = m_pProgressSprite->getContentSize();
			setContentSize(m_tProgressSize);
		}
		else
		{
			m_pProgressSprite = CCSprite::createWithSpriteFrame(pFrame);
			m_pProgressSprite->setZOrder(1);

			m_tProgressSize = m_pProgressSprite->getContentSize();
			setContentSize(m_tProgressSize);
			addChild(m_pProgressSprite);
		}
		changeValueAndExecuteEvent(m_nValue, false);
	}
}

void CProgressBar::setProgressSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setProgressSpriteFrame(pFrame);	
}


NS_CC_WIDGET_END