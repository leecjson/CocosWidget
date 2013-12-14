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
#ifndef __CCWIDGET_GRIDPAGEVIEW_H__
#define __CCWIDGET_GRIDPAGEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// Update : [1] changed text "SEL_TableGridViewDataSourceHandler" to 
///              "SEL_TableGridViewDataSourceHandler"
/// Update : [2] changed text "tablegirddatasource_selector" to
///              "tablegirdviewdatasource_selector"
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "TableView.h"
#include "WidgetProtocol.h"
#include <vector>

NS_CC_WIDGET_BEGIN

class CGridPageView;
class CGridPageViewCell;
class CGridPageViewPage;

class CGridPageViewPage : public CTableViewCell
{
public:
	CGridPageViewPage();
	virtual ~CGridPageViewPage();
	CCArray* getGirdCells();

protected:
	/// 网格列表项的集合
	CCArray* m_pGirdCells;
};

/**
 * class    : CGridPageViewCell
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 网格页单元格控件定义
 */
class CGridPageViewCell : public CTableViewCell
{
public:
	CGridPageViewCell();
	virtual ~CGridPageViewCell();
};

/**
 * class    : CGridPageView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 网格页控件定义
 */
class CGridPageView : public CTableView, public CPageChangeableProtocol
{
public:
	CGridPageView();
	virtual ~CGridPageView();

	// 通过视图大小构造
	static CGridPageView* create(const CCSize& tViewSize);
	// 通过视图大小、单元格大小、单元格数量、数据适配器来初始化。
	static CGridPageView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

public:
	// 设置单元格数量
	void setCountOfCell(unsigned int uCellsCount);
	// 获取单元格数量
    unsigned int getCountOfCell() const;
	// 设置单元格大小
    void setSizeOfCell(const CCSize& tCellsSize);
	// 获取单元格大小
    const CCSize& getSizeOfCell() const;
	// 设置每页显示的行数
	void setRows(unsigned int uRows);
	// 获取每页显示的行数
	unsigned int getRows() const;
	// 设置每页显示的列数
	void setColumns(unsigned int uColumns);
	// 获取每页显示的列数
	unsigned int getColumns() const;
	// 重新加载数据
	void reloadData();

protected:
	virtual void onScrolling();
	void updateGridCellsPosition();
	void updatePageCount();
	virtual void updateCellAtIndex(unsigned int idx);

protected:
	CCSize m_tGridCellsSize;
	unsigned int m_uGridCellsCount;
	unsigned int m_uColumns;
	unsigned int m_uRows;
	unsigned int m_uCellsMaxCountInPage;

	std::vector<CCPoint> m_vGridCellsPosition;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_GRIDPAGEVIEW_H__