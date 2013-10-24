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
#include "CCButton.h"

NS_CC_WIDGET_BEGIN

#define CC_SAFE_SET_VISIBLE(__ITEM__, __VAR__) if( __ITEM__ ) __ITEM__->setVisible(__VAR__)
#define CC_SAFE_REMOVE(__ITEM__) if(__ITEM__) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9ELSE(__ITEM__) if(__ITEM__ && !(dynamic_cast<CC9Sprite*>(__ITEM__))) removeChild(__ITEM__)
#define CC_SAFE_REMOVE_9SPRITE(__ITEM__) if(__ITEM__ && dynamic_cast<CC9Sprite*>(__ITEM__)) removeChild(__ITEM__)
#define CC_IS_9SPRITE(__ITEM__) __ITEM__ && dynamic_cast<CC9Sprite*>(__ITEM__) ? true : false


CCButton::CCButton()
: m_pNormalImage(NULL)
, m_pDisabledImage(NULL)
, m_pSelectedImage(NULL)
, m_b9SpriteEnabled(false)
, m_pText(NULL)
{
	setWidgetNode(this);
}

CCButton::~CCButton()
{
	
}

CCButton* CCButton::create()
{
	CCButton *pRet = new CCButton();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCButton* CCButton::createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CCButton* pRet = new CCButton();
	if( pRet && pRet->initWith9Sprite(tSize, pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCButton* CCButton::create(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CCButton* pRet = new CCButton();
	if( pRet && pRet->initWithFile(pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CCButton::init()
{
	setContentSize(CCSizeMake(100, 100));
	setPosition(CCPointZero);
	setAnchorPoint(CCPoint(0.5f, 0.5f));
	return CCNode::init();
}

bool CCButton::initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !init() || !pNormal )
	{
		return false;
	}
	set9SpriteEnabled(true);
	setContentSize(tSize);

	m_pNormalImage = CC9Sprite::create(pNormal);
	m_pNormalImage->setContentSize(tSize);
	m_pNormalImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
	addChild(m_pNormalImage);

	if( pSelected && strlen(pSelected) )
	{
		m_pSelectedImage = CC9Sprite::create(pSelected);
		m_pSelectedImage->setContentSize(tSize);
		m_pSelectedImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
		m_pSelectedImage->setVisible(false);
		addChild(m_pSelectedImage);
	}

	if( pDisabled && strlen(pDisabled) )
	{
		m_pDisabledImage = CC9Sprite::create(pDisabled);
		m_pDisabledImage->setContentSize(tSize);
		m_pDisabledImage->setPosition(CCPoint(tSize.width/2, tSize.height/2));
		m_pDisabledImage->setVisible(false);
		addChild(m_pDisabledImage);
	}

	return true;
}

bool CCButton::initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	if( !init() || !pNormal || strlen(pNormal) == 0 )
	{
		return false;
	}
	set9SpriteEnabled(false);

	m_pNormalImage = CCSprite::create(pNormal);
	setContentSize(m_pNormalImage->getContentSize());
	m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	addChild(m_pNormalImage);

	if( pSelected && strlen(pSelected) )
	{
		m_pSelectedImage = CCSprite::create(pSelected);
		m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
		m_pSelectedImage->setVisible(false);
		addChild(m_pSelectedImage);
	}

	if( pDisabled && strlen(pDisabled) )
	{
		m_pDisabledImage = CCSprite::create(pDisabled);
		m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
		m_pDisabledImage->setVisible(false);
		addChild(m_pDisabledImage);
	}

	return true;
}

void CCButton::setNormalSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pNormalImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pNormalImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pNormalImage = CC9Sprite::createWithSpriteFrame(pFrame);
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

void CCButton::setSelectedSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pSelectedImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pSelectedImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pSelectedImage = CC9Sprite::createWithSpriteFrame(pFrame);
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

void CCButton::setDisabledSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pDisabledImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pDisabledImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pDisabledImage = CC9Sprite::createWithSpriteFrame(pFrame);
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

void CCButton::setNormalImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pNormalImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pNormalImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
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
			if( m_b9SpriteEnabled )
			{
				m_pNormalImage = CC9Sprite::create(pFile);
				m_pNormalImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pNormalImage = CCSprite::create(pFile);
				setContentSize(m_pNormalImage->getContentSize());
			}

			m_pNormalImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			addChild(m_pNormalImage);
		}
	}
}

