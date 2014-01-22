/****************************************************************************
Copyright (c) 2014 Lijunlin - Jason lee

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
#ifndef __CCWIDGET_GRIDVIEW_H__
#define __CCWIDGET_GRIDVIEW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <list>
#include <vector>
#include <set>

NS_CC_WIDGET_BEGIN

class CGridView;
class CGridViewCell;

/**
 * class  : CGridViewCell
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : grid view cell define
 */
class CGridViewCell : public CLayout
{
public:
    CGridViewCell();
	virtual ~CGridViewCell();
	unsigned int getIdx() const { return m_uIdx; }
	void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }
	unsigned int getRow() const { return m_uRow; }
	void setRow(unsigned int uRow) { m_uRow = uRow; }
	virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	unsigned int m_uRow;
    unsigned int m_uIdx;
};

/**
 * class  : CGridView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : grid view define
 */
class CGridView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
	CGridView();
	virtual ~CGridView();
	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
	static CGridView* create(const CCSize& tViewSize);
	static CGridView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

	void setCountOfCell(unsigned int uCellsCount);
    unsigned int getCountOfCell() const;
    void setSizeOfCell(const CCSize& tCellsSize);
    const CCSize& getSizeOfCell() const;
	void setColumns(unsigned int uColumns);
	unsigned int getColumns() const;
	unsigned int getRows() const;
	bool isAutoRelocate() const;
	void setAutoRelocate(bool bAuto);
	CCArray* getCells();
	CGridViewCell* cellAtIndex(unsigned int idx);
	CGridViewCell* dequeueCell();
	void reloadData();

protected:
	virtual void onScrolling();
	virtual void onDeaccelerateScrollEnded();
	virtual void onDraggingScrollEnded();

protected:
	void removeAllFromUsed();
    void removeAllFromFreed();
	void insertSortableCell(CGridViewCell* pCell, unsigned int idx);
	void updatePositions();
	void updateCellAtIndex(unsigned int idx, unsigned int row);
	const CCPoint& cellPositionFromIndex(unsigned int idx);
	unsigned int cellBeginRowFromOffset(const CCPoint& offset);
	unsigned int cellEndRowFromOffset(const CCPoint& offset);
	unsigned int cellFirstIndexFromRow(unsigned int row);

protected:
	CCSize m_tCellsSize;
    unsigned int m_uCellsCount;
	unsigned int m_uColumns;
	unsigned int m_uRows;
	bool m_bAutoRelocate;

	std::set<unsigned int> m_sIndices;
	std::list<CCPoint> m_lCellsRow;
	std::list<CGridViewCell*> m_lCellsUsed;
	std::list<CGridViewCell*> m_lCellsFreed;
	std::vector<CCPoint> m_vPositions;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_GRID_H__