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
#include "ImageViewScale9.h"

NS_CC_WIDGET_BEGIN

CImageViewScale9::CImageViewScale9()
{
	setThisObject(this);
	setTouchEnabled(false);
}

CWidgetTouchModel CImageViewScale9::onTouchBegan(CCTouch *pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

    return eWidgetTouchTransient;
}

void CImageViewScale9::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;
}

void CImageViewScale9::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClickHandler(this);
	}
}

void CImageViewScale9::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;
}

CImageViewScale9* CImageViewScale9::create(const char* file, CCRect rect,  CCRect capInsets)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithFile(file, rect, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::create(const char* file, CCRect rect)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithFile(file, rect) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::create(CCRect capInsets, const char* file)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithFile(capInsets, file) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::create(const char* file)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithFile(file) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithSpriteFrame(CCSpriteFrame* spriteFrame, CCRect capInsets)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithSpriteFrame(spriteFrame, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithSpriteFrame(CCSpriteFrame* spriteFrame)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithSpriteFrame(spriteFrame) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithSpriteFrameName(const char* spriteFrameName, CCRect capInsets)
{
    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithSpriteFrameName(spriteFrameName, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithSpriteFrameName(const char* spriteFrameName)
{
    CCAssert(spriteFrameName != NULL, "spriteFrameName must be non-NULL");

    CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithSpriteFrameName(spriteFrameName) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);

    CCLog("Could not allocate CCImageScale9()");
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithTexture(CCTexture2D* pTexture)
{
	CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithTexture(pTexture) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::createWithTexture(CCTexture2D* pTexture, CCRect capInsets)
{
	CImageViewScale9* pReturn = new CImageViewScale9();
    if ( pReturn && pReturn->initWithTexture(pTexture, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CImageViewScale9* CImageViewScale9::create()
{ 
    CImageViewScale9 *pReturn = new CImageViewScale9();
    if (pReturn && pReturn->init())
    { 
        pReturn->autorelease();   
        return pReturn;
    } 
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

NS_CC_WIDGET_END