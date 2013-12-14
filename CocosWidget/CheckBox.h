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
#ifndef __CCWIDGET_CHECKBOX_H__
#define __CCWIDGET_CHECKBOX_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Button.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class    : CCheckBox
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 选中框控件定义
 */
class CCheckBox : public CCNodeRGBA
, public CWidget
, public CCheckableProtocol
, public CClickableProtocol
, public CLongClickableProtocol
{
public:
	CCheckBox();
	virtual ~CCheckBox();

	// 初始化默认属性
	virtual bool init();
	// 设置是否选中，并执行选中事件
	virtual void setChecked(bool bChecked);
	// 设置控件是否可用，不可用时不能接收触摸事件
	virtual void setEnabled(bool bEnabled);
	// 当设置大小时更新内容的位置
	virtual void setContentSize(const CCSize& tContentSize);

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	virtual void setNormalImage(const char* pFile);
	virtual void setNormalPressImage(const char* pFile);
	virtual void setCheckedImage(const char* pFile);
	virtual void setCheckedPressImage(const char* pFile);
	virtual void setDisabledNormalImage(const char* pFile);
	virtual void setDisabledCheckedImage(const char* pFile);

	virtual void setNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setNormalPressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setCheckedSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setCheckedPressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledCheckedSpriteFrame(CCSpriteFrame* pFrame);

	virtual void setNormalTexture(CCTexture2D *pTexture);
	virtual void setNormalPressTexture(CCTexture2D *pTexture);
	virtual void setCheckedTexture(CCTexture2D *pTexture);
	virtual void setCheckedPressTexture(CCTexture2D *pTexture);
	virtual void setDisabledNormalTexture(CCTexture2D *pTexture);
	virtual void setDisabledCheckedTexture(CCTexture2D *pTexture);

	virtual void setNormalSpriteFrameName(const char* pSpriteName);
	virtual void setNormalPressSpriteFrameName(const char* pSpriteName);
	virtual void setCheckedSpriteFrameName(const char* pSpriteName);
	virtual void setCheckedPressSpriteFrameName(const char* pSpriteName);
	virtual void setDisabledNormalSpriteFrameName(const char* pSpriteName);
	virtual void setDisabledCheckedSpriteFrameName(const char* pSpriteName);

	static CCheckBox* create();

	CC_WIDGET_LONGCLICK_SCHEDULE(CCheckBox);

protected:
	// 正常状态
	CCSprite* m_pNormal;
	// 正常按下状态
	CCSprite* m_pNormalPress;
	// 选中状态
	CCSprite* m_pChecked;
	// 选中按下状态
	CCSprite* m_pCheckedPress;
	// 不可用时的正常状态
	CCSprite* m_pDisabledNormal;
	// 不可用时的选中状态
	CCSprite* m_pDisabledChecked;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_CHECKBOX_H__