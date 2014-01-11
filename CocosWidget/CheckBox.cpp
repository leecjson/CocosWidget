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
#include "CheckBox.h"

NS_CC_WIDGET_BEGIN

CCheckBox::CCheckBox()
: m_pNormal(NULL)
, m_pNormalPress(NULL)
, m_pChecked(NULL)
, m_pCheckedPress(NULL)
, m_pDisabledNormal(NULL)
, m_pDisabledChecked(NULL)
{
	setThisObject(this);
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);

	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);
}

CCheckBox::~CCheckBox()
{
	
}

CCheckBox* CCheckBox::create()
{
	CCheckBox* pRet = new CCheckBox();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CCheckBox::init()
{
	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);

	return true;
}

#define SAVE_SET_VISIBLE(_SPRITE_, _FLAG_) if(_SPRITE_) _SPRITE_->setVisible(_FLAG_)
#define SAVE_SET_CENTER(_SPRITE_, _SIZE_) \
if( _SPRITE_ ) _SPRITE_->setPosition(CCPoint(_SIZE_.width/2, _SIZE_.height/2))

void CCheckBox::setContentSize(const CCSize& tContentSize)
{
	CCNodeRGBA::setContentSize(tContentSize);
	SAVE_SET_CENTER(m_pNormal, m_obContentSize);
	SAVE_SET_CENTER(m_pNormalPress, m_obContentSize);
	SAVE_SET_CENTER(m_pChecked, m_obContentSize);
	SAVE_SET_CENTER(m_pCheckedPress, m_obContentSize);
	SAVE_SET_CENTER(m_pDisabledNormal, m_obContentSize);
	SAVE_SET_CENTER(m_pDisabledChecked, m_obContentSize);
}

CWidgetTouchModel CCheckBox::onTouchBegan(CCTouch* pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

	if( isChecked() )
	{
		if( m_pCheckedPress )
		{
			SAVE_SET_VISIBLE(m_pCheckedPress, true);
			SAVE_SET_VISIBLE(m_pChecked, false);
		}
	}
	else
	{
		if( m_pNormalPress )
		{
			SAVE_SET_VISIBLE(m_pNormalPress, true);
			SAVE_SET_VISIBLE(m_pNormal, false);
		}
	}

	return eWidgetTouchTransient;
}

void CCheckBox::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;

	CCPoint tPoint = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(tPoint) )
	{
		if( isChecked() )
		{
			if( m_pCheckedPress )
			{
				SAVE_SET_VISIBLE(m_pCheckedPress, true);
				SAVE_SET_VISIBLE(m_pChecked, false);
			}
			else
			{
				SAVE_SET_VISIBLE(m_pChecked, true);
			}
		}
		else
		{
			if( m_pNormalPress )
			{
				SAVE_SET_VISIBLE(m_pNormalPress, true);
				SAVE_SET_VISIBLE(m_pNormal, false);
			}
			else
			{
				SAVE_SET_VISIBLE(m_pNormal, true);
			}
		}
	}
	else
	{
		if( isChecked() )
		{
			SAVE_SET_VISIBLE(m_pCheckedPress, false);
			SAVE_SET_VISIBLE(m_pChecked, true);
		}
		else
		{
			SAVE_SET_VISIBLE(m_pNormalPress, false);
			SAVE_SET_VISIBLE(m_pNormal, true);
		}
	}
}

void CCheckBox::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	CCPoint tPoint = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(tPoint) )
	{
		if( isChecked() )
		{
			setChecked(false);
		}
		else
		{
			setChecked(true);
		}
		executeClickHandler(this);
	}
	else
	{
		if( isChecked() )
		{
			SAVE_SET_VISIBLE(m_pNormalPress, false);
			SAVE_SET_VISIBLE(m_pNormal, false);
			SAVE_SET_VISIBLE(m_pCheckedPress, false);
			SAVE_SET_VISIBLE(m_pChecked, true);
		}
		else
		{
			SAVE_SET_VISIBLE(m_pNormalPress, false);
			SAVE_SET_VISIBLE(m_pNormal, true);
			SAVE_SET_VISIBLE(m_pCheckedPress, false);
			SAVE_SET_VISIBLE(m_pChecked, false);
		}
	}
}

void CCheckBox::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;

	if( isChecked() )
	{
		SAVE_SET_VISIBLE(m_pCheckedPress, false);
		SAVE_SET_VISIBLE(m_pChecked, true);
	}
	else
	{
		SAVE_SET_VISIBLE(m_pNormalPress, false);
		SAVE_SET_VISIBLE(m_pNormal, true);
	}
}

