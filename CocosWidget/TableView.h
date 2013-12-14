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
#ifndef __CCWIDGET_TABLEVIEW_H__
#define __CCWIDGET_TABLEVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/// 
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <list>
#include <vector>
#include <set>

NS_CC_WIDGET_BEGIN

class CTableView;
class CTableViewCell;

/**
 * class    : CTableViewCell
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 列表控件单元格
 */
class CTableViewCell : public CPanel
{
public:
    CTableViewCell();
    virtual ~CTableViewCell();

	// 获取单元格下标
    unsigned int getIdx() { return m_uIdx; }
	// 设置单元格下标
    void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }
	// 单元格被加入空闲状态组时，清空状态
    virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
	// 单元格下标
    unsigned int m_uIdx;
};

/**
 * class    : CTableView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 列表控件
 */
class CTableView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
    CTableView();
    virtual ~CTableView();

	// 设置单元格数量
    void setCountOfCell(unsigned int uCellsCount);
	// 获取单元格数量
    unsigned int getCountOfCell() const;
	// 设置单元格大小
    void setSizeOfCell(const CCSize& tCellsSize);
	// 获取单元格大小
    const CCSize& getSizeOfCell() const;
	// 是否自动对齐单元格
	bool isAutoRelocate() const;
	// 设置自动对齐单元格
	void setAutoRelocate(bool bAuto);

	// 获取自动对齐到单元格时的速度
	float getAutoRelocateSpeed() const;
	// 设置自动对齐到单元格时的速度
	void setAutoRelocateSpeed(float fSpeed);

	// 获取所有正在使用的单元格
	CCArray* getCells();
	// 通过下标获取单元格
	CTableViewCell* cellAtIndex(unsigned int idx);
	// 弹出一个空闲的单元格
    CTableViewCell* dequeueCell();
	// 重新加载数据
	void reloadData();

	// 通过可视范围大小，单元格大小，单元格数量，数据适配器初始化
	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
		
    static CTableView* create(const CCSize& tViewSize);
	static CTableView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
    
protected:
    virtual void onScrolling();
	virtual void onDeaccelerateScrollEnded();
	virtual void onDraggingScrollEnded();

protected:
	void removeAllFromUsed();
    void removeAllFromFreed();
	void insertSortableCell(CTableViewCell* pCell, unsigned int idx);
	unsigned int cellBeginIndexFromOffset(const CCPoint& offset);
	unsigned int cellEndIndexFromOffset(const CCPoint& offset);
	CCPoint cellPositionFromIndex(unsigned int idx);
	virtual void updateCellAtIndex(unsigned int idx);
	void updatePositions();

protected:
    CCSize m_tCellsSize;
    unsigned int m_uCellsCount;
	bool m_bAutoRelocate;
	float m_fAutoRelocateSpeed;
    
	std::set<unsigned int>* m_pIndices;
	std::vector<float>* m_pPositions;
	std::list<CTableViewCell*>* m_pCellsUsed;
	std::list<CTableViewCell*>* m_pCellsFreed;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TABLEVIEW_H__
