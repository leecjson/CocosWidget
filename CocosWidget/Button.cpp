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
#include "Button.h"

NS_CC_WIDGET_BEGIN

#define CC_CENTER_POS(__SIZE__) CCPoint(__SIZE__.width / 2, __SIZE__.height / 2)
#define CC_SAFE_SET_VISIBLE(__ITEM__, __VAR__) if( __ITEM__ ) __ITEM__->setVisible(__VAR__)
#define CC_SAFE_REMOVE(__ITEM__) if(__ITEM__) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9ELSE(__ITEM__) if(__ITEM__ && !(dynamic_cast<CScale9Sprite*>(__ITEM__))) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9SPRITE(__ITEM__) if(__ITEM__ && dynamic_cast<CScale9Sprite*>(__ITEM__)) removeChild(__ITEM__)
#define CC_IS_9SPRITE(__ITEM__) __ITEM__ && dynamic_cast<CScale9Sprite*>(__ITEM__) ? true : false


CButton::CButton()
: m_pNormalImage(NULL)
, m_pDisabledImage(NULL)
, m_pSelectedImage(NULL)
, m_bScale9Enabled(false)
, m_tTextOffset(CCPointZero)
, m_pLabel(NULL)
{
	setThisObject(this);
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);
}

CButton::~CButton()
{
	
}

CButton* CButton::create()
{
	CButton *pRet = new CButton();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CButton* CButton::createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CButton* pRet = new CButton();
	if( pRet && pRet->initWith9Sprite(tSize, pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CButton* CButton::create(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CButton* pRet = new CButton();
	if( pRet && pRet->initWithFile(pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CButton::init()
{
	setContentSize(CCSizeMake(100, 100));
	setPosition(CCPointZero);
	setAnchorPoint(CCPoint(0.5f, 0.5f));
	return CCNode::init();
}

bool CButton::initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !pNormal || !strlen(pNormal) || !init()  )
	{
		return false;
	}

	setScale9Enabled(true);
	setContentSize(tSize);
	setNormalImage(pNormal);
	setSelectedImage(pSelected);
	setDisabledImage(pDisabled);

	return true;
}

bool CButton::initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !pNormal || !strlen(pNormal) || !init() )
	{
		return false;
	}

	setScale9Enabled(false);
	setNormalImage(pNormal);
	setSelectedImage(pSelected);
	setDisabledImage(pDisabled);

	return true;
}

void CButton::updateCascadeLabelContentSize(const CCSize& tOffsetSize)
{
	if( m_bScale9Enabled && m_pLabel )
	{
		const CCSize& tTextSize = m_pLabel->getContentSize();
		setContentSize(tTextSize + tOffsetSize);
	}
}

void CButton::setNormalSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pNormalImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pNormalImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pNormalImage;
				pImage->setDisplayFrame(pFrame);
				setContentSize(pImage->getContentSize());
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pNormalImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pNormalImage = CCSprite::createWithSpriteFrame(pFrame);
				setContentSize(m_pNormalImage->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CButton::setSelectedSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pSelectedImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pSelectedImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setDisplayFrame(pFrame);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pSelectedImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pSelectedImage = CCSprite::createWithSpriteFrame(pFrame);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CButton::setDisabledSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pDisabledImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pDisabledImage;
				pImage->initWithSpriteFrame(pFrame);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setDisplayFrame(pFrame);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pDisabledImage = CScale9Sprite::createWithSpriteFrame(pFrame);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pDisabledImage = CCSprite::createWithSpriteFrame(pFrame);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

void CButton::setNormalImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setNormalTexture(pTexture);
	}
}

void CButton::setSelectedImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setSelectedTexture(pTexture);
	}
}

void CButton::setDisabledImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setDisabledTexture(pTexture);
	}
}

void CButton::setNormalTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pNormalImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pNormalImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pNormalImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
				setContentSize(pTexture->getContentSize());
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pNormalImage = CScale9Sprite::createWithTexture(pTexture);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pNormalImage = CCSprite::createWithTexture(pTexture);
				setContentSize(pTexture->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CButton::setSelectedTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pSelectedImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pSelectedImage = CScale9Sprite::createWithTexture(pTexture);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pSelectedImage = CCSprite::createWithTexture(pTexture);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CButton::setDisabledTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pDisabledImage )
		{
			if( m_bScale9Enabled )
			{
				CScale9Sprite* pImage = (CScale9Sprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_bScale9Enabled )
			{
				m_pDisabledImage = CScale9Sprite::createWithTexture(pTexture);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCRect rect;
				rect.origin = CCPointZero;
				rect.size = pTexture->getContentSize();
				m_pDisabledImage = CCSprite::createWithTexture(pTexture);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

void CButton::setNormalSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setNormalSpriteFrame(pFrame);
}

void CButton::setSelectedSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setSelectedSpriteFrame(pFrame);
}

void CButton::setDisabledSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setDisabledSpriteFrame(pFrame);
}