void CCheckBox::setChecked(bool bChecked)
{
	if( m_bChecked != bChecked )
	{
		if( m_bEnabled )
		{
			if( bChecked )
			{
				SAVE_SET_VISIBLE(m_pNormalPress, false);
				SAVE_SET_VISIBLE(m_pNormal, false);
				SAVE_SET_VISIBLE(m_pCheckedPress, false);
				SAVE_SET_VISIBLE(m_pChecked, true);
				setUnCheckedForOtherWidgetsByExclusion(m_pParent);
			}
			else
			{
				SAVE_SET_VISIBLE(m_pNormalPress, false);
				SAVE_SET_VISIBLE(m_pNormal, true);
				SAVE_SET_VISIBLE(m_pCheckedPress, false);
				SAVE_SET_VISIBLE(m_pChecked, false);
			}
		}
		else
		{
			if( bChecked )
			{
				if( m_pDisabledChecked )
				{
					m_pDisabledChecked->setVisible(true);
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledNormal, false);
				}
				else
				{
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, true);
					SAVE_SET_VISIBLE(m_pDisabledNormal, false);
				}
				setUnCheckedForOtherWidgetsByExclusion(m_pParent);
			}
			else
			{
				if( m_pDisabledNormal )
				{
					m_pDisabledNormal->setVisible(true);
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledChecked, false);
				}
				else
				{
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, true);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledChecked, false);
				}
			}
		}

		m_bChecked = bChecked;
		executeCheckHandler(this, m_bChecked);
	}
}

void CCheckBox::setEnabled(bool bEnabled)
{
	if( m_bEnabled != bEnabled )
	{
		if( bEnabled )
		{
			if( isChecked() )
			{
				SAVE_SET_VISIBLE(m_pNormalPress, false);
				SAVE_SET_VISIBLE(m_pNormal, false);
				SAVE_SET_VISIBLE(m_pCheckedPress, false);
				SAVE_SET_VISIBLE(m_pChecked, true);
				SAVE_SET_VISIBLE(m_pDisabledNormal, false);
				SAVE_SET_VISIBLE(m_pDisabledChecked, false);
			}
			else
			{
				SAVE_SET_VISIBLE(m_pNormalPress, false);
				SAVE_SET_VISIBLE(m_pNormal, true);
				SAVE_SET_VISIBLE(m_pCheckedPress, false);
				SAVE_SET_VISIBLE(m_pChecked, false);
				SAVE_SET_VISIBLE(m_pDisabledNormal, false);
				SAVE_SET_VISIBLE(m_pDisabledChecked, false);
			}
		}
		else
		{
			if( isChecked() )
			{
				if( m_pDisabledChecked )
				{
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledNormal, false);
					SAVE_SET_VISIBLE(m_pDisabledChecked, true);
				}
				else
				{
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, true);
					SAVE_SET_VISIBLE(m_pDisabledNormal, false);
				}
			}
			else
			{
				if( m_pDisabledNormal )
				{
					SAVE_SET_VISIBLE(m_pNormalPress, false);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledNormal, true);
					SAVE_SET_VISIBLE(m_pDisabledChecked, false);
				}
				else
				{
					SAVE_SET_VISIBLE(m_pNormalPress, true);
					SAVE_SET_VISIBLE(m_pNormal, false);
					SAVE_SET_VISIBLE(m_pCheckedPress, false);
					SAVE_SET_VISIBLE(m_pChecked, false);
					SAVE_SET_VISIBLE(m_pDisabledChecked, false);
				}
			}
		}

		m_bEnabled = bEnabled;
	}
}

void CCheckBox::setNormalImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setNormalTexture(pTexture);
	}
}

void CCheckBox::setNormalPressImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setNormalPressTexture(pTexture);
	}
}

void CCheckBox::setCheckedImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setCheckedTexture(pTexture);
	}
}

void CCheckBox::setCheckedPressImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setCheckedPressTexture(pTexture);
	}
}

void CCheckBox::setDisabledNormalImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setDisabledNormalTexture(pTexture);
	}
}

void CCheckBox::setDisabledCheckedImage(const char* pFile)
{
	if( pFile && strlen(pFile) )
	{
		CCTexture2D* pTexture = CCTextureCache::sharedTextureCache()->addImage(pFile);
		setDisabledCheckedTexture(pTexture);
	}
}

