/****************************************************************************
Copyright (c) 2013 Lijunlin - Jason lee

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
#ifndef __CCWIDGET_LAYOUT_H__
#define __CCWIDGET_LAYOUT_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ColorView.h"
#include "GradientView.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CLayout
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CLayout : public CCNodeRGBA, public CWidget, public CLayoutableProtocol
{
public:
	CLayout();
	virtual ~CLayout();
	virtual bool init();
	static CLayout* create();
	static CLayout* create(const CCSize& tContentSize);
	virtual void setContentSize(const CCSize& tContentSize);
	CCObject* findViewById(const char* id);

	CC_WIDGET_BACKGROUND;

public:
    virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch);
    virtual void onTouchMoved(CCTouch* pTouch, float fDuration);
    virtual void onTouchEnded(CCTouch* pTouch, float fDuration);
    virtual void onTouchCancelled(CCTouch* pTouch, float fDuration);

protected:
	CCObject* find(CCArray* pChidren, const char* id);

};

NS_CC_WIDGET_END

#endif //__CCWIDGET_LAYOUT_H__