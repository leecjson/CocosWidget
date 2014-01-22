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
#ifndef __CCWIDGET_COLORVIEW_H__
#define __CCWIDGET_COLORVIEW_H__

#include "cocos2d.h"
#include "Widget.h"
#include "WidgetMacros.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CColorView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : color view define
 */
class CColorView 
: public CCNodeRGBA
, public CWidget
, public CCBlendProtocol
, public CClickableProtocol
, public CLongClickableProtocol
#ifdef EMSCRIPTEN
, public CCGLBufferedNode
#endif
{
public:
	CColorView();
	virtual ~CColorView();
	virtual bool init();
	virtual bool initWithColor(const ccColor4B& color);
	static CColorView* create();
	static CColorView* create(const ccColor4B& color);
	
	virtual void setContentSize(const CCSize& size);
	virtual void setColor(const ccColor3B& color);
	virtual void setOpacity(GLubyte opacity);
	virtual void setCascadeOpacityEnabled(bool cascadeOpacityEnabled);
	virtual void setCascadeColorEnabled(bool cascadeColorEnabled);
	virtual GLubyte getOpacity();
	virtual GLubyte getDisplayedOpacity();
	virtual const ccColor3B& getColor();
	virtual const ccColor3B& getDisplayedColor();
	virtual bool isCascadeColorEnabled();
	virtual bool isCascadeOpacityEnabled();

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch);
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration);

	virtual void updateDisplayedOpacity(GLubyte parentOpacity);
	virtual void updateDisplayedColor(const ccColor3B& parentColor);
	virtual void setOpacityModifyRGB(bool bValue) {CC_UNUSED_PARAM(bValue);}
	virtual bool isOpacityModifyRGB() { return false; }
	virtual void draw();
	virtual ccBlendFunc getBlendFunc(){ return m_tBlendFunc; }
	virtual void setBlendFunc(ccBlendFunc tBlendFunc){ m_tBlendFunc = tBlendFunc; }

	CC_WIDGET_LONGCLICK_SCHEDULE(CColorView);

protected:
	ccBlendFunc m_tBlendFunc;

protected:
    ccVertex2F m_pSquareVertices[4];
    ccColor4F  m_pSquareColors[4];
	virtual void updateColor();
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_COLORVIEW_H__