void CCheckBox::setNormalSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pNormal )
		{
			m_pNormal->setDisplayFrame(pFrame);
			setContentSize(m_pNormal->getContentSize());
		}
		else
		{
			m_pNormal = CCSprite::createWithSpriteFrame(pFrame);
			setContentSize(m_pNormal->getContentSize());
			addChild(m_pNormal);
		}
		m_pNormal->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setNormalPressSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pNormalPress )
		{
			m_pNormalPress->setDisplayFrame(pFrame);
		}
		else
		{
			m_pNormalPress = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pNormalPress);
		}
		m_pNormalPress->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setCheckedSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pChecked )
		{
			m_pChecked->setDisplayFrame(pFrame);
		}
		else
		{
			m_pChecked = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pChecked);
		}
		m_pChecked->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setCheckedPressSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pCheckedPress )
		{
			m_pCheckedPress->setDisplayFrame(pFrame);
		}
		else
		{
			m_pCheckedPress = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pCheckedPress);
		}
		m_pCheckedPress->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setDisabledNormalSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pDisabledNormal )
		{
			m_pDisabledNormal->setDisplayFrame(pFrame);
		}
		else
		{
			m_pDisabledNormal = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pDisabledNormal);
		}
		m_pDisabledNormal->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setDisabledCheckedSpriteFrame(CCSpriteFrame* pFrame)
{
	if( pFrame )
	{
		if( m_pDisabledChecked )
		{
			m_pDisabledChecked->setDisplayFrame(pFrame);
		}
		else
		{
			m_pDisabledChecked = CCSprite::createWithSpriteFrame(pFrame);
			addChild(m_pDisabledChecked);
		}
		m_pDisabledChecked->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
	}
}

void CCheckBox::setNormalTexture(CCTexture2D* pTexture)
{
	if( m_pNormal )
	{
		m_pNormal->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pNormal->setTextureRect(tRect);

		setContentSize(pTexture->getContentSize());
	}
	else
	{
		m_pNormal = CCSprite::createWithTexture(pTexture);
		setContentSize(m_pNormal->getContentSize());
		addChild(m_pNormal);
	}
	m_pNormal->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setNormalPressTexture(CCTexture2D* pTexture)
{
	if( m_pNormalPress )
	{
		m_pNormalPress->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pNormalPress->setTextureRect(tRect);
	}
	else
	{
		m_pNormalPress = CCSprite::createWithTexture(pTexture);
		addChild(m_pNormalPress);
	}
	m_pNormalPress->setVisible(false);
	m_pNormalPress->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setCheckedTexture(CCTexture2D* pTexture)
{
	if( m_pChecked )
	{
		m_pChecked->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pChecked->setTextureRect(tRect);
	}
	else
	{
		m_pChecked = CCSprite::createWithTexture(pTexture);
		addChild(m_pChecked);
	}
	m_pChecked->setVisible(false);
	m_pChecked->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setCheckedPressTexture(CCTexture2D* pTexture)
{
	if( m_pCheckedPress )
	{
		m_pCheckedPress->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pCheckedPress->setTextureRect(tRect);
	}
	else
	{
		m_pCheckedPress = CCSprite::createWithTexture(pTexture);
		addChild(m_pCheckedPress);
	}
	m_pCheckedPress->setVisible(false);
	m_pCheckedPress->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setDisabledNormalTexture(CCTexture2D* pTexture)
{
	if( m_pDisabledNormal )
	{
		m_pDisabledNormal->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pDisabledNormal->setTextureRect(tRect);
	}
	else
	{
		m_pDisabledNormal = CCSprite::createWithTexture(pTexture);
		addChild(m_pDisabledNormal);
	}
	m_pDisabledNormal->setVisible(false);
	m_pDisabledNormal->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setDisabledCheckedTexture(CCTexture2D* pTexture)
{
	if( m_pDisabledChecked )
	{
		m_pDisabledChecked->setTexture(pTexture);

		CCRect tRect = CCRectZero;
		tRect.size = pTexture->getContentSize();
		m_pDisabledChecked->setTextureRect(tRect);
	}
	else
	{
		m_pDisabledChecked = CCSprite::createWithTexture(pTexture);
		addChild(m_pDisabledChecked);
	}
	m_pDisabledChecked->setVisible(false);
	m_pDisabledChecked->setPosition(CCPoint(m_obContentSize.width/2, m_obContentSize.height/2));
}

void CCheckBox::setNormalSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setNormalSpriteFrame(pFrame);
}

void CCheckBox::setNormalPressSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setNormalPressSpriteFrame(pFrame);
}

void CCheckBox::setCheckedSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);
	
#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setCheckedSpriteFrame(pFrame);
}

void CCheckBox::setCheckedPressSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setCheckedPressSpriteFrame(pFrame);
}

void CCheckBox::setDisabledNormalSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setDisabledNormalSpriteFrame(pFrame);
}

void CCheckBox::setDisabledCheckedSpriteFrameName(const char* pSpriteName)
{
	CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pSpriteName);

#if COCOS2D_DEBUG > 0
	char msg[256] = {0};
	sprintf(msg, "Invalid spriteFrameName: %s", pSpriteName);
	CCAssert(pFrame != NULL, msg);
#endif

	return setDisabledCheckedSpriteFrame(pFrame);
}


NS_CC_WIDGET_END