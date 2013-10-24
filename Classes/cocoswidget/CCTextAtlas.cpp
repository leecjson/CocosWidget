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
#include "CCTextAtlas.h"

NS_CC_WIDGET_BEGIN

CCTextAtlas::CCTextAtlas()
{
	setWidgetNode(this);
	m_bTouchEnabled = false;
	setAnchorPoint(ccp(0.5f, 0.5f));
}

CCTextAtlas::~CCTextAtlas()
{
	
}

CCTextAtlas* CCTextAtlas::create(const char *string, const char *charMapFile, unsigned int itemWidth, int unsigned itemHeight, unsigned int startCharMap)
{
    CCTextAtlas *pRet = new CCTextAtlas();
    if( pRet && pRet->initWithString(string, charMapFile, itemWidth, itemHeight, startCharMap) )
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}

CCTextAtlas* CCTextAtlas::create(const char *string, const char *fntFile)
{    
    CCTextAtlas *pRet = new CCTextAtlas();
    if( pRet && pRet->initWithString(string, fntFile) )
    {
		pRet->autorelease();
        return pRet;
    }
	CC_SAFE_DELETE(pRet);
    return pRet;
}

CCWidgetTouchModel CCTextAtlas::onTouchBegan(CCTouch *pTouch)
{
	return eWidgetTouchTransient;
}

void CCTextAtlas::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	CCPoint touchPointInView = m_pParent->convertToNodeSpace(pTouch->getLocation());
	if( boundingBox().containsPoint(touchPointInView) )
	{
		executeClick();
	}
}

NS_CC_WIDGET_END