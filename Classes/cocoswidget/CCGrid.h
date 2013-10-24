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
#ifndef __CCWIDGET_GRID_H__
#define __CCWIDGET_GRID_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "CCWidgetMacros.h"
#include "CCWidget.h"
#include "CCScroll.h"
#include <list>
#include <vector>

NS_CC_WIDGET_BEGIN

class CCGrid;
class CCGridCell;

/**
 * 名称 : SEL_GridDataSourceHandler
 * 功能 : 网格控件的数据项外部回调函数
 * 输入 : pGrid - 本网格控件
 *        idx - 目前正在处理第几个网格项
 * 输出 : 网格项
 */
typedef CCGridCell* (CCObject::*SEL_GridDataSourceHandler)(CCGrid* pGrid, unsigned int idx);
#define griddatasource_selector(__SELECTOR__) (cocos2d::cocoswidget::SEL_GridDataSourceHandler)(&__SELECTOR__)

/**
 * 类名 : CCGridCell
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 实现的网格项
 */
class CCGridCell : public CCPanel
{
public:
    CCGridCell();
	virtual ~CCGridCell();

	/**
	 * 名称 : getIdx()
	 * 功能 : 获取网格项的下标
	 * 输入 : 
	 * 输出 : 下标
	 */
	unsigned int getIdx() const { return m_uIdx; }

	/**
	 * 名称 : setIdx()
	 * 功能 : 设置网格项的下标
	 * 输入 : uIdx - 下标
	 * 输出 : 
	 */
	void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }

	/**
	 * 名称 : getRow()
	 * 功能 : 获取网格项所在的行数
	 * 输入 : 
	 * 输出 : 行数
	 */
	unsigned int getRow() const { return m_uRow; }

	/**
	 * 名称 : setRow()
	 * 功能 : 设置网格项所在的行数
	 * 输入 : uRow - 行数
	 * 输出 : 
	 */
	void setRow(unsigned int uRow) { m_uRow = uRow; }

	/**
	 * 名称 : reset()
	 * 功能 : 当网格项被加入空闲状态组时，清空状态
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	/// 当前行数
	unsigned int m_uRow;
	/// 当前下标
    unsigned int m_uIdx;
};

/**
 * 类名 : CCGrid
 * 作者 : [西安]-Viva
 * 邮箱 : csdn_viva@foxmail.com
 * 功能 : 实现的网格控件，只能有垂直滚动状态
 */
class CCGrid : public CCScroll
{
public:
	CCGrid();
	virtual ~CCGrid();

	/**
	 * 名称 : setCountOfCell()
	 * 功能 : 设置网格项的数量 需要reloadData生效
	 * 输入 : uCellsCount - 数量
	 * 输出 : 
	 */
	void setCountOfCell(unsigned int uCellsCount);

	/**
	 * 名称 : getCountOfCell()
	 * 功能 : 获取网格项的数量 需要reloadData生效
	 * 输入 : 
	 * 输出 : 数量
	 */
    unsigned int getCountOfCell() const;

	/**
	 * 名称 : setSizeOfCell()
	 * 功能 : 设置网格项的大小 需要reloadData生效
	 * 输入 : tCellsSize - 网格项的大小
	 * 输出 : 
	 */
    void setSizeOfCell(const CCSize& tCellsSize);

	/**
	 * 名称 : getSizeOfCell()
	 * 功能 : 获取网格项的大小 需要reloadData生效
	 * 输入 : 
	 * 输出 : 网格项的大小
	 */
    const CCSize& getSizeOfCell() const;

	/**
	 * 名称 : setColumns()
	 * 功能 : 设置网格控件最大容纳多少列 需要reloadData生效
	 * 输入 : uColumns - 列数
	 * 输出 : 
	 */
	void setColumns(unsigned int uColumns);

	/**
	 * 名称 : getColumns()
	 * 功能 : 获取网格控件最大容纳多少列 需要reloadData生效
	 * 输入 : 
	 * 输出 : 列数
	 */
	unsigned int getColumns() const;

	/**
	 * 名称 : getRows()
	 * 功能 : 获取网格控件最多有多少行 需要reloadData生效
	 * 输入 : 
	 * 输出 : 计算后的行数
	 */
	unsigned int getRows() const;

	/**
	 * 名称 : isAutoRelocate()
	 * 功能 : 获取是否自动对齐到Cell;
	 * 输入 : 
	 * 输出 : 是否自动对齐
	 */
	bool isAutoRelocate() const;

	/**
	 * 名称 : setAutoRelocate()
	 * 功能 : 设置是否自动对齐到Cell;
	 * 输入 : bAuto - 是否自动对齐
	 * 输出 : 
	 */
	void setAutoRelocate(bool bAuto);

	/**
	 * 名称 : setDataSourceSelector()
	 * 功能 : 设置网格控件的数据外部回调函数
	 * 输入 : pTarget - 处理对象
	 *        pDataSourceHandler - 处理函数
	 * 输出 : 
	 */
	void setDataSourceSelector(CCObject* pTarget, SEL_GridDataSourceHandler pDataSourceHandler);

	static CCGrid* create(const CCSize& tViewSize);
	static CCGrid* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pTarget, SEL_GridDataSourceHandler pDataSourceHandler);

	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount,
		CCObject* pTarget, SEL_GridDataSourceHandler pDataSourceHandler);

public:
	/**
	 * 名称 : getCells()
	 * 功能 : 获取所有网格项
	 * 输入 : 
	 * 输出 : 所有网格项
	 */
	CCArray* getCells();

	/**
	 * 名称 : cellAtIndex()
	 * 功能 : 获取网格项 通过下标，如果这个cell没有被使用，则返回NULL
	 * 输入 : idx - 下标
	 * 输出 : 网格项
	 */
	CCGridCell* cellAtIndex(unsigned int idx);

	/**
	 * 名称 : dequeueCell()
	 * 功能 : 弹出控件网格项队列头部的网格项
	 * 输入 : 
	 * 输出 : 网格项
	 */
	CCGridCell* dequeueCell();

	/**
	 * 名称 : reloadData()
	 * 功能 : 重新加载数据
	 * 输入 : 
	 * 输出 : 
	 */
	void reloadData();

protected:
	/**
	 * 名称 : executeDataSource()
	 * 功能 : 执行外部数据函数
	 * 输入 : pGrid - 本控件
	 *        idx - 当前处理的列表项下标
	 * 输出 : 网格项
	 */
	CCGridCell* executeDataSource(CCGrid* pGrid, unsigned int idx);

	/**
	 * 名称 : onScrolling()
	 * 功能 : 当滚动控件滚动时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onScrolling();

	/**
	 * 名称 : onDeaccelerateScrollEnded()
	 * 功能 : 当滚动控件减速滚动完成时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onDeaccelerateScrollEnded();

	/**
	 * 名称 : onDeaccelerateScrollEnded()
	 * 功能 : 当滚动控件拖拽滚动完成时调用
	 * 输入 : 
	 * 输出 : 
	 */
	virtual void onDraggingScrollEnded();

protected:
	void removeAllFromUsed();
    void removeAllFromFreed();
	void insertSortableCell(CCGridCell* pCell, unsigned int idx);
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
	std::list<CCGridCell*> m_lCellsUsed;
	std::list<CCGridCell*> m_lCellsFreed;
	std::vector<CCPoint> m_vPositions;

	SEL_GridDataSourceHandler m_pDataSourceHandler;
	CCObject* m_pDataSourceListener;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_GRID_H__