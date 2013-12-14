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
#include "Widget.h"
#include "WidgetLayout.h"
#if USING_LUA
#include "CCLuaEngine.h"
#endif

NS_CC_WIDGET_BEGIN


CWidget::CWidget()
: m_strId("")
, m_pThisObject(NULL)
, m_bEnabled(true)
, m_bTouchEnabled(true)
, m_pTouchBeganListener(NULL)
, m_pTouchMovedListener(NULL)
, m_pTouchEndedListener(NULL)
, m_pTouchCancelledListener(NULL)
, m_pTouchBeganHandler(NULL)
, m_pTouchMovedHandler(NULL)
, m_pTouchEndedHandler(NULL)
, m_pTouchCancelledHandler(NULL)
, m_bTouchInterrupt(false)
, m_nUserTag(kCCNodeTagInvalid)
#if USING_LUA
, m_nTouchBeganScriptHandler(0)
, m_nTouchMovedScriptHandler(0)
, m_nTouchEndedScriptHandler(0)
, m_nTouchCancelledScriptHandler(0)
#endif
{
	
}

CWidget::~CWidget()
{
#if USING_LUA
	removeOnTouchBeganScriptHandler();
	removeOnTouchMovedScriptHandler();
	removeOnTouchEndedScriptHandler();
	removeOnTouchCancelledScriptHandler();
#endif
}

void CWidget::setThisObject(CCObject* pThis)
{
	m_pThisObject = pThis;
}

int CWidget::getUserTag() const
{
	return m_nUserTag;
}

void CWidget::setUserTag(int nTag)
{
	m_nUserTag = nTag;
}

const char* CWidget::getId()
{
	return m_strId.c_str();
}

void CWidget::setId(const char* id)
{
	m_strId = id;
}

bool CWidget::isEnabled()
{
	return m_bEnabled;
}

void CWidget::setEnabled(bool bEnabled)
{
	m_bEnabled = bEnabled;
}

bool CWidget::isTouchEnabled()
{
	return m_bTouchEnabled;
}

void CWidget::setTouchEnabled(bool bTouchEnabled)
{
	m_bTouchEnabled = bTouchEnabled;
}

CWidgetTouchModel CWidget::executeTouchBeganHandler(CCTouch* pTouch)
{
	m_bTouchInterrupt = false;

    if( m_pTouchBeganListener && m_pTouchBeganHandler )
    {
		CWidgetTouchModel eUserTouchModel = (m_pTouchBeganListener->*m_pTouchBeganHandler)(m_pThisObject, pTouch);
		if( eUserTouchModel == eWidgetTouchNone )
		{
			return eWidgetTouchNone;
		}
		else
		{
			this->onTouchBegan(pTouch);
			return eUserTouchModel;
		}
    }
#if USING_LUA
	else if( m_nTouchBeganScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(m_pThisObject, "CCObject");
		pStack->pushCCObject(pTouch, "CCTouch");
		
		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nTouchBeganScriptHandler, 2, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return count = 0");

		CCDouble* pIntModel = (CCDouble*) pRetArray->objectAtIndex(0);
		CWidgetTouchModel eUserTouchModel = (CWidgetTouchModel) ( (int)pIntModel->getValue() );
		delete pRetArray;
		pStack->clean();

		if( eUserTouchModel == eWidgetTouchNone )
		{
			return eWidgetTouchNone;
		}
		else
		{
			this->onTouchBegan(pTouch);
			return eUserTouchModel;
		}
	}
#endif
    return this->onTouchBegan(pTouch);
}

void CWidget::executeTouchMovedHandler(CCTouch* pTouch, float fDuration)
{
    if( m_pTouchMovedListener && m_pTouchMovedHandler )
    {
        if( !(m_pTouchMovedListener->*m_pTouchMovedHandler)(m_pThisObject, pTouch, fDuration) )
        {
            return;
        }
    }
#if USING_LUA
	else if( m_nTouchMovedScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(m_pThisObject, "CCObject");
		pStack->pushCCObject(pTouch, "CCTouch");
		pStack->pushFloat(fDuration);
		
		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nTouchMovedScriptHandler, 3, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return count = 0");

		CCBool* pBool = (CCBool*) pRetArray->objectAtIndex(0);
		bool bContinue = pBool->getValue();
		delete pRetArray;
		pStack->clean();

		if(!bContinue)
		{
			return;
		}
	}
#endif
	this->onTouchMoved(pTouch, fDuration);
    return;
}

void CWidget::executeTouchEndedHandler(CCTouch* pTouch, float fDuration)
{
    if( m_pTouchEndedListener && m_pTouchEndedHandler )
    {
        if( !(m_pTouchEndedListener->*m_pTouchEndedHandler)(m_pThisObject, pTouch, fDuration) )
        {
            return;
        }
    }
#if USING_LUA
	else if( m_nTouchEndedScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(m_pThisObject, "CCObject");
		pStack->pushCCObject(pTouch, "CCTouch");
		pStack->pushFloat(fDuration);
		
		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nTouchEndedScriptHandler, 3, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return count = 0");

		CCBool* pBool = (CCBool*) pRetArray->objectAtIndex(0);
		bool bContinue = pBool->getValue();
		delete pRetArray;
		pStack->clean();

		if(!bContinue)
		{
			return;
		}
	}
#endif
	this->onTouchEnded(pTouch, fDuration);
    return;
}

