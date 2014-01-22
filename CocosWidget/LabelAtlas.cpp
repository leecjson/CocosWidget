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
#include "LabelAtlas.h"

NS_CC_WIDGET_BEGIN

CLabelAtlas::CLabelAtlas()
{
	setThisObject(this);
}

CLabelAtlas::~CLabelAtlas()
{
	
}

CLabelAtlas* CLabelAtlas::create(const char* pString, const char* charMapFile, unsigned int itemWidth, int unsigned itemHeight, unsigned int startCharMap)
{
    CLabelAtlas *pRet = new CLabelAtlas();
    if( pRet && pRet->initWithString(pString, charMapFile, itemWidth, itemHeight, startCharMap) )
    {
		pRet->setTouchEnabled(false);
		pRet->setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

CLabelAtlas* CLabelAtlas::create(const char* pString, const char* fntFile)
{    
    CLabelAtlas *pRet = new CLabelAtlas();
    if( pRet && pRet->initWithString(pString, fntFile) )
    {
		pRet->setTouchEnabled(false);
		pRet->setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
		pRet->autorelease();
        return pRet;
    }
	CC_SAFE_DELETE(pRet);
    return pRet;
}

bool CLabelAtlas::init()
{
	bool bRet = CCAtlasNode::init();

	setTouchEnabled(false);
	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);

	return bRet;
}

CWidgetTouchModel CLabelAtlas::onTouchBegan(CCTouch* pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN

	return eWidgetTouchTransient;
}

void CLabelAtlas::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED
}

void CLabelAtlas::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED

	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClickHandler(this);
	}
}

void CLabelAtlas::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED
}


NS_CC_WIDGET_END