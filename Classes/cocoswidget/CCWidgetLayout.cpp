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
#include "CCWidgetLayout.h"

NS_CC_WIDGET_BEGIN

CCWidgetLayout::CCWidgetLayout()
: m_bIsTouched(false)
, m_nTouchPriority(0)
, m_bTouchEnabled(true)
, m_pSelectedWidget(NULL)
, m_fTouchedDuration(0.0f)
, m_pTouchMovedAfterLongClickListener(NULL)
, m_pTouchEndedAfterLongClickListener(NULL)
, m_pTouchCancelledAfterLongClickListener(NULL)
, m_pTouchMovedAfterLongClickHandler(NULL)
, m_pTouchEndedAfterLongClickHandler(NULL)
, m_pTouchCancelledAfterLongClickHandler(NULL)
, m_pLongClickedWidget(NULL)
{

}

CCWidgetLayout::~CCWidgetLayout()
{
	
}

int CCWidgetLayout::getTouchPriority()
{
	return m_nTouchPriority;
}

CCObject* CCWidgetLayout::findViewById(int id)
{
	if( id != -1 )
	{
		return findViewById(m_pChildren, id);
	}
	return NULL;
}

CCObject* CCWidgetLayout::findViewById(CCArray* pChidren, int id)
{
	if( pChidren && pChidren->count() > 0 )
	{
		unsigned int nCount = pChidren->count();
		for( unsigned int i = 0; i < nCount; ++i )
		{
			CCObject* pObject = pChidren->objectAtIndex(i);
			CCWidget* pWidget = dynamic_cast<CCWidget*>(pObject);
			if( pWidget )
			{
				if( pWidget->getId() == id )
				{
					return dynamic_cast<CCNode*>(pObject);
				}
				else
				{
					CCObject* pRet = findViewById(dynamic_cast<CCNode*>(pObject)->getChildren(), id);
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

void CCWidgetLayout::setLongClickTouchHandlerWidget(CCNode* pWidget)
{
	m_pLongClickedWidget = pWidget;
}

void CCWidgetLayout::setTouchMovedAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchMovedAfterLongClickListener = pTarget;
        m_pTouchMovedAfterLongClickHandler = pHandler;
    }
}

void CCWidgetLayout::setTouchEndedAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchEndedAfterLongClickListener = pTarget;
        m_pTouchEndedAfterLongClickHandler = pHandler;
    }
}

void CCWidgetLayout::setTouchCancelledAfterLongClickSelector(CCObject *pTarget, SEL_AfterLongClickHandler pHandler)
{
    if( pTarget && pHandler )
    {
        m_pTouchCancelledAfterLongClickListener = pTarget;
        m_pTouchCancelledAfterLongClickHandler = pHandler;
    }
}

void CCWidgetLayout::executeTouchMovedAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchMovedAfterLongClickListener && m_pTouchMovedAfterLongClickHandler )
    {
        (m_pTouchMovedAfterLongClickListener->*m_pTouchMovedAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CCWidgetLayout::executeTouchEndedAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchEndedAfterLongClickListener && m_pTouchEndedAfterLongClickHandler )
    {
		(m_pTouchEndedAfterLongClickListener->*m_pTouchEndedAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CCWidgetLayout::executeTouchCancelledAfterLongClick(CCObject* pSender, CCTouch *pTouch, float fDuration)
{
    if( m_pTouchCancelledAfterLongClickListener && m_pTouchCancelledAfterLongClickHandler )
    {
		(m_pTouchCancelledAfterLongClickListener->*m_pTouchCancelledAfterLongClickHandler)(pSender, pTouch, fDuration);
    }
}

void CCWidgetLayout::setTouchPriority(int nTouchPriority)
{
	if( m_nTouchPriority != nTouchPriority )
	{
		m_nTouchPriority = nTouchPriority;
		if( m_bTouchEnabled )
		{
			CCTouchDispatcher* pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
			pDispatcher->setPriority(nTouchPriority, this);
		}
	}
}

bool CCWidgetLayout::isTouchEnabled()
{
	return m_bTouchEnabled;
}

void CCWidgetLayout::setTouchEnabled(bool bTouchEnabled)
{
	if( m_bTouchEnabled != bTouchEnabled )
	{
		m_bTouchEnabled = bTouchEnabled;
		if( m_bRunning )
		{
			if( bTouchEnabled )
			{
				CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, m_nTouchPriority, true);
			}
			else
			{
				CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
			}
		}
	}
}

bool CCWidgetLayout::init()
{
	if(CCNode::init())
	{
		CCSize tWinSize = CCDirector::sharedDirector()->getWinSize();

		this->ignoreAnchorPointForPosition(true);
		this->setContentSize(tWinSize);
		this->setAnchorPoint(CCPointZero);
		this->setPosition(CCPointZero);

		return true;
	}
	return false;
}

void CCWidgetLayout::visit()
{
	if( m_bIsTouched )
	{
		m_fTouchedDuration += CCDirector::sharedDirector()->getDeltaTime();
	}
	CCNode::visit();
}

void CCWidgetLayout::onEnter()
{
	if( m_bTouchEnabled )
	{
		CCTouchDispatcher *pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
		pDispatcher->addTargetedDelegate(this, m_nTouchPriority, true);
	}
	CCNode::onEnter();
}

void CCWidgetLayout::onExit()
{
	if( m_bTouchEnabled )
	{
		CCTouchDispatcher *pDispatcher = CCDirector::sharedDirector()->getTouchDispatcher();
		pDispatcher->removeDelegate(this);
	}
	CCNode::onExit();
}

bool CCWidgetLayout::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_bTouchEnabled && m_bVisible && m_pChildren && m_pChildren->count() > 0 )
	{
		CCPoint touchPointInView = convertToNodeSpace(pTouch->getLocation());
		CCWidget *pTouchWidget = collisionWithWidget(touchPointInView);
		if( pTouchWidget )
		{
			m_pSelectedWidget = pTouchWidget;
			if( m_pSelectedWidget->executeTouchBegan(pTouch) != eWidgetTouchNone )
			{
                m_bIsTouched = true;
                m_fTouchedDuration = 0.0f;
				return true;
			}	
		}
	}
	return false;
}