CCNode* CButton::getNormalImage()
{
	return m_pNormalImage;
}

CCNode* CButton::getSelectedImage()
{
	return m_pSelectedImage;
}

CCNode* CButton::getDisabledImage()
{
	return m_pDisabledImage;
}

void CButton::setContentSize(const CCSize& contentSize)
{
	CCNode::setContentSize(contentSize);

	if( m_pNormalImage )
	{
		if( CC_IS_9SPRITE(m_pNormalImage) )
		{
			m_pNormalImage->setContentSize(m_obContentSize);
		}
		m_pNormalImage->setPosition(CC_CENTER_POS(m_obContentSize));
	}

	if( m_pSelectedImage )
	{
		if( CC_IS_9SPRITE(m_pSelectedImage) )
		{
			m_pSelectedImage->setContentSize(m_obContentSize);
		}
		m_pSelectedImage->setPosition(CC_CENTER_POS(m_obContentSize));
	}

	if( m_pDisabledImage )
	{
		if( CC_IS_9SPRITE(m_pDisabledImage) )
		{
			m_pDisabledImage->setContentSize(m_obContentSize);
		}
		m_pDisabledImage->setPosition(CC_CENTER_POS(m_obContentSize));
	}

	if( m_pLabel )
	{
		m_pLabel->setPosition(CC_CENTER_POS(m_obContentSize) + m_tTextOffset);
	}
}

CLabel* CButton::getLabel()
{
	if( !m_pLabel )
	{
		m_pLabel = CLabel::create();
		m_pLabel->setFontSize(25);
		m_pLabel->setPosition(CC_CENTER_POS(m_obContentSize));
		m_pLabel->setZOrder(1);
		addChild(m_pLabel);
	}
	return m_pLabel;
}

bool CButton::isScale9Enabled()
{
	return m_bScale9Enabled;
}

void CButton::setScale9Enabled(bool bEnabled)
{
	if( m_bScale9Enabled != bEnabled )
	{
		if( bEnabled )
		{
			CC_SAFE_REMOVE_9ELSE(m_pNormalImage);
			CC_SAFE_REMOVE_9ELSE(m_pSelectedImage);
			CC_SAFE_REMOVE_9ELSE(m_pDisabledImage);
		}
		else
		{
			CC_SAFE_REMOVE_9SPRITE(m_pNormalImage);
			CC_SAFE_REMOVE_9SPRITE(m_pSelectedImage);
			CC_SAFE_REMOVE_9SPRITE(m_pDisabledImage);
		}
		m_bScale9Enabled = bEnabled;
	}
}

void CButton::setEnabled(bool bEnabled)
{
	if( m_bEnabled != bEnabled )
	{
		m_bEnabled = bEnabled;
		if( bEnabled )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		}
		else
		{
			if( m_pDisabledImage )
			{
				CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
				CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
				CC_SAFE_SET_VISIBLE(m_pDisabledImage, true);
			}
			else
			{
				CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
				CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
				CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
			}
		}
	}
}

void CButton::setLabelOffset(const CCPoint& tOffset)
{
	if( m_pLabel )
	{
		m_tTextOffset = tOffset;
		m_pLabel->setPosition(m_pLabel->getPosition() + m_tTextOffset);
	}
	else
	{
		getLabel();
		m_tTextOffset = tOffset;
		m_pLabel->setPosition(m_pLabel->getPosition() + m_tTextOffset);
	}
}

CWidgetTouchModel CButton::onTouchBegan(CCTouch *pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

	if( m_pSelectedImage )
	{
		CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
		CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		m_pSelectedImage->setVisible(true);
	}
	return eWidgetTouchTransient;
}

void CButton::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;

	if( m_pSelectedImage )
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			m_pSelectedImage->setVisible(true);
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
		}
	}
}

void CButton::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	if( m_pSelectedImage )
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
			executeClickHandler(this);
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
		}
	}
	else
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			executeClickHandler(this);
		}
		CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	}
}

void CButton::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;

	CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
}

NS_CC_WIDGET_END