void CCButton::setSelectedImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pSelectedImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pSelectedImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pSelectedImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_b9SpriteEnabled )
			{
				m_pSelectedImage = CC9Sprite::create(pFile);
				m_pSelectedImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pSelectedImage = CCSprite::create(pFile);
			}

			m_pSelectedImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pSelectedImage->setVisible(false);
			addChild(m_pSelectedImage);
		}
	}
}

void CCButton::setDisabledTexture(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		if( m_pDisabledImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pDisabledImage;
				pImage->initWithFile(pFile);
				pImage->setContentSize(m_obContentSize);
			}
			else
			{
				CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
				CCRect rect = CCRectZero;
				rect.size = pTexture->getContentSize();
				CCSprite* pImage = (CCSprite*) m_pDisabledImage;
				pImage->setTexture(pTexture);
				pImage->setTextureRect(rect);
			}
		}
		else
		{
			if( m_b9SpriteEnabled )
			{
				m_pDisabledImage = CC9Sprite::create(pFile);
				m_pDisabledImage->setContentSize(m_obContentSize);
			}
			else
			{
				m_pDisabledImage = CCSprite::create(pFile);
			}

			m_pDisabledImage->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
			m_pDisabledImage->setVisible(false);
			addChild(m_pDisabledImage);
		}
	}
}

void CCButton::setNormalTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pNormalImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pNormalImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pNormalImage = CC9Sprite::createWithTexture(pTexture);
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

void CCButton::setSelectedTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pSelectedImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pSelectedImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pSelectedImage = CC9Sprite::createWithTexture(pTexture);
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

void CCButton::setDisabledTexture(CCTexture2D *pTexture)
{
	if( pTexture )
	{
		if( m_pDisabledImage )
		{
			if( m_b9SpriteEnabled )
			{
				CC9Sprite* pImage = (CC9Sprite*) m_pDisabledImage;
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
			if( m_b9SpriteEnabled )
			{
				m_pDisabledImage = CC9Sprite::createWithTexture(pTexture);
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

CCNode* CCButton::getNormalImage()
{
	return m_pNormalImage;
}

CCNode* CCButton::getSelectedImage()
{
	return m_pSelectedImage;
}

CCNode* CCButton::getDisabledImage()
{
	return m_pDisabledImage;
}

void CCButton::setContentSize(const CCSize& contentSize)
{
	if( m_b9SpriteEnabled )
	{
		if( CC_IS_9SPRITE(m_pNormalImage) )
		{
			m_pNormalImage->setContentSize(contentSize);
		}

		if( CC_IS_9SPRITE(m_pSelectedImage) )
		{
			m_pSelectedImage->setContentSize(contentSize);
		}

		if( CC_IS_9SPRITE(m_pDisabledImage) )
		{
			m_pDisabledImage->setContentSize(contentSize);
		}
	}

	if( m_pText )
	{
		m_pText->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}

	CCNode::setContentSize(contentSize);
}

CCTextTTF* CCButton::getTextTTF()
{
	if( !m_pText )
	{
		m_pText = CCTextTTF::create();
		m_pText->setPosition(ccp(m_obContentSize.width/2, m_obContentSize.height/2));
		m_pText->setZOrder(INT_MAX);
		addChild(m_pText);
	}
	return m_pText;
}

bool CCButton::is9SpriteEnabled()
{
	return m_b9SpriteEnabled;
}

void CCButton::set9SpriteEnabled(bool bEnabled)
{
	if( m_b9SpriteEnabled != bEnabled )
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
		m_b9SpriteEnabled = bEnabled;
	}
}

void CCButton::setEnabled(bool bEnabled)
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
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, true);
		}
	}
}

void CCButton::setTextOffset(const CCPoint& tOffset)
{
	if( m_pText )
	{
		m_pText->setPosition(m_pText->getPosition() + tOffset);
	}
}

CCWidgetTouchModel CCButton::onTouchBegan(CCTouch *pTouch)
{
	if( m_pSelectedImage )
	{
		CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
		CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		m_pSelectedImage->setVisible(true);
	}
	return eWidgetTouchTransient;
}

void CCButton::onTouchMoved(CCTouch *pTouch, float fDuration)
{
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

void CCButton::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedImage )
	{
		CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(touchPointInView) )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			m_pSelectedImage->setVisible(false);
			executeClick();
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
			executeClick();
		}
		CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	}
}

void CCButton::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
	CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
}

NS_CC_WIDGET_END