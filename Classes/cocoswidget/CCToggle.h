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
#ifndef __CCWIDGET_TOGGLE_H__
#define __CCWIDGET_TOGGLE_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"
#include "CCWidget.h"
#include "CCButton.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CCToggle
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 开关控件
 */
class CCToggle : public CCButton, public CCCheckableProtocol
{
public:
	CCToggle();
	virtual ~CCToggle();
	virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void setEnabled(bool bEnabled);
	virtual void setChecked(bool bChecked);
	static CCToggle* create();
	static CCToggle* create(const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
	static CCToggle* createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);

};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TOGGLE_H__