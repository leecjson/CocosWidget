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
#include "Label.h"

NS_CC_WIDGET_BEGIN

CLabel::CLabel()
{
	setThisObject(this);
}

CLabel::~CLabel()
{
	
}

CLabel* CLabel::create()
{
    CLabel* pRet = new CLabel();
    if (pRet && pRet->init())
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CLabel* CLabel::create(const char *pString, const char *pFontName, float fFontSize)
{
	CLabel * pRet = new CLabel();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize))
    {
		pRet->setTouchEnabled(false);
		pRet->setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CLabel* CLabel::create(const char *pString, const char *pFontName, float fFontSize,
	const CCSize& tDimensions, CCTextAlignment hAlignment)
{
	CLabel * pRet = new CLabel();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize, tDimensions, hAlignment))
    {
		pRet->setTouchEnabled(false);
		pRet->setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CLabel* CLabel::create(const char *pString, const char *pFontName, float fFontSize,
	const CCSize& tDimensions, CCTextAlignment hAlignment, CCVerticalTextAlignment vAlignment)
{
	CLabel * pRet = new CLabel();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize, tDimensions, hAlignment, vAlignment))
    {
		pRet->setTouchEnabled(false);
		pRet->setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CLabel::init()
{
	setTouchEnabled(false);
	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);

	return CCLabelTTF::init();
}

CWidgetTouchModel CLabel::onTouchBegan(CCTouch* pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

	return eWidgetTouchTransient;
}

void CLabel::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;
}

void CLabel::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	CCPoint tPoint = m_pParent->convertTouchToNodeSpace(pTouch);
	if( boundingBox().containsPoint(tPoint) )
	{
		executeClickHandler(this);
	}
}

void CLabel::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;
}

NS_CC_WIDGET_END