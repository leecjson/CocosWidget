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
#include "WidgetProtocol.h"
#if USING_LUA
#include "CCLuaEngine.h"
#endif

NS_CC_WIDGET_BEGIN



CDataSourceAdapterProtocol::CDataSourceAdapterProtocol()
: m_pDataSourceAdapterListener(NULL)
, m_pDataSourceAdapterHandler(NULL)
#if USING_LUA
, m_nDataSourceAdapterScriptHandler(0)
#endif
{
	
}

CDataSourceAdapterProtocol::~CDataSourceAdapterProtocol()
{
#if USING_LUA
	removeDataSourceAdapterScriptHandler();
#endif
}

void CDataSourceAdapterProtocol::setDataSourceAdapter(CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler)
{
	m_pDataSourceAdapterListener = pListener;
	m_pDataSourceAdapterHandler = pHandler;
}


CCObject* CDataSourceAdapterProtocol::executeDataSourceAdapterHandler(CCObject* pConvertCell, unsigned int uIdx)
{
	if( m_pDataSourceAdapterListener && m_pDataSourceAdapterHandler )
	{
		return (m_pDataSourceAdapterListener->*m_pDataSourceAdapterHandler)(pConvertCell, uIdx);
	}
#if USING_LUA
	else if( m_nDataSourceAdapterScriptHandler != 0 )
	{
		return executeDataSourceAdapterScriptHandler(pConvertCell, uIdx);
	}
#endif
	return NULL;
}

#if USING_LUA
CCObject* CDataSourceAdapterProtocol::executeDataSourceAdapterScriptHandler(CCObject* pConvertCell, unsigned int uIdx)
{
	if( m_nDataSourceAdapterScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		if( pConvertCell )
		{
			pStack->pushCCObject(pConvertCell, "CCObject");
		}
		else
		{
			pStack->pushNil();
		}
		pStack->pushInt(uIdx);

		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nDataSourceAdapterScriptHandler, 2, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return num = 0");

		CCObject* pReturnObject = pRetArray->objectAtIndex(0);
		delete pRetArray;
		pStack->clean();

		return pReturnObject;
	}
	return NULL;
}

void CDataSourceAdapterProtocol::setDataSourceAdapterScriptHandler(int nHandler)
{
	removeDataSourceAdapterScriptHandler();
	m_nDataSourceAdapterScriptHandler = nHandler;
}

void CDataSourceAdapterProtocol::removeDataSourceAdapterScriptHandler()
{
	if( m_nDataSourceAdapterScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nDataSourceAdapterScriptHandler);
		m_nDataSourceAdapterScriptHandler = 0;
	}
}
#endif


CTextRichClickableProtocol::CTextRichClickableProtocol()
: m_pRichTextClickListener(NULL)
, m_pRichTextClickHandler(NULL)
#if USING_LUA
, m_nRichTextClickScriptHandler(0)
#endif
{

}

CTextRichClickableProtocol::~CTextRichClickableProtocol()
{
#if USING_LUA
	removeOnTextRichClickScriptHandler();
#endif
}

void CTextRichClickableProtocol::setOnTextRichClickListener(CCObject* pListener, SEL_TextRichClickHandler pHandler)
{
	m_pRichTextClickListener = pListener;
	m_pRichTextClickHandler = pHandler;
}

void CTextRichClickableProtocol::executeTextRichClickHandler(CCObject* pSender, const char* pDescription)
{
	if( m_pRichTextClickListener && m_pRichTextClickHandler )
	{
		(m_pRichTextClickListener->*m_pRichTextClickHandler)(pSender, pDescription);
	}
#if USING_LUA
	else if( m_nRichTextClickScriptHandler != 0 )
	{
		executeTextRichScriptHandler(pSender, pDescription);
	}
#endif
}

#if USING_LUA
void CTextRichClickableProtocol::executeTextRichScriptHandler(CCObject* pSender, const char* pDescription)
{
	if( m_nRichTextClickScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");

		if( pDescription )
		{
			pStack->pushString(pDescription);
		}
		else
		{
			pStack->pushNil();
		}

		pStack->executeFunctionByHandler(m_nRichTextClickScriptHandler, 2);
		pStack->clean();
	}
}

