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
#ifndef __CCWIDGET_CONTROLVIEW_H__
#define __CCWIDGET_CONTROLVIEW_H__

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
 * class    : CControlView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 操作杆控件定义
 */
class CControlView : public CCNodeRGBA, public CWidget, public CControlableProtocol
{
public:
	CControlView();
	virtual ~CControlView();

	// 初始化默认属性
	virtual bool init();
	// 通过图片路径初始化
	virtual bool initWithFile(const char* pBaseBoard, const char* pJoystick);
	// 当设置大小时更新内容位置
	virtual void setContentSize(const CCSize& tContentSize);
	
	// 设置操作杆可操作范围半径
	void setRadius(float fRadius);
	// 获取操作杆可操作范围半径
	float getRadius() const;
	// 设置当手指离开操作杆时，是否动作调整。
	void setRelocateWithAnimation(bool bAni);
	// 获取是否动作调整位置
	bool isRelocateWithAnimation() const;
	
	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
    virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
    virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	virtual void setBaseBoardImage(const char* pFile);
	virtual void setJoystickImage(const char* pFile);
	virtual void setBaseBoardSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setJoystickSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setBaseBoardTexture(CCTexture2D *pTexture);
	virtual void setJoystickTexture(CCTexture2D *pTexture);
	virtual void setBaseBoardSpriteFrameName(const char* pSpriteName);
	virtual void setJoystickSpriteFrameName(const char* pSpriteName);

	static CControlView* create();
	static CControlView* create(const char* pBaseBoard, const char* pJoystick);

protected:
	void relocateJoystick(bool bAni);
	virtual void onAnimateUpdate(float dt);
	void performAnimateUpdate();
	void stopAnimateUpdate();
	virtual void onExecuteEventUpdate(float dt);
	void performExecuteUpdate();
	void stopExecuteUpdate();

protected:
	// 操作杆平台（背景）
	CCSprite* m_pBaseBoard;
	// 操作杆
	CCSprite* m_pJoystick;
	// 可移动半径
	float m_fRadius;

	bool m_bExecuteEventUpdate;
	bool m_bAnimationUpdate;
	bool m_bRelocateWithAnimation;
	CCPoint m_tCenterPoint;
	CCPoint m_tLastPoint;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_CONTROLVIEW_H__