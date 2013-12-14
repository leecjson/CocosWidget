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
#ifndef __CCWIDGET_TOGGLEVIEW_H__
#define __CCWIDGET_TOGGLEVIEW_H__

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
 * class    : CToggleView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 开关按钮控件
 */
class CToggleView : public CButton, public CCheckableProtocol
{
public:
	CToggleView();
	virtual ~CToggleView();

	// 设置是否可用
	virtual void setEnabled(bool bEnabled);
	// 设置选择状态
	virtual void setChecked(bool bChecked);

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);
	
	static CToggleView* create();
	static CToggleView* create(const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
	static CToggleView* createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TOGGLEVIEW_H__