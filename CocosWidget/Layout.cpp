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
#include "Layout.h"

NS_CC_WIDGET_BEGIN

CLayout::CLayout()
: m_pBackgroundImage(NULL)
, m_pBackgroundColor(NULL)
, m_pBackgroundGradient(NULL)
{
	setThisObject(this);
}

CLayout::~CLayout()
{

}

CLayout* CLayout::create()
{
	CLayout* pRet = new CLayout();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CLayout* CLayout::create(const CCSize& tContentSize)
{
	CLayout* pRet = new CLayout();
	if( pRet && pRet->init() )
	{
		pRet->setContentSize(tContentSize);
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CLayout::init()
{
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);

	setContentSize(CCWIDGET_LAYOUT_DEFAULT_CONTENT_SIZE);
	setAnchorPoint(CCWIDGET_LAYOUT_DEFAULT_ANCHOR_POINT);
	setPosition(CCPointZero);

	return true;
}

void CLayout::setContentSize(const CCSize& tContentSize)
{ 
	CCNodeRGBA::setContentSize(tContentSize);

	CC_WIDGET_UPDATE_BACKGROUND_POS
}

CWidgetTouchModel CLayout::onTouchBegan(CCTouch* pTouch)
{
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;

	CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
	if( m_pChildren && m_pChildren->count() > 0 )
	{
		CCObject* pObject = NULL;
		CCARRAY_FOREACH_REVERSE( m_pChildren, pObject )
		{
			CCNode* pNode = dynamic_cast<CCNode*>(pObject);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget && pNode->isVisible() && pWidget->isEnabled() && pWidget->isTouchEnabled() )
			{
				if( pNode->boundingBox().containsPoint(tNodePoint) )
				{
					m_eSelectedWidgetTouchModel = pWidget->executeTouchBeganHandler(pTouch);
					if( m_eSelectedWidgetTouchModel == eWidgetTouchNone )
					{
						m_pSelectedWidget = NULL;
						m_eSelectedWidgetTouchModel = eWidgetTouchNone;
					}
					else
					{
						m_pSelectedWidget = pWidget;
						return m_eSelectedWidgetTouchModel;
					}
				}
			}
		}
	}
	return eWidgetTouchNone;
}

void CLayout::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchMovedHandler(pTouch, fDuration);
	}
}

void CLayout::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchEndedHandler(pTouch, fDuration);
	}
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;
}

void CLayout::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchCancelledHandler(pTouch, fDuration);
	}
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;
}

CCObject* CLayout::findViewById(const char* id)
{
	CCAssert(id && strlen(id), "should not null");

	return find(m_pChildren, id);
}

CCObject* CLayout::find(CCArray* pChidren, const char* id)
{
	if( pChidren && pChidren->count() > 0 )
	{
		unsigned int nCount = pChidren->count();
		for(unsigned int i = 0; i < nCount; ++i)
		{
			CCObject* pObject = pChidren->objectAtIndex(i);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget )
			{
				if( strcmp(pWidget->getId(), id) == 0 )
				{
					return pObject;
				}
				else
				{
					CCObject* pRet = find(dynamic_cast<CCNode*>(pObject)->getChildren(), id);
					if( pRet )
					{
						return pRet;
					}
				}
			}
		}
	}
	return NULL;
}

NS_CC_WIDGET_END