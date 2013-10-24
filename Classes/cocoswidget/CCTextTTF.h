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
#ifndef __CCWIDGET_TEXTTTF_H__
#define __CCWIDGET_TEXTTTF_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"
#include "CCWidget.h"

NS_CC_WIDGET_BEGIN

/**
 * 类名 : CCTextTTF
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 可接收事件的文本
 */
class CCTextTTF : public CCLabelTTF, public CCWidget
{
public:
	CCTextTTF();
	virtual ~CCTextTTF();

	/**
	 * 名称 : visit()
	 * 功能 : 覆盖visit，传递每帧到CCWidget中
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void visit(){ CCLabelTTF::visit(); onTouchedUpdate(); }

	/**
	 * 名称 : onTouchBegan()
	 * 功能 : 改变返回值为 暂时性处理事件
	 * 输入 : 
	 * 输出 : eWidgetTouchTransient
	 */
    virtual CCWidgetTouchModel onTouchBegan(CCTouch *pTouch);

	/**
	 * 名称 : onTouchEnded()
	 * 功能 : 触摸结束时调用
	 * 输入 : pTouch - 触摸信息
	 *        fDuration - 触摸开始后距现在经过的时间
	 * 输出 : 判断是否执行Click
	 */
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);

	static CCTextTTF* create();
	static CCTextTTF* create(const char *pString, const char *pFontName, float fFontSize);
	static CCTextTTF* create(const char *pString, const char *pFontName, float fFontSize,
		const CCSize& tDimensions, CCTextAlignment hAlignment);
	static CCTextTTF* create(const char *pString, const char *pFontName, float fFontSize,
		const CCSize& tDimensions, CCTextAlignment hAlignment, CCVerticalTextAlignment vAlignment);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TEXT_H__