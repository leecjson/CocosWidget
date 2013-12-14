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
#ifndef __CCWIDGET_IMAGEVIEWSCALE9_H__
#define __CCWIDGET_IMAGEVIEWSCALE9_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Scale9Sprite.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class    : CImageViewScale9
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 9宫格图像视图控件定义
 */
class CImageViewScale9 : public CScale9Sprite
, public CWidget
, public CClickableProtocol
, public CLongClickableProtocol
{
public:
	CImageViewScale9();

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	static CImageViewScale9* create(const char* file, CCRect rect,  CCRect capInsets);
	static CImageViewScale9* create(const char* file, CCRect rect);
	static CImageViewScale9* create(CCRect capInsets, const char* file);
	static CImageViewScale9* create(const char* file);
	static CImageViewScale9* createWithSpriteFrame(CCSpriteFrame* spriteFrame, CCRect capInsets);
	static CImageViewScale9* createWithSpriteFrame(CCSpriteFrame* spriteFrame); 
	static CImageViewScale9* createWithSpriteFrameName(const char*spriteFrameName, CCRect capInsets);
	static CImageViewScale9* createWithSpriteFrameName(const char*spriteFrameName);
	static CImageViewScale9* createWithTexture(CCTexture2D* pTexture);
	static CImageViewScale9* createWithTexture(CCTexture2D* pTexture, CCRect capInsets);
	static CImageViewScale9* create();

	CC_WIDGET_LONGCLICK_SCHEDULE(CImageViewScale9);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_IMAGEVIEWSCALE9_H__