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
#ifndef __CCWIDGET_PANEL_H__
#define __CCWIDGET_PANEL_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class    : CPanel
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 面板控件定义
 */
class CPanel : public CCNodeRGBA, public CWidget
{
public:
	CPanel();
	virtual ~CPanel();

	// 初始化默认数据
	virtual bool init();
	// 当设置大小时，更新内容坐标
	virtual void setContentSize(const CCSize& tContentSize);

    virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	static CPanel* create();
	static CPanel* create(const CCSize& tContentSize);

	CC_WIDGET_BACKGROUND;
    
protected:
	// 被选中的控件
	CWidget* m_pSelectedWidget;
	// 子控件的触摸模式
    CWidgetTouchModel m_eChildTouchModel;
};

/**
 * 类名 : CPanel
 * 作者 : cocos2d-x Xi'an-Lijunlin csdn_viva@foxmail.com
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 带绘制颜色的面板容器
 */
class CPanelColor : public CPanel, public CCBlendProtocol
#ifdef EMSCRIPTEN
, public CCGLBufferedNode
#endif
{
public:
	CPanelColor();
	virtual ~CPanelColor();
	static CPanelColor* create();
	static CPanelColor* create(const ccColor4B& color);

	virtual bool init();
	virtual bool initWithColor(const ccColor4B& color);
	virtual void draw();
    virtual void setContentSize(const CCSize & var);

	virtual GLubyte getOpacity();
	virtual GLubyte getDisplayedOpacity();
	virtual void setOpacity(GLubyte opacity);
	virtual void updateDisplayedOpacity(GLubyte parentOpacity);
	virtual bool isCascadeOpacityEnabled();
	virtual void setCascadeOpacityEnabled(bool cascadeOpacityEnabled);

	virtual const ccColor3B& getColor();
	virtual const ccColor3B& getDisplayedColor();
	virtual void setColor(const ccColor3B& color);
	virtual void updateDisplayedColor(const ccColor3B& parentColor);
	virtual bool isCascadeColorEnabled();
	virtual void setCascadeColorEnabled(bool cascadeColorEnabled);

	virtual void setOpacityModifyRGB(bool bValue) {CC_UNUSED_PARAM(bValue);}
	virtual bool isOpacityModifyRGB() { return false; }

	virtual ccBlendFunc getBlendFunc(){ return m_tBlendFunc; }
	virtual void setBlendFunc(ccBlendFunc tBlendFunc){ m_tBlendFunc = tBlendFunc; }

protected:
	ccBlendFunc m_tBlendFunc;

protected:
    ccVertex2F m_pSquareVertices[4];
    ccColor4F  m_pSquareColors[4];
	virtual void updateColor();
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_PANEL_H__