void CTextRichClickableProtocol::setOnTextRichClickScriptHandler(int nHandler)
{
	removeOnTextRichClickScriptHandler();
	m_nRichTextClickScriptHandler = nHandler;
}

void CTextRichClickableProtocol::removeOnTextRichClickScriptHandler()
{
	if( m_nRichTextClickScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nRichTextClickScriptHandler);
		m_nRichTextClickScriptHandler = 0;
	}
}
#endif


CLayoutableProtocol::CLayoutableProtocol()
: m_pSelectedWidget(NULL)
, m_eSelectedWidgetTouchModel(eWidgetTouchNone)
{

}

CLayoutableProtocol::~CLayoutableProtocol()
{
	
}

CPageChangeableProtocol::CPageChangeableProtocol()
: m_pPageChangedListener(NULL)
, m_pPageChangedHandler(NULL)
, m_nPageIndex(0)
#if USING_LUA
, m_nPageChangedScriptHandler(0)
#endif
{

}

CPageChangeableProtocol::~CPageChangeableProtocol()
{
#if USING_LUA
	removeOnPageChangedScriptHandler();
#endif
}

void CPageChangeableProtocol::setOnPageChangedListener(CCObject* pListener, SEL_PageChangedHandler pHandler)
{
	m_pPageChangedListener = pListener;
	m_pPageChangedHandler = pHandler;
}

void CPageChangeableProtocol::executePageChangedHandler(CCObject* pSender, unsigned int uPageIdx)
{
	if( m_pPageChangedListener && m_pPageChangedHandler )
	{
		(m_pPageChangedListener->*m_pPageChangedHandler)(pSender, uPageIdx);
	}
#if USING_LUA
	else if( m_nPageChangedScriptHandler != 0 )
	{
		executePageChangedScriptHandler(pSender, uPageIdx);
	}
#endif
}

#if USING_LUA
void CPageChangeableProtocol::executePageChangedScriptHandler(CCObject* pSender, unsigned int uPageIdx)
{
	if( m_nPageChangedScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");
		pStack->pushInt(uPageIdx);

		pStack->executeFunctionByHandler(m_nPageChangedScriptHandler, 2);
		pStack->clean();
	}
}

void CPageChangeableProtocol::setOnPageChangedScriptHandler(int nHandler)
{
	removeOnPageChangedScriptHandler();
	m_nPageChangedScriptHandler = nHandler;
}

void CPageChangeableProtocol::removeOnPageChangedScriptHandler()
{
	if( m_nPageChangedScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nPageChangedScriptHandler);
		m_nPageChangedScriptHandler = 0;
	}
}
#endif



CScrollableProtocol::CScrollableProtocol()
: m_pScrollingListener(NULL)
, m_pScrollingHandler(NULL)
#if USING_LUA
, m_nScrollingScriptHandler(0)
#endif
{
	
}

CScrollableProtocol::~CScrollableProtocol()
{
#if USING_LUA
	removeOnScrollingScriptHandler();
#endif
}

void CScrollableProtocol::setOnScrollingListener(CCObject* pListener, SEL_ScrollingHandler pHandler)
{
	m_pScrollingListener = pListener;
	m_pScrollingHandler = pHandler;
}

void CScrollableProtocol::executeScrollingHandler(CCObject* pSender)
{
	if( m_pScrollingListener && m_pScrollingHandler )
	{
		(m_pScrollingListener->*m_pScrollingHandler)(pSender);
	}
#if USING_LUA
	else if( m_nScrollingScriptHandler != 0 )
	{
		executeScrollingScriptHandler(pSender);
	}
#endif
}

#if USING_LUA
void CScrollableProtocol::executeScrollingScriptHandler(CCObject* pSender)
{
	if( m_nScrollingScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");

		pStack->executeFunctionByHandler(m_nScrollingScriptHandler, 1);
		pStack->clean();
	}
}

void CScrollableProtocol::setOnScrollingScriptHandler(int nHandler)
{
	removeOnScrollingScriptHandler();
	m_nScrollingScriptHandler = nHandler;
}

void CScrollableProtocol::removeOnScrollingScriptHandler()
{
	if( m_nScrollingScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nScrollingScriptHandler);
		m_nScrollingScriptHandler = 0;
	}
}
#endif


