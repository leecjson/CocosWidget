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
#include "TextRich.h"
#include "WitlsMacros.h"
#include "Label.h"
using namespace std;

NS_CC_WIDGET_BEGIN

CTextRich::CTextRich()
: m_strFontName("")
, m_fFontSize(30.0f)
, m_uMaxLineLength(0)
, m_uCharCursor(0)
, m_fVerticalSpacing(0.0f)
{
	setThisObject(this);
	m_pRichTextAtlas = new CTextRichAtlas();
}

CTextRich::~CTextRich()
{
	removeAllElements();
	CC_SAFE_DELETE(m_pRichTextAtlas);
}

CTextRich* CTextRich::create()
{
	CTextRich* pRet = new CTextRich();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CTextRich::init()
{
	setCascadeColorEnabled(true);
	setCascadeOpacityEnabled(true);

	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);

	return true;
}

void CTextRich::insertElement(const char* pString
							  , const char* pFontName
							  , float fFontSize
							  , const ccColor3B& tColor
							  , const char* pDescription)
{
	CCAssert(pString && strlen(pString), "should not null");

	if( m_uMaxLineLength != 0 )
	{
		if( m_uCharCursor == m_uMaxLineLength )
		{
			m_uCharCursor = 0;
			pushAtlasLine();
		}

		string str_buffer;
		char* pstr = const_cast<char*>(pString);

		while( *pstr != 0 )
		{
			int nCharLength;

			int nlen = str_utf8_char_len(*pstr);
			if( nlen > 1 )
			{
				nCharLength = 2; //default 2 (maybe a word of chinese, can be else)
			}
			else
			{
				nCharLength = 1; //English char
			}
			
			if( m_uCharCursor + nCharLength > m_uMaxLineLength )
			{
				_ccTEXTRICHELEMENT tElement;
				makeAtlasLabelElement(tElement, str_buffer.c_str(), pFontName, fFontSize, tColor, pDescription);

				pushAtlasElementAtLast(tElement);
				pushAtlasLine();

				str_buffer.clear();
				str_buffer.append(pstr,(unsigned int)nlen);
				m_uCharCursor = 0;
			}
			else
			{
				str_buffer.append(pstr,(unsigned int)nlen);
			}

			m_uCharCursor += nCharLength;
			pstr += nlen;
		}

		if( str_buffer.empty() )
			return;

		_ccTEXTRICHELEMENT tElement;
		makeAtlasLabelElement(tElement, str_buffer.c_str(), pFontName, fFontSize, tColor, pDescription);

		pushAtlasElementAtLast(tElement);
	}
	else
	{
		_ccTEXTRICHELEMENT tElement;
		makeAtlasLabelElement(tElement, pString, pFontName, fFontSize, tColor, pDescription);

		pushAtlasElementAtLast(tElement);
	}
}

void CTextRich::insertElement(CCNode* pNode
							  , unsigned int uLen
							  , const char* pDescription)
{
	CCAssert(pNode, "should not null");

	if( m_uMaxLineLength != 0 )
	{
		CCAssert(uLen <= m_uMaxLineLength, "len should be less than m_uMaxLineLength");

		m_uCharCursor += uLen;

		if( m_uCharCursor > m_uMaxLineLength )
		{
			pushAtlasLine();
			m_uCharCursor = 0;
		}

		_ccTEXTRICHELEMENT tElement;
		tElement.eATLASTYPE = ccATLASTYPESPRITE;
		tElement.pATLASITEM = pNode;
		tElement.strDESCRIPTION = pDescription ? pDescription : "";
		pNode->setAnchorPoint(CCPointZero);

		pushAtlasElementAtLast(tElement);
	}
	else
	{
		_ccTEXTRICHELEMENT tElement;
		tElement.eATLASTYPE = ccATLASTYPESPRITE;
		tElement.pATLASITEM = pNode;
		tElement.strDESCRIPTION = pDescription ? pDescription : "";
		pNode->setAnchorPoint(CCPointZero);

		pushAtlasElementAtLast(tElement);
	}
}

