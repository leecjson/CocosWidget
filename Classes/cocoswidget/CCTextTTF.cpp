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
#include "CCTextTTF.h"

NS_CC_WIDGET_BEGIN

CCTextTTF::CCTextTTF()
{
	setWidgetNode(this);
	m_bTouchEnabled = false;
}

CCTextTTF::~CCTextTTF()
{
	
}

CCTextTTF* CCTextTTF::create()
{
    CCTextTTF * pRet = new CCTextTTF();
    if (pRet && pRet->init())
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCTextTTF* CCTextTTF::create(const char *pString, const char *pFontName, float fFontSize)
{
	CCTextTTF * pRet = new CCTextTTF();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize))
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCTextTTF* CCTextTTF::create(const char *pString, const char *pFontName, float fFontSize,
	const CCSize& tDimensions, CCTextAlignment hAlignment)
{
	CCTextTTF * pRet = new CCTextTTF();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize, tDimensions, hAlignment))
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCTextTTF* CCTextTTF::create(const char *pString, const char *pFontName, float fFontSize,
	const CCSize& tDimensions, CCTextAlignment hAlignment, CCVerticalTextAlignment vAlignment)
{
	CCTextTTF * pRet = new CCTextTTF();
	if (pRet && pRet->initWithString(pString, pFontName, fFontSize, tDimensions, hAlignment, vAlignment))
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCWidgetTouchModel CCTextTTF::onTouchBegan(CCTouch *pTouch)
{
    return eWidgetTouchTransient;
}

void CCTextTTF::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClick();
	}
}

NS_CC_WIDGET_END