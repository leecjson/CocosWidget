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
#include "GridPageView.h"
using namespace std;

NS_CC_WIDGET_BEGIN

#define CGRIDPAGEVIEW_AUTO_RELOCATE_SPPED 900.0f

CGridPageViewPage::CGridPageViewPage()
{
	m_pGirdCells = new CCArray();
	m_pGirdCells->initWithCapacity(20);
}

CGridPageViewPage::~CGridPageViewPage()
{
	CC_SAFE_DELETE(m_pGirdCells);
}

CCArray* CGridPageViewPage::getGirdCells()
{
	return m_pGirdCells;
}

CGridPageViewCell::CGridPageViewCell()
{

}

CGridPageViewCell::~CGridPageViewCell()
{

}

CGridPageView::CGridPageView()
: m_uGridCellsCount(0)
, m_uColumns(0)
, m_uRows(0)
, m_tGridCellsSize(CCSizeZero)
, m_uCellsMaxCountInPage(0)
{
	m_fAutoRelocateSpeed = CGRIDPAGEVIEW_AUTO_RELOCATE_SPPED;
}

CGridPageView::~CGridPageView()
{

}

CGridPageView* CGridPageView::create(const CCSize& tViewSize)
{
	CGridPageView * pRet = new CGridPageView();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CGridPageView* CGridPageView::create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler)
{
	CGridPageView * pRet = new CGridPageView();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->setSizeOfCell(tCellSize);
		pRet->setCountOfCell(uCellCount);
		pRet->setDataSourceAdapter(pListener, pHandler);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CGridPageView::setCountOfCell(unsigned int uCellsCount)
{
	m_uGridCellsCount = uCellsCount;
}

unsigned int CGridPageView::getCountOfCell() const
{
	return m_uGridCellsCount;
}

void CGridPageView::setSizeOfCell(const CCSize& tCellsSize)
{
	m_tGridCellsSize = tCellsSize;
	CTableView::setSizeOfCell(m_obContentSize);
}

const CCSize& CGridPageView::getSizeOfCell() const
{
	return m_tGridCellsSize;
}

void CGridPageView::setRows(unsigned int uRows)
{
	m_uRows = uRows;
}

unsigned int CGridPageView::getRows() const
{
	return m_uRows;
}

void CGridPageView::setColumns(unsigned int uColumns)
{
	m_uColumns = uColumns;
}

unsigned int CGridPageView::getColumns() const
{
	return m_uColumns;
}

void CGridPageView::updateGridCellsPosition()
{
	float x = 0.0f;
	float y = m_obContentSize.height - m_tGridCellsSize.height;

	for(unsigned int i = 0; i < m_uCellsMaxCountInPage; ++i)
	{
		if( i != 0 && i % m_uColumns == 0 )
		{
			x = 0.0f;
			y = y - m_tGridCellsSize.height;
		}
		m_vGridCellsPosition.push_back(CCPoint(x, y));
		x += m_tGridCellsSize.width;
	}
}

void CGridPageView::updatePageCount()
{
	m_uCellsMaxCountInPage = m_uColumns * m_uRows;

	if( m_uGridCellsCount % m_uCellsMaxCountInPage == 0 )
	{
		m_uCellsCount = m_uGridCellsCount / m_uCellsMaxCountInPage;
	}
	else
	{
		m_uCellsCount = m_uGridCellsCount / m_uCellsMaxCountInPage + 1;
	}
}

void CGridPageView::reloadData()
{
	CCAssert(m_uColumns != 0, "reloadData");
	CCAssert(m_uRows != 0, "reloadData");
	CCAssert(m_tGridCellsSize.width != 0, "reloadData");
	CCAssert(m_tGridCellsSize.height != 0, "reloadData");

	this->updatePageCount();
	this->updateGridCellsPosition();
	CTableView::reloadData();
}

void CGridPageView::onScrolling()
{
	if( m_uGridCellsCount == 0 )
		return;

	CTableView::onScrolling();

	CCPoint tPageIdxOffset;
	switch( m_eDirection )
	{
	case eScrollViewDirectionHorizontal:
		tPageIdxOffset = getContentOffset() - CCPoint(m_obContentSize.width / 2, 0);
		break;
	case eScrollViewDirectionVertical:
		tPageIdxOffset = getContentOffset() + CCPoint(0, m_obContentSize.height / 2);
		break;
	default:
		break;
	}

	unsigned int nPage = cellBeginIndexFromOffset(tPageIdxOffset);
	if( nPage != m_nPageIndex )
	{
		m_nPageIndex = nPage;
		executePageChangedHandler(this, m_nPageIndex);
	}
}

void CGridPageView::updateCellAtIndex(unsigned int page)
{
	CGridPageViewPage* pPageCell = (CGridPageViewPage*) dequeueCell();

	if(!pPageCell)
	{
		pPageCell = new CGridPageViewPage();
		pPageCell->autorelease();

		CCArray* pGridCells = pPageCell->getGirdCells();
		unsigned int uBeginIdx = page * m_uCellsMaxCountInPage;
		unsigned int uEndIdx = uBeginIdx + m_uCellsMaxCountInPage;

		for( unsigned int idx = uBeginIdx, i = 0; idx < uEndIdx; ++idx, ++i )
		{
			CGridPageViewCell* pGridCell = NULL;
			if( idx < m_uGridCellsCount )
			{
				pGridCell = (CGridPageViewCell*) executeDataSourceAdapterHandler(NULL, idx);
#if 1
				CCAssert(pGridCell != NULL, "cell can not be nil");
#endif
				pGridCell->setAnchorPoint(CCPointZero);
				pGridCell->setContentSize(m_tGridCellsSize);
				pGridCell->setPosition(m_vGridCellsPosition[i]);
				pGridCell->setIdx(idx);
				pPageCell->addChild(pGridCell);
				pGridCells->addObject(pGridCell);
			}
			else
			{
				pGridCell = (CGridPageViewCell*) executeDataSourceAdapterHandler(NULL, CC_INVALID_INDEX);
#if 1
				CCAssert(pGridCell != NULL, "cell can not be nil");
#endif
				pGridCell->setAnchorPoint(CCPointZero);
				pGridCell->setContentSize(m_tGridCellsSize);
				pGridCell->setPosition(m_vGridCellsPosition[i]);
				pGridCell->setIdx(CC_INVALID_INDEX);
				pGridCell->reset();
				pPageCell->addChild(pGridCell);
				pGridCells->addObject(pGridCell);
			}
		}
	}
	else
	{
		CCArray* pGridCells = pPageCell->getGirdCells();
		unsigned int uBeginIdx = page * m_uCellsMaxCountInPage;
		unsigned int uEndIdx = uBeginIdx + m_uCellsMaxCountInPage;
		
		for( unsigned int idx = uBeginIdx, i = 0; idx < uEndIdx; ++idx, ++i )
		{
			CGridPageViewCell* pGridCell = (CGridPageViewCell*) pGridCells->objectAtIndex(i);
			if( idx < m_uGridCellsCount )
			{
				pGridCell->setIdx(idx);
				pGridCell = (CGridPageViewCell*) executeDataSourceAdapterHandler(pGridCell, idx);
#if 1
				CCAssert(pGridCell != NULL, "cell can not be nil");
#endif
			}
			else
			{
				pGridCell->setIdx(CC_INVALID_INDEX);
				pGridCell->reset();
				pGridCell = (CGridPageViewCell*) executeDataSourceAdapterHandler(pGridCell, CC_INVALID_INDEX);
#if 1
				CCAssert(pGridCell != NULL, "cell can not be nil");
#endif
			}
		}
	}

	pPageCell->setIdx(page);

	switch(m_eDirection)
	{
	case eScrollViewDirectionHorizontal:
		pPageCell->setAnchorPoint(CCPointZero);
		break;
	default:
		pPageCell->setAnchorPoint(CCPoint(0, 1));
		break;
	}
	
	pPageCell->setContentSize(m_tCellsSize);
	pPageCell->setPosition(cellPositionFromIndex(page));

    m_pContainer->addChild(pPageCell);
	insertSortableCell(pPageCell, page);
    pPageCell->retain();

	m_pIndices->insert(page);
}

NS_CC_WIDGET_END