void CTextRich::reloadData()
{
	CCAssert(!m_pRichTextAtlas->empty(), "reload data was empty");
	removeAllChildrenWithCleanup(true);
	m_vRichTextAtlasDescriptions.clear();
	m_uCharCursor = 0;

	CCSize tRealContentSize = CCSizeZero;

	int nRowBegin = m_pRichTextAtlas->size() - 1;
	unsigned int uRowEnd = 0;
	unsigned int uColumn = 0;
	unsigned int uColumnSize = 0;
	
	for(; nRowBegin >= (int)uRowEnd; --nRowBegin )
	{
		CTextRichAtlasLine* vAtlasLine = m_pRichTextAtlas->at(nRowBegin);
		uColumnSize = vAtlasLine->size();
		uColumn = 0;

		float fWidgetOfLine = 0.0f;
		float fMaxHeightOfLine = 0.0f;

		for(; uColumn < uColumnSize; ++uColumn )
		{
			_ccTEXTRICHELEMENT& tElement = vAtlasLine->at(uColumn);

			tElement.pATLASITEM->setPosition(CCPoint(fWidgetOfLine, tRealContentSize.height));
			addChild(tElement.pATLASITEM);
#if 0
			CCLayerColor* pColor = CCLayerColor::create(ccc4(255, 0,0, 129));
			pColor->setPosition(CCPoint(fWidgetOfLine, tRealContentSize.height) + ccp(1, 1));
			pColor->setContentSize(tElement.pATLASITEM->getContentSize() - CCSize(2,2));
			addChild(pColor);
#endif

			_ccTEXTRICHELEMENTRECT tDES;
			tDES.tRECT = tElement.pATLASITEM->boundingBox();
			tDES.strDESCRIPTION = tElement.strDESCRIPTION;
			m_vRichTextAtlasDescriptions.push_back(tDES);

			fWidgetOfLine += tElement.pATLASITEM->getContentSize().width;
			fMaxHeightOfLine = MAX(fMaxHeightOfLine, tElement.pATLASITEM->getContentSize().height);
		}

		tRealContentSize.width = MAX(tRealContentSize.width, fWidgetOfLine);
		tRealContentSize.height += fMaxHeightOfLine + m_fVerticalSpacing;

		delete vAtlasLine;
	}

	m_pRichTextAtlas->clear();

	tRealContentSize.height -= m_fVerticalSpacing;
	setContentSize(tRealContentSize);
}

void CTextRich::removeAllElements()
{
	CTextRichAtlas::iterator itr = m_pRichTextAtlas->begin();
	CTextRichAtlas::iterator end = m_pRichTextAtlas->end();

	for(; itr != end; ++itr )
	{
		delete (*itr);
	}

	m_pRichTextAtlas->clear();
	m_vRichTextAtlasDescriptions.clear();
	m_uCharCursor = 0;

	removeAllChildrenWithCleanup(true);
}

void CTextRich::makeAtlasLabelElement(_ccTEXTRICHELEMENT& tElement
									  , const char* str
									  , const char* fontname
									  , float size
									  , const ccColor3B& color
									  , const char* pDescription)
{
	CCLabelTTF* pLabel = CCLabelTTF::create(str, 
		fontname && strlen(fontname) ? fontname : m_strFontName.c_str(),
		(int) size == 0 ? m_fFontSize : size);

	pLabel->setAnchorPoint(CCPointZero);
	pLabel->setColor(color);

	tElement.strDESCRIPTION = pDescription ? pDescription : "";
	tElement.eATLASTYPE = ccATLASTYPELABEL;
	tElement.pATLASITEM = pLabel;
}

void CTextRich::pushAtlasLine()
{
	m_pRichTextAtlas->push_back(new CTextRichAtlasLine());
}

void CTextRich::pushAtlasElementAtLast(const _ccTEXTRICHELEMENT& tAtlasElement)
{
	if( m_pRichTextAtlas->empty() )
	{
		pushAtlasLine();
	}

	m_pRichTextAtlas->back()->push_back(tAtlasElement);
}

const char* CTextRich::getFontName()
{
	return m_strFontName.c_str();
}

void CTextRich::setFontName(const char* pFontName)
{
	m_strFontName = pFontName;
}

float CTextRich::getFontSize() const
{
	return m_fFontSize;
}

void CTextRich::setFontSize(float fFontSize)
{
	m_fFontSize = fFontSize;
}

unsigned int CTextRich::getMaxLineLength() const
{
	return m_uMaxLineLength;
}

float CTextRich::getVerticalSpacing() const
{
	return m_fVerticalSpacing;
}

void CTextRich::setVerticalSpacing(float fSpacing)
{
	m_fVerticalSpacing = fSpacing;
}

void CTextRich::setMaxLineLength(unsigned int uLen)
{
	CCAssert(uLen == 0 || uLen >= 2, "len should bigger than 2");
	m_uMaxLineLength = uLen;
}

CWidgetTouchModel CTextRich::onTouchBegan(CCTouch* pTouch)
{
	return eWidgetTouchTransient;
}

void CTextRich::onTouchMoved(CCTouch* pTouch, float fDuration)
{

}

void CTextRich::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	CCPoint tPoint = m_pParent->convertTouchToNodeSpace(pTouch);
	if( boundingBox().containsPoint(tPoint) )
	{
		CCPoint tInsidePoint = convertTouchToNodeSpace(pTouch);
		vector<_ccTEXTRICHELEMENTRECT>::iterator itr = m_vRichTextAtlasDescriptions.begin();
		vector<_ccTEXTRICHELEMENTRECT>::iterator end = m_vRichTextAtlasDescriptions.end();

		for(; itr != end; ++itr )
		{
			if( itr->tRECT.containsPoint(tInsidePoint) )
			{
				executeTextRichClickHandler(this, 
					itr->strDESCRIPTION.empty() ? NULL : itr->strDESCRIPTION.c_str());
				return;
			}
		}
		executeTextRichClickHandler(this, NULL);
	}
}

void CTextRich::onTouchCancelled(CCTouch* pTouch, float fDuration)
{

}

NS_CC_WIDGET_END