CProgressEndedProtocol::CProgressEndedProtocol()
: m_pProgressEndedListener(NULL)
, m_pProgressEndedHandler(NULL)
#if USING_LUA
, m_nProgressEndedScriptHandler(0)
#endif
{
	
}

CProgressEndedProtocol::~CProgressEndedProtocol()
{
#if USING_LUA
	removeOnProgressEndedScriptHandler();
#endif
}

void CProgressEndedProtocol::setOnProgressEndedListener(CCObject* pListener, SEL_ProgressEndedHandler pHandler)
{
	m_pProgressEndedListener = pListener;
	m_pProgressEndedHandler = pHandler;
}

void CProgressEndedProtocol::executeProgressEndedHandler(CCObject* pSender)
{
	if( m_pProgressEndedListener && m_pProgressEndedHandler )
	{
		(m_pProgressEndedListener->*m_pProgressEndedHandler)(pSender);
	}
#if USING_LUA
	else if( m_nProgressEndedScriptHandler != 0 )
	{
		executeProgressEndedScriptHandler(pSender);
	}
#endif
}

#if USING_LUA
void CProgressEndedProtocol::executeProgressEndedScriptHandler(CCObject* pSender)
{
	if( m_nProgressEndedScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");

		pStack->executeFunctionByHandler(m_nProgressEndedScriptHandler, 1);
		pStack->clean();
	}
}

void CProgressEndedProtocol::setOnProgressEndedScriptHandler(int nHandler)
{
	removeOnProgressEndedScriptHandler();
	m_nProgressEndedScriptHandler = nHandler;
}

void CProgressEndedProtocol::removeOnProgressEndedScriptHandler()
{
	if( m_nProgressEndedScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nProgressEndedScriptHandler);
		m_nProgressEndedScriptHandler = 0;
	}
}
#endif




CValueChangeableProtocol::CValueChangeableProtocol()
: m_pValueChangedListener(NULL)
, m_pValueChangedHandler(NULL)
, m_nValue(0)
#if USING_LUA
, m_nValueChangedScriptHandler(0)
#endif
{
	
}

CValueChangeableProtocol::~CValueChangeableProtocol()
{
#if USING_LUA
	removeOnValueChangedScriptHandler();
#endif
}

void CValueChangeableProtocol::setOnValueChangedListener(CCObject* pListener, SEL_ValueChangedHandler pHandler)
{
	m_pValueChangedListener = pListener;
	m_pValueChangedHandler = pHandler;
}

void CValueChangeableProtocol::executeValueChangedHandler(CCObject* pSender, int nValue)
{
	if( m_pValueChangedListener && m_pValueChangedHandler )
	{
		(m_pValueChangedListener->*m_pValueChangedHandler)(pSender, nValue);
	}
#if USING_LUA
	else if( m_nValueChangedScriptHandler != 0 )
	{
		executeValueChangedScriptHandler(pSender, nValue);
	}
#endif
}

#if USING_LUA
void CValueChangeableProtocol::executeValueChangedScriptHandler(CCObject* pSender, int nValue)
{
	if( m_nValueChangedScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");
		pStack->pushInt(nValue);

		pStack->executeFunctionByHandler(m_nValueChangedScriptHandler, 2);
		pStack->clean();
	}
}

void CValueChangeableProtocol::setOnValueChangedScriptHandler(int nHandler)
{
	removeOnValueChangedScriptHandler();
	m_nValueChangedScriptHandler = nHandler;
}

void CValueChangeableProtocol::removeOnValueChangedScriptHandler()
{
	if( m_nValueChangedScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nValueChangedScriptHandler);
		m_nValueChangedScriptHandler = 0;
	}
}
#endif



CClickableProtocol::CClickableProtocol()
: m_pClickHandler(NULL)
, m_pClickListener(NULL)
#if USING_LUA
, m_nClickScriptHandler(0)
#endif
{
	
}

CClickableProtocol::~CClickableProtocol()
{
#if USING_LUA
	removeOnClickScriptHandler();
#endif
}

void CClickableProtocol::setOnClickListener(CCObject* pListener, SEL_ClickHandler pHandler)
{
	m_pClickListener = pListener;
	m_pClickHandler = pHandler;
}