void CCWidgetLayout::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchMovedAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->executeTouchMoved(pTouch, m_fTouchedDuration);
		}
	}
}

void CCWidgetLayout::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchEndedAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->executeTouchEnded(pTouch, m_fTouchedDuration);
		}
	}
	m_bIsTouched = false;
    m_fTouchedDuration = 0.0f;
	m_pSelectedWidget = NULL;
	m_pLongClickedWidget = NULL;
}

void CCWidgetLayout::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
	if( m_pSelectedWidget )
	{
		if( m_pSelectedWidget->isTouchInterrupted() )
		{
			if( m_pLongClickedWidget )
			{
				executeTouchCancelledAfterLongClick(m_pLongClickedWidget, pTouch, m_fTouchedDuration);
			}
		}
		else
		{
			m_pSelectedWidget->interruptTouchCascade(pTouch, m_fTouchedDuration);
		}
	}
	m_bIsTouched = false;
    m_fTouchedDuration = 0.0f;
	m_pSelectedWidget = NULL;
	m_pLongClickedWidget = NULL;
}

CCWidget* CCWidgetLayout::collisionWithWidget(const CCPoint &tPoint)
{
	if( m_pChildren && m_pChildren->count() > 0 )
	{
		CCObject* pObject = NULL;
		CCARRAY_FOREACH_REVERSE( m_pChildren, pObject )
		{
			CCNode* pNode = dynamic_cast<CCNode*>(pObject);
			CCWidget* pWidget = dynamic_cast<CCWidget*>(pObject);
			if( pWidget && pNode->isVisible() && pWidget->isEnabled() && pWidget->isTouchEnabled() )
			{
				if( pNode->boundingBox().containsPoint(tPoint) )
				{
					return pWidget;
				}
			}
		}
	}
	return NULL;
}

CCWidgetLayout* CCWidgetLayout::create()
{
	CCWidgetLayout *pRet = new CCWidgetLayout();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}


NS_CC_WIDGET_END