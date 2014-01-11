/****************************************************************************
Copyright (c) 2013 Lijunlin - Jason lee

Created by Lijunlin - Jason lee on 2014

jason.lee.c@foxmail.com
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

/**
 * class  : CGridPageViewPage
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CGridPageViewPage : public CTableViewCell
{
public:
	CGridPageViewPage();
	virtual ~CGridPageViewPage();

protected:
	friend class CGridPageView;
	std::vector<CGridPageViewCell*>& getGirdCells();
	std::vector<CGridPageViewCell*> m_vGirdCells;
};

/**
 * class  : CGridPageViewCell
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CGridPageViewCell : public CTableViewCell
{
public:
	CGridPageViewCell();
	virtual ~CGridPageViewCell();
};

/**
 * class  : CGridPageView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CGridPageView : public CTableView, public CPageChangeableProtocol
{
public:
	CGridPageView();
	virtual ~CGridPageView();
	static CGridPageView* create(const CCSize& tViewSize);
	static CGridPageView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

public:
	void setCountOfCell(unsigned int uCellsCount);
    unsigned int getCountOfCell() const;
    void setSizeOfCell(const CCSize& tCellsSize);
    const CCSize& getSizeOfCell() const;
	void setRows(unsigned int uRows);
	unsigned int getRows() const;
	void setColumns(unsigned int uColumns);
	unsigned int getColumns() const;
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