void CClickableProtocol::executeClickHandler(CCObject* pSender)
{
	if( m_pClickListener && m_pClickHandler )
	{
		(m_pClickListener->*m_pClickHandler)(pSender);
	}
#if USING_LUA
	else if( m_nClickScriptHandler != 0 )
	{
		executeClickScriptHandler(pSender);
	}
#endif
}

#if USING_LUA
void CClickableProtocol::executeClickScriptHandler(CCObject* pSender)
{
	if( m_nClickScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");

		pStack->executeFunctionByHandler(m_nClickScriptHandler, 1);
		pStack->clean();
	}
}

void CClickableProtocol::setOnClickScriptHandler(int nHandler)
{
	removeOnClickScriptHandler();
	m_nClickScriptHandler = nHandler;
}

void CClickableProtocol::removeOnClickScriptHandler()
{
	if( m_nClickScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nClickScriptHandler);
		m_nClickScriptHandler = 0;
	}
}
#endif


CLongClickableProtocol::CLongClickableProtocol()
: m_pLongClickListener(NULL)
, m_pLongClickHandler(NULL)
, m_bLongClickedUpdate(false)
, m_fLongClickLastTouchDuration(0.0f)
, m_pLongClickLastTouch(NULL)
, m_bLongClickEnabled(false)
, m_fLongClickTimeCounter(0.0f)
#if USING_LUA
, m_nLongClickScriptHandler(0)
#endif
{

}

CLongClickableProtocol::~CLongClickableProtocol()
{
#if USING_LUA
	removeOnLongClickScriptHandler();
#endif
}

void CLongClickableProtocol::setOnLongClickListener(CCObject* pListener, SEL_LongClickHandler pHandler)
{
	m_bLongClickEnabled  = pListener && pHandler;
	m_pLongClickListener = pListener;
	m_pLongClickHandler  = pHandler;
}

bool CLongClickableProtocol::executeLongClickHandler(CCObject* pSender, CCTouch* pTouch)
{
	if( m_pLongClickListener && m_pLongClickHandler )
	{
		return (m_pLongClickListener->*m_pLongClickHandler)(pSender, pTouch);
	}
#if USING_LUA
	else if( m_nLongClickScriptHandler != 0 )
	{
		return executeLongClickScriptHandler(pSender, pTouch);
	}
#endif
	return false;
}

#if USING_LUA
bool CLongClickableProtocol::executeLongClickScriptHandler(CCObject* pSender, CCTouch* pTouch)
{
	if( m_nLongClickScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");
		pStack->pushCCObject(pTouch, "CCTouch");

		CCArray* pRetArray = new CCArray();
		pRetArray->initWithCapacity(1);

		int nRet = pStack->executeFunctionReturnArray(m_nLongClickScriptHandler, 2, 1, pRetArray);
		CCAssert(pRetArray->count() > 0, "return count = 0");

		CCBool* pBool = (CCBool*) pRetArray->objectAtIndex(0);
		bool bReturnBool = pBool->getValue();
		pStack->clean();
		return bReturnBool;
	}
	return false;
}

void CLongClickableProtocol::setOnLongClickScriptHandler(int nHandler)
{
	removeOnLongClickScriptHandler();
	m_nLongClickScriptHandler = nHandler;
	m_bLongClickEnabled = true;
}

void CLongClickableProtocol::removeOnLongClickScriptHandler()
{
	if( m_nLongClickScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nLongClickScriptHandler);
		m_nLongClickScriptHandler = 0;
		m_bLongClickEnabled = false;
	}
}
#endif




CCheckableProtocol::CCheckableProtocol()
: m_bChecked(false)
, m_pCheckListener(NULL)
, m_pCheckHandler(NULL)
, m_nExclusion(CC_WIDGET_NONE_EXCLUSION)
#if USING_LUA
, m_nCheckScriptHandler(0)
#endif
{

}

CCheckableProtocol::~CCheckableProtocol()
{
#if USING_LUA
	removeCheckScriptHandler();
#endif
}

bool CCheckableProtocol::isChecked() const
{
	return m_bChecked;
}

