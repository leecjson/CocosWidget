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
#include "Panel.h"

NS_CC_WIDGET_BEGIN

CPanel::CPanel()
: m_pSelectedWidget(NULL)
, m_eChildTouchModel(eWidgetTouchNone)
, m_pBackgroundImage(NULL)
{
	setThisObject(this);
}

CPanel::~CPanel()
{

}

CPanel* CPanel::create()
{
	CPanel* pRet = new CPanel();
	if( pRet && pRet->init() )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CPanel* CPanel::create(const CCSize& tContentSize)
{
	CPanel* pRet = new CPanel();
	if( pRet && pRet->init() )
	{
		pRet->setContentSize(tContentSize);
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CPanel::init()
{
	setContentSize(CCDirector::sharedDirector()->getWinSize());
	setAnchorPoint(CCPoint(0.5f, 0.5f));
	setPosition(CCPointZero);
	return CCNode::init();
}

void CPanel::setContentSize(const CCSize& tContentSize)
{ 
	CCNodeRGBA::setContentSize(tContentSize);
	CC_WIDGET_UPDATE_BACKGROUND_POS;
}

CWidgetTouchModel CPanel::onTouchBegan(CCTouch *pTouch)
{
	m_pSelectedWidget = NULL;
	m_eChildTouchModel = eWidgetTouchNone;

	CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
	if( m_pChildren && m_pChildren->count() > 0 )
	{
		CCObject* pObject = NULL;
		CCARRAY_FOREACH_REVERSE( m_pChildren, pObject )
		{
			CCNode* pNode = dynamic_cast<CCNode*>(pObject);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget && pNode->isVisible() && pWidget->isEnabled() && pWidget->isTouchEnabled() )
			{
				if( pNode->boundingBox().containsPoint(tNodePoint) )
				{
					m_eChildTouchModel = pWidget->executeTouchBeganHandler(pTouch);
					if( m_eChildTouchModel == eWidgetTouchNone )
					{
						m_pSelectedWidget = NULL;
						m_eChildTouchModel = eWidgetTouchNone;
					}
					else
					{
						m_pSelectedWidget = pWidget;
						return m_eChildTouchModel;
					}
				}
			}
		}
	}
	return eWidgetTouchTransient;
}

void CPanel::onTouchMoved(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchMovedHandler(pTouch, fDuration);
	}
}

void CPanel::onTouchEnded(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchEndedHandler(pTouch, fDuration);
	}
	m_pSelectedWidget = NULL;
	m_eChildTouchModel = eWidgetTouchNone;
}

void CPanel::onTouchCancelled(CCTouch *pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchCancelledHandler(pTouch, fDuration);
	}
	m_pSelectedWidget = NULL;
	m_eChildTouchModel = eWidgetTouchNone;
}


CPanelColor::CPanelColor()
{
	_displayedOpacity = 255;
	_realOpacity = 255;
	_displayedColor = ccWHITE;
	_realColor = ccWHITE;
	_cascadeOpacityEnabled = false;
	_cascadeColorEnabled = false;

	m_tBlendFunc.src = CC_BLEND_SRC;
	m_tBlendFunc.dst = CC_BLEND_DST;
}

CPanelColor::~CPanelColor()
{

}

bool CPanelColor::init()
{
	if (CPanel::init())
	{
		_displayedOpacity = _realOpacity = 255;
		_displayedColor = _realColor = ccWHITE;
		setCascadeOpacityEnabled(false);
		setCascadeColorEnabled(false);
		return true;
	}
	return false;
}

bool CPanelColor::initWithColor(const ccColor4B& color)
{
	if ( init() )
	{
		m_tBlendFunc.src = GL_SRC_ALPHA;
		m_tBlendFunc.dst = GL_ONE_MINUS_SRC_ALPHA;

		_displayedColor.r = _realColor.r = color.r;
		_displayedColor.g = _realColor.g = color.g;
		_displayedColor.b = _realColor.b = color.b;
		_displayedOpacity = _realOpacity = color.a;

		for (size_t i = 0; i < sizeof(m_pSquareVertices) / sizeof( m_pSquareVertices[0]); i++ )
		{
			m_pSquareVertices[i].x = 0.0f;
			m_pSquareVertices[i].y = 0.0f;
		}

		updateColor();
		setContentSize(CCSizeMake(200, 200));

		setShaderProgram(CCShaderCache::sharedShaderCache()->programForKey(kCCShader_PositionColor));
		return true;
	}
	return false;
}

void CPanelColor::draw()
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

GLubyte CPanelColor::getOpacity()
{
	return _realOpacity;
}

GLubyte CPanelColor::getDisplayedOpacity()
{
	return _displayedOpacity;
}

void CPanelColor::setOpacity(GLubyte opacity)
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

const ccColor3B& CPanelColor::getColor()
{
	return _realColor;
}

const ccColor3B& CPanelColor::getDisplayedColor()
{
	return _displayedColor;
}

void CPanelColor::setColor(const ccColor3B& color)
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

void CPanelColor::updateDisplayedOpacity(GLubyte parentOpacity)
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

void CPanelColor::updateDisplayedColor(const ccColor3B& parentColor)
{
	_displayedColor.r = _realColor.r * parentColor.r/255.0;
	_displayedColor.g = _realColor.g * parentColor.g/255.0;
	_displayedColor.b = _realColor.b * parentColor.b/255.0;

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

bool CPanelColor::isCascadeOpacityEnabled()
{
	return _cascadeOpacityEnabled;
}

void CPanelColor::setCascadeOpacityEnabled(bool cascadeOpacityEnabled)
{
	_cascadeOpacityEnabled = cascadeOpacityEnabled;
}

bool CPanelColor::isCascadeColorEnabled()
{
	return _cascadeColorEnabled;
}

void CPanelColor::setCascadeColorEnabled(bool cascadeColorEnabled)
{
	_cascadeColorEnabled = cascadeColorEnabled;
}

void CPanelColor::setContentSize(const CCSize & size)
{
	m_pSquareVertices[1].x = size.width;
	m_pSquareVertices[2].y = size.height;
	m_pSquareVertices[3].x = size.width;
	m_pSquareVertices[3].y = size.height;

	CPanel::setContentSize(size);
}

void CPanelColor::updateColor()
{
	for( unsigned int i=0; i < 4; i++ )
	{
		m_pSquareColors[i].r = _displayedColor.r / 255.0f;
		m_pSquareColors[i].g = _displayedColor.g / 255.0f;
		m_pSquareColors[i].b = _displayedColor.b / 255.0f;
		m_pSquareColors[i].a = _displayedOpacity / 255.0f;
	}
}

CPanelColor* CPanelColor::create(const ccColor4B& color)
{
	CPanelColor * pLayer = new CPanelColor();
	if(pLayer && pLayer->initWithColor(color))
	{
		pLayer->autorelease();
		return pLayer;
	}
	CC_SAFE_DELETE(pLayer);
	return NULL;
}

CPanelColor* CPanelColor::create()
{
	CPanelColor* pRet = new CPanelColor();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
	}
	else
	{
		CC_SAFE_DELETE(pRet);
	}
	return pRet;
}

NS_CC_WIDGET_END