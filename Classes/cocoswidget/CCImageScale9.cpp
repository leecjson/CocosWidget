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
#include "CCImageScale9.h"

NS_CC_WIDGET_BEGIN

CCImageScale9::CCImageScale9()
{
	
}

CCWidgetTouchModel CCImageScale9::onTouchBegan(CCTouch *pTouch)
{
    return eWidgetTouchTransient;
}

void CCImageScale9::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClick();
	}
}

CCImageScale9* CCImageScale9::create(const char* file, CCRect rect,  CCRect capInsets)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithFile(file, rect, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::create(const char* file, CCRect rect)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithFile(file, rect) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::create(CCRect capInsets, const char* file)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithFile(capInsets, file) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::create(const char* file)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithFile(file) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::createWithSpriteFrame(CCSpriteFrame* spriteFrame, CCRect capInsets)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithSpriteFrame(spriteFrame, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::createWithSpriteFrame(CCSpriteFrame* spriteFrame)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithSpriteFrame(spriteFrame) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::createWithSpriteFrameName(const char* spriteFrameName, CCRect capInsets)
{
    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithSpriteFrameName(spriteFrameName, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::createWithSpriteFrameName(const char* spriteFrameName)
{
    CCAssert(spriteFrameName != NULL, "spriteFrameName must be non-NULL");

    CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithSpriteFrameName(spriteFrameName) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);

    CCLog("Could not allocate CCImageScale9()");
    return NULL;
}

CCImageScale9* CCImageScale9::createWithTexture(CCTexture2D* pTexture)
{
	CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithTexture(pTexture) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::createWithTexture(CCTexture2D* pTexture, CCRect capInsets)
{
	CCImageScale9* pReturn = new CCImageScale9();
    if ( pReturn && pReturn->initWithTexture(pTexture, capInsets) )
    {
        pReturn->autorelease();
        return pReturn;
    }
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

CCImageScale9* CCImageScale9::create()
{ 
    CCImageScale9 *pReturn = new CCImageScale9();
    if (pReturn && pReturn->init())
    { 
        pReturn->autorelease();   
        return pReturn;
    } 
    CC_SAFE_DELETE(pReturn);
    return NULL;
}

NS_CC_WIDGET_END