void CCheckableProtocol::setChecked(bool bChecked)
{
	m_bChecked = bChecked;
}

void CCheckableProtocol::setOnCheckListener(CCObject* pListener, SEL_CheckHandler pHandler)
{
	m_pCheckListener = pListener;
	m_pCheckHandler = pHandler;
}

void CCheckableProtocol::setExclusion(int nExclusion)
{
	m_nExclusion = nExclusion;
}

int CCheckableProtocol::getExclusion() const
{
	return m_nExclusion;
}

void CCheckableProtocol::executeCheckHandler(CCObject* pSender, bool bChecked)
{
	if( m_pCheckListener && m_pCheckHandler  )
	{
		(m_pCheckListener->*m_pCheckHandler)(pSender, bChecked);
	}
#if USING_LUA
	else if( m_nCheckScriptHandler != 0 )
	{
		executeCheckScriptHandler(pSender, bChecked);
	}
#endif
}

void CCheckableProtocol::setUnCheckedForOtherWidgetsByExclusion(CCNode* pParent)
{
	if( pParent && m_nExclusion != CC_WIDGET_NONE_EXCLUSION )
	{
		CCArray* pChildren = pParent->getChildren();
		CCObject* pChildObject = NULL;
		CCARRAY_FOREACH(pChildren, pChildObject)
		{
			CCheckableProtocol* pCheckableWidget = dynamic_cast<CCheckableProtocol*>(pChildObject);
			if( pCheckableWidget && pCheckableWidget != this )
			{
				if( pCheckableWidget->getExclusion() == m_nExclusion )
				{
					pCheckableWidget->setChecked(false);
				}
			}
		}
	}
}

#if USING_LUA
void CCheckableProtocol::executeCheckScriptHandler(CCObject* pSender, bool bChecked)
{
	if( m_nCheckScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");
		pStack->pushBoolean(bChecked);

		pStack->executeFunctionByHandler(m_nCheckScriptHandler, 2);
		pStack->clean();
	}
}

void CCheckableProtocol::setOnCheckScriptHandler(int nHandler)
{
	removeCheckScriptHandler();
	m_nCheckScriptHandler = nHandler;
}

void CCheckableProtocol::removeCheckScriptHandler()
{
	if( m_nCheckScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nCheckScriptHandler);
		m_nCheckScriptHandler = 0;
	}
}
#endif



CControlableProtocol::CControlableProtocol()
: m_pControlListener(NULL)
, m_pControlHandler(NULL)
#if USING_LUA
, m_nControlScriptHandler(0)
#endif
{
	
}

CControlableProtocol::~CControlableProtocol()
{
#if USING_LUA
	removeOnControlScriptHandler();
#endif
}

void CControlableProtocol::setOnControlListener(CCObject* pListener, SEL_ControlHandler pHandler)
{
	m_pControlListener = pListener;
	m_pControlHandler = pHandler;
}

void CControlableProtocol::executeControlHandler(CCObject* pSender, float cx, float cy)
{
	if( m_pControlListener && m_pControlHandler )
	{
		(m_pControlListener->*m_pControlHandler)(pSender, cx, cy);
	}
#if USING_LUA
	else if( m_nControlScriptHandler != 0 )
	{
		executeControlScriptHandler(pSender, cx, cy);
	}
#endif
}

#if USING_LUA
void CControlableProtocol::executeControlScriptHandler(CCObject* pSender, float cx, float cy)
{
	if( m_nControlScriptHandler != 0 )
	{
		CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
		CCLuaStack* pStack = pEngine->getLuaStack();

		pStack->pushCCObject(pSender, "CCObject");
		pStack->pushFloat(cx);
		pStack->pushFloat(cy);

		pStack->executeFunctionByHandler(m_nControlScriptHandler, 3);
		pStack->clean();
	}
}

void CControlableProtocol::setOnControlScriptHandler(int nHandler)
{
	removeOnControlScriptHandler();
	m_nControlScriptHandler = nHandler;
}

void CControlableProtocol::removeOnControlScriptHandler()
{
	if( m_nControlScriptHandler != 0 )
	{
		CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nControlScriptHandler);
		m_nControlScriptHandler = 0;
	}
}
#endif


NS_CC_WIDGET_END