void CWidget::executeTouchCancelledHandler(CCTouch* pTouch, float fDuration)
{
    if( m_pTouchCancelledListener && m_pTouchCancelledHandler )
    {
        if( !(m_pTouchCancelledListener->*m_pTouchCancelledHandler)(m_pThisObject, pTouch, fDuration) )
        {
            return;
        }
    }
#if USING_LUA
	else if( m_nTouchCancelledScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(m_pThisObject, "CCObject");
		pStack->pushCCObject(pTouch, "CCTouch");
		pStack->pushFloat(fDuration);
		
		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nTouchCancelledScriptHandler, 3, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return count = 0");

		CCBool* pBool = (CCBool*) pRetArray->objectAtIndex(0);
		bool bContinue = pBool->getValue();
		delete pRetArray;
		pStack->clean();

		if(!bContinue)
		{
			return;
		}
	}
#endif
	this->onTouchCancelled(pTouch, fDuration);
    return;
}

void CWidget::setOnTouchBeganListener(CCObject* pListener, SEL_TouchBeganHandler pHandler)
{
	m_pTouchBeganListener = pListener;
    m_pTouchBeganHandler = pHandler;
}

void CWidget::setOnTouchMovedListener(CCObject* pListener, SEL_TouchEventHandler pHandler)
{
	m_pTouchMovedListener = pListener;
    m_pTouchMovedHandler = pHandler;
}

void CWidget::setOnTouchEndedListener(CCObject* pListener, SEL_TouchEventHandler pHandler)
{
	m_pTouchEndedListener = pListener;
    m_pTouchEndedHandler = pHandler;
}

void CWidget::setOnTouchCancelledListener(CCObject* pListener, SEL_TouchEventHandler pHandler)
{
	m_pTouchCancelledListener = pListener;
    m_pTouchCancelledHandler = pHandler;
}

#if USING_LUA
void CWidget::setOnTouchBeganScriptHandler(int nHandler)
{
	removeOnTouchBeganScriptHandler();
	m_nTouchBeganScriptHandler = nHandler;
}

void CWidget::setOnTouchMovedScriptHandler(int nHandler)
{
	removeOnTouchMovedScriptHandler();
	m_nTouchMovedScriptHandler = nHandler;
}

void CWidget::setOnTouchEndedScriptHandler(int nHandler)
{
	removeOnTouchEndedScriptHandler();
	m_nTouchEndedScriptHandler = nHandler;
}

void CWidget::setOnTouchCancelledScriptHandler(int nHandler)
{
	removeOnTouchCancelledScriptHandler();
	m_nTouchCancelledScriptHandler = nHandler;
}

void CWidget::removeOnTouchBeganScriptHandler()
{
	if( m_nTouchBeganScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nTouchBeganScriptHandler);
		m_nTouchBeganScriptHandler = 0;
	}
}

void CWidget::removeOnTouchMovedScriptHandler()
{
	if( m_nTouchMovedScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nTouchMovedScriptHandler);
		m_nTouchMovedScriptHandler = 0;
	}
}

void CWidget::removeOnTouchEndedScriptHandler()
{
	if( m_nTouchEndedScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nTouchEndedScriptHandler);
		m_nTouchEndedScriptHandler = 0;
	}
}

void CWidget::removeOnTouchCancelledScriptHandler()
{
	if( m_nTouchCancelledScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nTouchCancelledScriptHandler);
		m_nTouchCancelledScriptHandler = 0;
	}
}
#endif

void CWidget::interruptTouch(CCTouch* pTouch, float fDuration)
{
    if( !m_bTouchInterrupt )
    {
        m_bTouchInterrupt = true;
        executeTouchCancelledHandler(pTouch, fDuration);
    }
}

void CWidget::interruptTouchCascade(CCTouch* pTouch, float fDuration)
{
	for(CCNode* pNode = (CCNode*)m_pThisObject; pNode != NULL; pNode = pNode->getParent())
	{
		CWidget* pWidgetParent = dynamic_cast<CWidget*>(pNode);
		if( pWidgetParent != NULL )
		{
			pWidgetParent->interruptTouch(pTouch, fDuration);
		}
	}
}

void CWidget::setLongClickTouchHandlerWidget(CCNode* pWidget, int id)
{
	for(CCNode* pNode = (CCNode*)m_pThisObject; pNode != NULL; pNode = pNode->getParent())
	{
		CWidgetLayout* pWidgetLayoutParent = dynamic_cast<CWidgetLayout*>(pNode);
		if( pWidgetLayoutParent != NULL )
		{
			pWidgetLayoutParent->setLongClickTouchHandlerWidget(pWidget, id);
			return;
		}
	}
}

bool CWidget::isTouchInterrupted()
{
    return m_bTouchInterrupt;
}

NS_CC_WIDGET_END
