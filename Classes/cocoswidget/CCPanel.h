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
#ifndef __CCWIDGET_PANEL_H__
#define __CCWIDGET_PANEL_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"
#include "CCWidget.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CCPanel
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 面板容器，具有把事件向下分发的功能
 */
class CCPanel : public CCNode, public CCWidget
{
public:
	CCPanel();
	virtual ~CCPanel();
	virtual bool init();
	static CCPanel* create();

	/**
	 * 名称 : collisionWithWidget()
	 * 功能 : 检测点击到哪个控件
	 * 输入 : tPoint - 点击的坐标
	 * 输出 : 被点击的控件
	 */
	virtual CCWidget* collisionWithWidget(const CCPoint& tPoint);

	/**
	 * 名称 : executeTouchBegan()
	 * 功能 : 覆盖函数，初始化变量
	 * 输入 : pTouch - 触摸信息
	 * 输出 : 触摸模式
	 */
    virtual CCWidgetTouchModel executeTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 覆盖函数，检测哪点击到哪个子控件
	 * 输入 : pTouch - 触摸信息
	 * 输出 : 触摸模式
	 */
    virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 覆盖函数，处理触摸移动事件，传递给子控件
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距触摸开始经过的时间
	 * 输出 : 
	 */
    virtual void onTouchMoved(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 覆盖函数，处理触摸结束事件，传递给子控件
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距触摸开始经过的时间
	 * 输出 : 
	 */
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	/**
	 * 名称 : onTouchCancelled()
	 * 功能 : 覆盖函数，处理触摸被中断事件，传递给子控件
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 距触摸开始经过的时间
	 * 输出 : 
	 */
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);
    
protected:
	/// 被选中的控件
	CCWidget* m_pSelectedWidget;
	/// 子控件的触摸模式
    CCWidgetTouchModel m_eChildTouchModel;
};

/**
 * 类名 : CCPanel
 * 作者 : cocos2d-x [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 带绘制颜色的面板容器
 */
class CCPanelColor : public CCPanel, public CCRGBAProtocol, public CCBlendProtocol
#ifdef EMSCRIPTEN
, public CCGLBufferedNode
#endif
{
public:
	CCPanelColor();
	virtual ~CCPanelColor();
	static CCPanelColor* create();
	static CCPanelColor* create(const ccColor4B& color);

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
	GLubyte		_displayedOpacity, _realOpacity;
	ccColor3B	_displayedColor, _realColor;
	bool		_cascadeOpacityEnabled, _cascadeColorEnabled;

protected:
    ccVertex2F m_pSquareVertices[4];
    ccColor4F  m_pSquareColors[4];
	virtual void updateColor();
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_PANEL_H__