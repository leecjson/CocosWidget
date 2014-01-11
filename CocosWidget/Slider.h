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
#ifndef __CCWIDGET_SLIDER_H__
#define __CCWIDGET_SLIDER_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ProgressBar.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CSlider
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CSlider : public CProgressBar, public CWidget
{
public:
	CSlider();
	virtual ~CSlider();
	virtual bool initWithSlider(const char* pSlider, const char* pProgress);
	static CSlider* create();
	static CSlider* create(const char* pSlider, const char* pProgress);

	virtual void setContentSize(const CCSize& tSize);
	virtual void setSliderImage(const char* pFile);
	virtual void setSliderTexture(CCTexture2D* pTexture);
	virtual void setSliderSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setSliderSpriteFrameName(const char* pSpriteName);

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

protected:
	int valueFromPoint(const CCPoint& tPoint);
	int valueFromPercent(float fPercentage);
	void pointFromValue(int nValue, CCPoint& tOutPoint);

protected:
	virtual void changeValueAndExecuteEvent(int nValue, bool bExeEvent);

protected:
	bool m_bDrag;
	CCSprite* m_pSlider;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_SLIDER_H__