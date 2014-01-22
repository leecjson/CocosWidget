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
#ifndef __CCWIDGET_TABLEVIEW_H__
#define __CCWIDGET_TABLEVIEW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <vector>
#include <set>

NS_CC_WIDGET_BEGIN

class CTableView;
class CTableViewCell;

/**
 * class  : CTableViewCell
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : table view cell define
 */
class CTableViewCell : public CLayout
{
public:
    CTableViewCell();
    virtual ~CTableViewCell();
    unsigned int getIdx() { return m_uIdx; }
    void setIdx(unsigned int uIdx) { m_uIdx = uIdx; }
    virtual void reset(){ m_uIdx = CC_INVALID_INDEX; }
    
protected:
    unsigned int m_uIdx;
};

/**
 * class  : CTableView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : table view define
 */
class CTableView : public CScrollView, public CDataSourceAdapterProtocol
{
public:
    CTableView();
    virtual ~CTableView();
	bool initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);
    static CTableView* create(const CCSize& tViewSize);
	static CTableView* create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler);

    void setCountOfCell(unsigned int uCellsCount);
    unsigned int getCountOfCell() const;
    void setSizeOfCell(const CCSize& tCellsSize);
    const CCSize& getSizeOfCell() const;
	bool isAutoRelocate() const;
	void setAutoRelocate(bool bAuto);
	float getAutoRelocateSpeed() const;
	void setAutoRelocateSpeed(float fSpeed);
	CCArray* getCells();
	CTableViewCell* cellAtIndex(unsigned int idx);
    CTableViewCell* dequeueCell();
	void reloadData();
    
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
    
	std::set<unsigned int> m_sIndices;
	std::vector<float> m_vPositions;
	std::vector<CTableViewCell*> m_vCellsUsed;
	std::vector<CTableViewCell*> m_vCellsFreed;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_TABLEVIEW_H__
