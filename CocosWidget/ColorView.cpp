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
#include "ColorView.h"

NS_CC_WIDGET_BEGIN

CColorView::CColorView()
{
	setThisObject(this);
}

CColorView::~CColorView()
{

}

bool CColorView::init()
{
	return initWithColor(ccc4(0, 0, 0, 0));
}

bool CColorView::initWithColor(const ccColor4B& color)
{
	setTouchEnabled(false);

	_displayedColor.r = _realColor.r = color.r;
	_displayedColor.g = _realColor.g = color.g;
	_displayedColor.b = _realColor.b = color.b;
	_displayedOpacity = _realOpacity = color.a;

	_cascadeOpacityEnabled = false;
	_cascadeColorEnabled = false;

	m_tBlendFunc.src = GL_SRC_ALPHA;
	m_tBlendFunc.dst = GL_ONE_MINUS_SRC_ALPHA;

	for (size_t i = 0; i < sizeof(m_pSquareVertices) / sizeof( m_pSquareVertices[0]); i++ )
	{
		m_pSquareVertices[i].x = 0.0f;
		m_pSquareVertices[i].y = 0.0f;
	}

	setShaderProgram(CCShaderCache::sharedShaderCache()->programForKey(kCCShader_PositionColor));

	setAnchorPoint(CCWIDGET_BASIC_DEFAULT_ANCHOR_POINT);
	setContentSize(CCWIDGET_BASIC_DEFAULT_CONTENT_SIZE);

	updateColor();

	return true;
}

void CColorView::draw()
{
	CC_NODE_DRAW_SETUP();

	ccGLEnableVertexAttribs( kCCVertexAttribFlag_Position | kCCVertexAttribFlag_Color );

#ifdef EMSCRIPTEN
	setGLBufferData(m_pSquareVertices, 4 * sizeof(ccVertex2F), 0);
	glVertexAttribPointer(kCCVertexAttrib_Position, 2, GL_FLOAT, GL_FALSE, 0, 0);

	setGLBufferData(m_pSquareColors, 4 * sizeof(ccColor4F), 1);
	glVertexAttribPointer(kCCVertexAttrib_Color, 4, GL_FLOAT, GL_FALSE, 0, 0);
#else
	glVertexAttribPointer(kCCVertexAttrib_Position, 2, GL_FLOAT, GL_FALSE, 0, m_pSquareVertices);
	glVertexAttribPointer(kCCVertexAttrib_Color, 4, GL_FLOAT, GL_FALSE, 0, m_pSquareColors);
#endif

	ccGLBlendFunc( m_tBlendFunc.src, m_tBlendFunc.dst );
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
	CC_INCREMENT_GL_DRAWS(1);
}

GLubyte CColorView::getOpacity()
{
	return _realOpacity;
}

GLubyte CColorView::getDisplayedOpacity()
{
	return _displayedOpacity;
}

void CColorView::setOpacity(GLubyte opacity)
{
	_displayedOpacity = _realOpacity = opacity;
	if( _cascadeOpacityEnabled )
	{
		GLubyte parentOpacity = 255;
		CCRGBAProtocol *parent = dynamic_cast<CCRGBAProtocol*>(m_pParent);
		if (parent && parent->isCascadeOpacityEnabled())
		{
			parentOpacity = parent->getDisplayedOpacity();
		}
		updateDisplayedOpacity(parentOpacity);
	}
	updateColor();
}

const ccColor3B& CColorView::getColor()
{
	return _realColor;
}

const ccColor3B& CColorView::getDisplayedColor()
{
	return _displayedColor;
}

void CColorView::setColor(const ccColor3B& color)
{
	_displayedColor = _realColor = color;
	if (_cascadeColorEnabled)
	{
		ccColor3B parentColor = ccWHITE;
		CCRGBAProtocol* parent = dynamic_cast<CCRGBAProtocol*>(m_pParent);
		if (parent && parent->isCascadeColorEnabled())
		{
			parentColor = parent->getDisplayedColor();
		}

		updateDisplayedColor(parentColor);
	}
	updateColor();
}

void CColorView::updateDisplayedOpacity(GLubyte parentOpacity)
{
	_displayedOpacity = _realOpacity * parentOpacity/255.0;

	if (_cascadeOpacityEnabled)
	{
		CCObject *obj = NULL;
		CCARRAY_FOREACH(m_pChildren, obj)
		{
			CCRGBAProtocol *item = dynamic_cast<CCRGBAProtocol*>(obj);
			if (item)
			{
				item->updateDisplayedOpacity(_displayedOpacity);
			}
		}
	}
}

void CColorView::updateDisplayedColor(const ccColor3B& parentColor)
{
	_displayedColor.r = _realColor.r * parentColor.r / 255.0;
	_displayedColor.g = _realColor.g * parentColor.g / 255.0;
	_displayedColor.b = _realColor.b * parentColor.b / 255.0;

	if (_cascadeColorEnabled)
	{
		CCObject *obj = NULL;
		CCARRAY_FOREACH(m_pChildren, obj)
		{
			CCRGBAProtocol *item = dynamic_cast<CCRGBAProtocol*>(obj);
			if (item)
			{
				item->updateDisplayedColor(_displayedColor);
			}
		}
	}
}

bool CColorView::isCascadeOpacityEnabled()
{
	return _cascadeOpacityEnabled;
}

void CColorView::setCascadeOpacityEnabled(bool cascadeOpacityEnabled)
{
	_cascadeOpacityEnabled = cascadeOpacityEnabled;
}

bool CColorView::isCascadeColorEnabled()
{
	return _cascadeColorEnabled;
}

void CColorView::setCascadeColorEnabled(bool cascadeColorEnabled)
{
	_cascadeColorEnabled = cascadeColorEnabled;
}

void CColorView::setContentSize(const CCSize & size)
{
	m_pSquareVertices[1].x = size.width;
	m_pSquareVertices[2].y = size.height;
	m_pSquareVertices[3].x = size.width;
	m_pSquareVertices[3].y = size.height;

	CCNodeRGBA::setContentSize(size);
}

void CColorView::updateColor()
{
	for( unsigned int i = 0; i < 4; ++i )
	{
		m_pSquareColors[i].r = _displayedColor.r / 255.0f;
		m_pSquareColors[i].g = _displayedColor.g / 255.0f;
		m_pSquareColors[i].b = _displayedColor.b / 255.0f;
		m_pSquareColors[i].a = _displayedOpacity / 255.0f;
	}
}

CWidgetTouchModel CColorView::onTouchBegan(CCTouch* pTouch)
{
	CC_WIDGET_LONGCLICK_ONTOUCHBEGAN;

	return eWidgetTouchTransient;
}

void CColorView::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHMOVED;
}

void CColorView::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHENDED;

	CCPoint tPoint = m_pParent->convertTouchToNodeSpace(pTouch);
	if( boundingBox().containsPoint(tPoint) )
	{
		executeClickHandler(this);
	}
}

void CColorView::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	CC_WIDGET_LONGCLICK_ONTOUCHCANCELLED;
}

CColorView* CColorView::create(const ccColor4B& color)
{
	CColorView* pRet = new CColorView();
	if( pRet && pRet->initWithColor(color) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CColorView* CColorView::create()
{
	CColorView* pRet = new CColorView();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return pRet;
}

NS_CC_WIDGET_END