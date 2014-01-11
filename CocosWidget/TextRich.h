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
#ifndef __CCWIDGET_TEXTRICH_H__
#define __CCWIDGET_TEXTRICH_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "WidgetProtocol.h"
#include "Widget.h"
#include "Layout.h"
#include "ImageView.h"
#include <vector>

NS_CC_WIDGET_BEGIN

enum _ccATLASTYPE
{
	ccATLASTYPELABEL,
	ccATLASTYPESPRITE
};

struct _ccTEXTRICHELEMENT
{
	_ccATLASTYPE eATLASTYPE;
	std::string strDESCRIPTION;
	CCNode* pATLASITEM;
};

struct _ccTEXTRICHELEMENTRECT
{
	CCRect tRECT;
	std::string strDESCRIPTION;
};

typedef std::vector<_ccTEXTRICHELEMENT> CTextRichAtlasLine;
typedef std::vector<CTextRichAtlasLine*> CTextRichAtlas;

/**
 * class  : CTextRich
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CTextRich
: public CCNodeRGBA
, public CWidget
, public CTextRichClickableProtocol
{
public:
	CTextRich();
	virtual ~CTextRich();
	virtual bool init();
	static CTextRich* create();

	const char* getFontName();
	void setFontName(const char* pFontName);
	float getFontSize() const;
	void setFontSize(float fFontSize);
	unsigned int getMaxLineLength() const;
	void setMaxLineLength(unsigned int uLen);
	float getVerticalSpacing() const;
	void setVerticalSpacing(float fSpacing);

	void insertElement(const char* pString, 
		const char* pFontName = NULL, 
		float fFontSize = 0.0f, 
		const ccColor3B& tColor = ccWHITE, 
		const char* pDescription = NULL);

	void insertElement(CCNode* pNode,
		unsigned int uLen = 0,
		const char* pDescription = NULL);

	void removeAllElements();
	void reloadData();

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch);
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration);

protected:
	void pushAtlasLine();
	void pushAtlasElementAtLast(const _ccTEXTRICHELEMENT& tAtlas);
	void makeAtlasLabelElement(_ccTEXTRICHELEMENT& tElement, const char* str, const char* fontname, float size, const ccColor3B& color, const char* pDescription);

protected:
	float m_fVerticalSpacing;
	unsigned int m_uCharCursor;
	unsigned int m_uMaxLineLength;
	std::string m_strFontName;
	float m_fFontSize;

	std::vector<_ccTEXTRICHELEMENTRECT> m_vRichTextAtlasDescriptions;
	CTextRichAtlas* m_pRichTextAtlas;
};

NS_CC_WIDGET_END


#endif //__CCWIDGET_TEXTRICH_H__