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
#include "CCTextBMFont.h"

NS_CC_WIDGET_BEGIN

CCTextBMFont::CCTextBMFont()
{
	setWidgetNode(this);
	m_bTouchEnabled = false;
}

CCTextBMFont::~CCTextBMFont()
{

}

CCWidgetTouchModel CCTextBMFont::onTouchBegan(CCTouch *pTouch)
{
	return eWidgetTouchTransient;
}

void CCTextBMFont::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClick();
	}
}

CCTextBMFont* CCTextBMFont::create()
{
    CCTextBMFont * pRet = new CCTextBMFont();
    if( pRet && pRet->init() )
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

CCTextBMFont * CCTextBMFont::create(const char *str, const char *fntFile, float width, CCTextAlignment alignment)
{
    return CCTextBMFont::create(str, fntFile, width, alignment, CCPointZero);
}

CCTextBMFont * CCTextBMFont::create(const char *str, const char *fntFile, float width)
{
    return CCTextBMFont::create(str, fntFile, width, kCCTextAlignmentLeft, CCPointZero);
}

CCTextBMFont * CCTextBMFont::create(const char *str, const char *fntFile)
{
    return CCTextBMFont::create(str, fntFile, kCCLabelAutomaticWidth, kCCTextAlignmentLeft, CCPointZero);
}

CCTextBMFont *CCTextBMFont::create(const char *str, const char *fntFile, float width/* = kCCLabelAutomaticWidth*/, CCTextAlignment alignment/* = kCCTextAlignmentLeft*/, CCPoint imageOffset/* = CCPointZero*/)
{
    CCTextBMFont *pRet = new CCTextBMFont();
    if(pRet && pRet->initWithString(str, fntFile, width, alignment, imageOffset))
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

NS_CC_WIDGET_END