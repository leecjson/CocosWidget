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
#include "CCToggle.h"

NS_CC_WIDGET_BEGIN

#define CC_SAFE_SET_VISIBLE(__ITEM__, __VAR__) if( __ITEM__ ) __ITEM__->setVisible(__VAR__)

CCToggle::CCToggle()
{
	
}

CCToggle::~CCToggle()
{

}

void CCToggle::setEnabled(bool bEnabled)
{
	if( m_bEnabled != bEnabled )
	{
		if( bEnabled )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		}
		else
		{
			setChecked(false);
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, true);
		}
		m_bEnabled = bEnabled;
	}
}

void CCToggle::setChecked(bool bChecked)
{
	if( m_bChecked != bChecked && m_bEnabled )
	{
		if( bChecked )
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, false);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, true);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);

			if( m_nExclusion != -1 )
			{
				CCArray* pChildren = m_pParent->getChildren();
				CCObject* pChildObject = NULL;
				CCARRAY_FOREACH(pChildren, pChildObject)
				{
					if( pChildObject == this )
					{
						continue;
					}
					CCToggle* pChildToggle = dynamic_cast<CCToggle*>(pChildObject);
					if( pChildToggle && pChildToggle->isEnabled() &&
						pChildToggle->getExclusion() == m_nExclusion )
					{
						pChildToggle->setChecked(false);
					}
				}
			}
		}
		else
		{
			CC_SAFE_SET_VISIBLE(m_pNormalImage, true);
			CC_SAFE_SET_VISIBLE(m_pSelectedImage, false);
			CC_SAFE_SET_VISIBLE(m_pDisabledImage, false);
		}
		m_bChecked = bChecked;
		executeCheck(this);
	}
}

CCWidgetTouchModel CCToggle::onTouchBegan(CCTouch *pTouch)
{
	return eWidgetTouchTransient;
}

void CCToggle::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		setChecked(!m_bChecked);
		executeClick();
	}
}

CCToggle* CCToggle::create()
{
	CCToggle *pRet = new CCToggle();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCToggle* CCToggle::create(const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CCToggle *pRet = new CCToggle();
	if( pRet && pRet->initWithFile(pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCToggle* CCToggle::createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled)
{
	CCToggle* pRet = new CCToggle();
	if( pRet && pRet->initWith9Sprite(tSize, pNormal, pSelected, pDisabled) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}


NS_CC_WIDGET_END