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
#include "ImageView.h"

NS_CC_WIDGET_BEGIN

CImageView::CImageView()
{
	setThisObject(this);
	setTouchEnabled(false);
}

CWidgetTouchModel CImageView::onTouchBegan(CCTouch *pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

	return eWidgetTouchTransient;
}

void CImageView::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;
}

void CImageView::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClickHandler(this);
	}
}

void CImageView::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;
}

CImageView* CImageView::createWithTexture(CCTexture2D *pTexture)
{
    CImageView *pobSprite = new CImageView();
    if (pobSprite && pobSprite->initWithTexture(pTexture))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

CImageView* CImageView::createWithTexture(CCTexture2D *pTexture, const CCRect& rect)
{
    CImageView *pobSprite = new CImageView();
    if (pobSprite && pobSprite->initWithTexture(pTexture, rect))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

CImageView* CImageView::create(const char *pszFileName)
{
    CImageView *pobSprite = new CImageView();
    if (pobSprite && pobSprite->initWithFile(pszFileName))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

CImageView* CImageView::create(const char *pszFileName, const CCRect& rect)
{
    CImageView *pobSprite = new CImageView();
    if (pobSprite && pobSprite->initWithFile(pszFileName, rect))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

CImageView* CImageView::createWithSpriteFrame(CCSpriteFrame *pSpriteFrame)
{
    CImageView *pobSprite = new CImageView();
    if (pSpriteFrame && pobSprite && pobSprite->initWithSpriteFrame(pSpriteFrame))
    {
        pobSprite->autorelease();
        return pobSprite;
    }
    CC_SAFE_DELETE(pobSprite);
    return NULL;
}

CImageView* CImageView::createWithSpriteFrameName(const char *pszSpriteFrameName)
{
    CCSpriteFrame *pFrame = CCSpriteFrameCache::sharedSpriteFrameCache()->spriteFrameByName(pszSpriteFrameName);
    
#if COCOS2D_DEBUG > 0
    char msg[256] = {0};
    sprintf(msg, "Invalid spriteFrameName: %s", pszSpriteFrameName);
    CCAssert(pFrame != NULL, msg);
#endif
    
    return createWithSpriteFrame(pFrame);
}

CImageView* CImageView::create()
{
    CImageView *pSprite = new CImageView();
    if (pSprite && pSprite->init())
    {
        pSprite->autorelease();
        return pSprite;
    }
    CC_SAFE_DELETE(pSprite);
    return NULL;
}

NS_CC_WIDGET_END