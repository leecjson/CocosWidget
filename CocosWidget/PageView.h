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
#ifndef __CCWIDGET_PAGEVIEW_H__
#define __CCWIDGET_PAGEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : [1] changed text "SEL_PageDataSourceHandler" to "SEL_PageViewDataSourceHandler"
/// Update : [2] changed text "SEL_PageChangedHandler" to "SEL_PageViewChangedHandler"
/// Update : [3] changed text "pagedatasource_selector" to "pageviewdatasource_selector"
/// Update : [4] changed text "pagechanged_selector" to "pageviewchanged_selector"
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "TableView.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

class CPageView;
class CPageViewCell;

/**
 * class    : CPageViewCell
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 滑动页单元格控件定义
 */
class CPageViewCell : public CTableViewCell
{
public:
	CPageViewCell(){};
};

/**
 * class    : CPageView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 滑动页控件定义
 */
class CPageView : public CTableView, public CPageChangeableProtocol
{
public:
	CPageView();
	static CPageView* create(const CCSize& tPageSize);
	static CPageView* create(const CCSize& tPageSize, unsigned int uPageCount,
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

protected:
	virtual void onScrolling();
	virtual void updateCellAtIndex(unsigned int idx);
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_PAGEVIEW_H__