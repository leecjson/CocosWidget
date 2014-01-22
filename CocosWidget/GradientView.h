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
#ifndef __CCWIDGET_GRADIENTVIEW_H__
#define __CCWIDGET_GRADIENTVIEW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"
#include "ColorView.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CGradientView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : gradient view define
 */
class CGradientView : public CColorView
{
public:
	CGradientView();
	virtual ~CGradientView();
	virtual bool init();
	virtual bool initWithColor(const ccColor4B& tStart, const ccColor4B& tEnd);
	virtual bool initWithColor(const ccColor4B& tStart, const ccColor4B& tEnd, const CCPoint& v);
	static CGradientView* create();
	static CGradientView* create(const ccColor4B& tStart, const ccColor4B& tEnd);
	static CGradientView* create(const ccColor4B& tStart, const ccColor4B& tEnd, const CCPoint& v);

	virtual void setStartColor(const ccColor3B& tColor);
	virtual const ccColor3B& getStartColor();
	virtual void setEndColor(const ccColor3B& tColor);
	virtual const ccColor3B& getEndColor();
	virtual void setStartOpacity(GLubyte cOpacity);
	virtual GLubyte getStartOpacity();
	virtual void setEndOpacity(GLubyte cOpacity);
	virtual GLubyte getEndOpacity();
	virtual void setVector(const CCPoint& tPoint);
	virtual const CCPoint& getVector();
	virtual void setCompressedInterpolation(bool bCompressedInterpolation);
	virtual bool isCompressedInterpolation();

protected:
	virtual void updateColor();

protected:
	ccColor3B m_tStartColor;
	ccColor3B m_tEndColor;
	GLubyte m_cStartOpacity;
	GLubyte m_cEndOpacity;
	CCPoint m_tAlongVector;
	bool m_bCompressedInterpolation;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_GRADIENTVIEW_H__