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
#include "Slider.h"

NS_CC_WIDGET_BEGIN

CSlider::CSlider()
: m_pSlider(NULL)
, m_bDrag(false)
{
	setThisObject(this);
}

CSlider::~CSlider()
{

}

CSlider* CSlider::create()
{
	CSlider* pRet = new CSlider();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CSlider* CSlider::create(const char* pSlider, const char* pProgress)
{
	CSlider* pRet = new CSlider();
	if( pRet && pRet->initWithSlider(pSlider, pProgress) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CSlider::initWithSlider(const char* pSlider, const char* pProgress)
{
	setSliderImage(pSlider);

	if( initWithFile(pProgress) )
	{
		return true;
	}

	return false;
}

void CSlider::setContentSize(const CCSize& tSize)
{
	if( m_pSlider && m_pProgressSprite )
	{
		const CCSize& tSliderSize = m_pSlider->getContentSize();

		CCSize tTargetSize;
		tTargetSize.width = m_tProgressSize.width + tSliderSize.width;
		tTargetSize.height = m_tProgressSize.height + tSliderSize.height;

		CProgressBar::setContentSize(tTargetSize);
		return;
	}

	CProgressBar::setContentSize(tSize);
}

int CSlider::valueFromPercent(float fPercentage)
{
	return (int)(fPercentage * m_nMaxValue);
}

int CSlider::valueFromPoint(const CCPoint& tPoint)
{
	int nRet = 0;
	switch( m_eDirection )
	{
	case eProgressBarDirectionLeftToRight:
		{
			float fHalfWidth = m_tProgressSize.width / 2;
			if( tPoint.x < m_tCenterPoint.x - fHalfWidth )
			{
				nRet = m_nMinValue;
				break;
			}
			if( tPoint.x > m_tCenterPoint.x + fHalfWidth )
			{
				nRet = m_nMaxValue;
				break;
			}
			
			float fStartPoint = tPoint.x - (m_tCenterPoint.x - fHalfWidth);
			float fPercentage = fStartPoint / m_tProgressSize.width;
			nRet = valueFromPercent(fPercentage);
		}
		break;
	case eProgressBarDirectionRightToLeft:
		{
			float fHalfWidth = m_tProgressSize.width / 2;
			if( tPoint.x < m_tCenterPoint.x - fHalfWidth )
			{
				nRet = m_nMaxValue;
				break;
			}
			if( tPoint.x > m_tCenterPoint.x + fHalfWidth )
			{
				nRet = m_nMinValue;
				break;
			}

			float fStartPoint = tPoint.x - (m_tCenterPoint.x - fHalfWidth);
			float fPercentage = (m_tProgressSize.width - fStartPoint) / m_tProgressSize.width;
			nRet = valueFromPercent(fPercentage);
		}
		break;
	case eProgressBarDirectionBottomToTop:
		{
			float fHalfHeight = m_tProgressSize.height / 2;
			if( tPoint.y < m_tCenterPoint.y - fHalfHeight )
			{
				nRet = m_nMinValue;
				break;
			}
			if( tPoint.y > m_tCenterPoint.y + fHalfHeight )
			{
				nRet = m_nMaxValue;
				break;
			}

			float fStartPoint = tPoint.y - (m_tCenterPoint.y - fHalfHeight);
			float fPercentage = fStartPoint / m_tProgressSize.height;
			nRet = valueFromPercent(fPercentage);
		}
		break;
	case eProgressBarDirectionTopToBottom:
		{
			float fHalfHeight = m_tProgressSize.height / 2;
			if( tPoint.y < m_tCenterPoint.y - fHalfHeight )
			{
				nRet = m_nMaxValue;
				break;
			}
			if( tPoint.y > m_tCenterPoint.y + fHalfHeight )
			{
				nRet = m_nMinValue;
				break;
			}

			float fStartPoint = tPoint.y - (m_tCenterPoint.y - fHalfHeight);
			float fPercentage = (m_tProgressSize.height - fStartPoint) / m_tProgressSize.height;
			nRet = valueFromPercent(fPercentage);
		}
		break;
	default:
		break;
	}
	return nRet;
}

CWidgetTouchModel CSlider::onTouchBegan(CCTouch *pTouch)
{
	m_bDrag = m_pSlider->boundingBox().containsPoint(
		convertToNodeSpace(pTouch->getLocation())
	);

	if( m_bDrag )
	{
		changeValueAndExecuteEvent(valueFromPoint(convertToNodeSpace(pTouch->getLocation())), true);
		return eWidgetTouchSustained;
	}

	return eWidgetTouchNone;
}

void CSlider::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	if( m_bDrag )
	{
		changeValueAndExecuteEvent(valueFromPoint(convertToNodeSpace(pTouch->getLocation())), true);
	}
}

void CSlider::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	if( m_bDrag )
	{
		changeValueAndExecuteEvent(valueFromPoint(convertToNodeSpace(pTouch->getLocation())), true);
	}
}

void CSlider::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	if( m_bDrag )
	{
		changeValueAndExecuteEvent(valueFromPoint(convertToNodeSpace(pTouch->getLocation())), true);
	}
}

void CSlider::pointFromValue(int nValue, CCPoint& tOutPoint)
{
	float fPercentage = getPercentage();
	switch( m_eDirection )
	{
	case eProgressBarDirectionLeftToRight:
		{
			tOutPoint.x = m_tProgressSize.width * fPercentage + (m_tCenterPoint.x - m_tProgressSize.width / 2);
			tOutPoint.y = m_tCenterPoint.y;
		}
		break;
	case eProgressBarDirectionRightToLeft:
		{
			tOutPoint.x = m_tProgressSize.width - (m_tProgressSize.width * fPercentage) + (m_tCenterPoint.x - m_tProgressSize.width / 2);
			tOutPoint.y = m_tCenterPoint.y;
		}
		break;
	case eProgressBarDirectionBottomToTop:
		{
			tOutPoint.x = m_tCenterPoint.x;
			tOutPoint.y = m_tProgressSize.height * fPercentage + (m_tCenterPoint.y - m_tProgressSize.height / 2);
		}
		break;
	case eProgressBarDirectionTopToBottom:
		{
			tOutPoint.x = m_tCenterPoint.x;
			tOutPoint.y = m_tProgressSize.height - (m_tProgressSize.height * fPercentage) + (m_tCenterPoint.y - m_tProgressSize.height / 2);
		}
		break;
	default:
		break;
	}
}

void CSlider::changeValueAndExecuteEvent(int nValue, bool bExeEvent)
{
	CProgressBar::changeValueAndExecuteEvent(nValue, bExeEvent);

	if( m_pSlider )
	{
		CCPoint tOutPoint;
		pointFromValue(m_nValue, tOutPoint);

		m_pSlider->setPosition(tOutPoint);
	}
}

void CSlider::setSliderImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setSliderTexture(pTexture);
	}
}

void CSlider::setSliderTexture(CCTexture2D* pTexture)
{
	if( m_pSlider )
	{
		m_pSlider->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pSlider->setTextureRect(tRect);
	}
	else
	{
		m_pSlider = CCSprite::createWithTexture(pTexture);
		addChild(m_pSlider, 2);
	}
	setContentSize(m_obContentSize);
}

void CSlider::setSliderSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pSlider )
		{
			m_pSlider->setDisplayFrame(pFrame);
		}
		else
		{
			m_pSlider = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pSlider);
		}
	}
	setContentSize(m_obContentSize);
}

void CSlider::setSliderSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setSliderSpriteFrame(pFrame);
}

NS_CC_WIDGET_END