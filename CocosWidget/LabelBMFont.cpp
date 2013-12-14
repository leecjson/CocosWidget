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
#include "LabelBMFont.h"

NS_CC_WIDGET_BEGIN

CLabelBMFont::CLabelBMFont()
{
	setThisObject(this);
	m_bTouchEnabled = false;
}

CLabelBMFont::~CLabelBMFont()
{

}

CWidgetTouchModel CLabelBMFont::onTouchBegan(CCTouch *pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN

	return eWidgetTouchTransient;
}

void CLabelBMFont::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;
}

void CLabelBMFont::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED

	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClickHandler(this);
	}
}

void CLabelBMFont::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;
}

CLabelBMFont* CLabelBMFont::create()
{
    CLabelBMFont * pRet = new CLabelBMFont();
    if( pRet && pRet->init() )
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

CLabelBMFont * CLabelBMFont::create(const char *pString, const char *fntFile, float width, CCTextAlignment alignment)
{
    return CLabelBMFont::create(pString, fntFile, width, alignment, CCPointZero);
}

CLabelBMFont * CLabelBMFont::create(const char *pString, const char *fntFile, float width)
{
    return CLabelBMFont::create(pString, fntFile, width, kCCTextAlignmentLeft, CCPointZero);
}

CLabelBMFont * CLabelBMFont::create(const char *pString, const char *fntFile)
{
    return CLabelBMFont::create(pString, fntFile, kCCLabelAutomaticWidth, kCCTextAlignmentLeft, CCPointZero);
}

CLabelBMFont *CLabelBMFont::create(const char *pString, const char *fntFile, float width/* = kCCLabelAutomaticWidth*/, CCTextAlignment alignment/* = kCCTextAlignmentLeft*/, CCPoint imageOffset/* = CCPointZero*/)
{
    CLabelBMFont *pRet = new CLabelBMFont();
    if(pRet && pRet->initWithString(pString, fntFile, width, alignment, imageOffset))
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

NS_CC_WIDGET_END