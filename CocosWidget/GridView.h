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
#ifndef __CCWIDGET_GRIDVIEW_H__
#define __CCWIDGET_GRIDVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1] reloadData error fix, child already added.
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <list>
#include <vector>

NS_CC_WIDGET_BEGIN

class CGridView;
class CGridViewCell;

/**
 * class    : CGridViewCell
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 网格单元格控件定义
 */
class CGridViewCell : public CPanel
{
public:
    CGridViewCell();
	virtual ~CGridViewCell();

	// 获取单元格的下标
	unsigned int getIdx() const { return m_uIdx; }
	// 设置单元格的下标
	void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }
	// 获取单元格所在的行数
	unsigned int getRow() const { return m_uRow; }
	// 设置单元格所在的行数
	void setRow(unsigned int uRow) { m_uRow = uRow; }
	// 当单元格被加入空闲状态组时，清空状态
	virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	// 当前行数
	unsigned int m_uRow;
	// 当前下标
    unsigned int m_uIdx;
};

/**
 * class    : CGridView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 网格控件定义
 */
class CGridView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
	CGridView();
	virtual ~CGridView();

	// 设置单元格的数量
	void setCountOfCell(unsigned int uCellsCount);
	// 获取单元格数量
    unsigned int getCountOfCell() const;
	// 设置单元格大小
    void setSizeOfCell(const CCSize& tCellsSize);
	// 获取单元格大小
    const CCSize& getSizeOfCell() const;
	// 设置网格控件最大容纳多少列
	void setColumns(unsigned int uColumns);
	// 获取网格控件最大容纳多少列
	unsigned int getColumns() const;
	// 获取网格控件有多少行数据
	unsigned int getRows() const;
	// 获取是否自动对齐单元格
	bool isAutoRelocate() const;
	// 设置自动对齐单元格
	void setAutoRelocate(bool bAuto);
	// 获取所有正在使用的单元格
	CCArray* getCells();
	// 通过单元格下标获取单元格
	CGridViewCell* cellAtIndex(unsigned int idx);
	// 弹出一个空闲单元格
	CGridViewCell* dequeueCell();
	// 重新加载数据
	void reloadData();


	static CGridView* create(const CCSize& tViewSize);
	static CGridView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

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