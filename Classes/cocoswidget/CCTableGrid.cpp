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
#include "CCTableGrid.h"
using namespace std;

NS_CC_WIDGET_BEGIN

#define CCTableGrid_AUTO_RELOCATE_SPPED 900.0f

CCTableGridPage::CCTableGridPage()
{
	m_pGirdCells = new CCArray();
	m_pGirdCells->initWithCapacity(20);
}

CCTableGridPage::~CCTableGridPage()
{
	CC_SAFE_DELETE(m_pGirdCells);
}

CCArray* CCTableGridPage::getGirdCells()
{
	return m_pGirdCells;
}

CCTableGridCell::CCTableGridCell()
{

}

CCTableGridCell::~CCTableGridCell()
{

}

CCTableGrid::CCTableGrid()
: m_uGridCellsCount(0)
, m_uColumns(0)
, m_uRows(0)
, m_tGridCellsSize(CCSizeZero)
, m_pTableGridDataSourceHandler(NULL)
, m_pTableGridDataSourceListener(NULL)
, m_uCellsMaxCountInPage(0)
{
	m_fAutoRelocateSpeed = CCTableGrid_AUTO_RELOCATE_SPPED;
}

CCTableGrid::~CCTableGrid()
{

}

CCTableGrid* CCTableGrid::create(const CCSize& tViewSize)
{
	CCTableGrid * pRet = new CCTableGrid();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCTableGrid* CCTableGrid::create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pTarget, SEL_TableGridDataSourceHandler pDataSourceHandler)
{
	CCTableGrid * pRet = new CCTableGrid();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->setSizeOfCell(tCellSize);
		pRet->setCountOfCell(uCellCount);
		pRet->setDataSourceSelector(pTarget, pDataSourceHandler);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CCTableGrid::setCountOfCell(unsigned int uCellsCount)
{
	m_uGridCellsCount = uCellsCount;
}

unsigned int CCTableGrid::getCountOfCell() const
{
	return m_uGridCellsCount;
}

void CCTableGrid::setSizeOfCell(const CCSize& tCellsSize)
{
	m_tGridCellsSize = tCellsSize;
	CCTable::setSizeOfCell(m_obContentSize);
}

const CCSize& CCTableGrid::getSizeOfCell() const
{
	return m_tGridCellsSize;
}

void CCTableGrid::setRows(unsigned int uRows)
{
	m_uRows = uRows;
}

unsigned int CCTableGrid::getRows() const
{
	return m_uRows;
}

void CCTableGrid::setColumns(unsigned int uColumns)
{
	m_uColumns = uColumns;
}

unsigned int CCTableGrid::getColumns() const
{
	return m_uColumns;
}

void CCTableGrid::setDataSourceSelector(CCObject* pTarget, SEL_TableGridDataSourceHandler pHandler)
{
	if( pTarget && pHandler )
	{
		m_pTableGridDataSourceListener = pTarget;
		m_pTableGridDataSourceHandler = pHandler;
	}
}

CCTableGridCell* CCTableGrid::executeDataSource(CCTableGrid* pTableGrid, CCTableGridCell* pCell, unsigned int idx)
{
	if( m_pTableGridDataSourceHandler && m_pTableGridDataSourceListener )
	{
		return (m_pTableGridDataSourceListener->*m_pTableGridDataSourceHandler)(pTableGrid, pCell, idx);
	}
	return NULL;
}

void CCTableGrid::updateGridCellsPosition()
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
		m_vGridCellsPosition.push_back(ccp(x, y));
		x += m_tGridCellsSize.width;
	}
}

void CCTableGrid::updatePageCount()
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

void CCTableGrid::reloadData()
{
	if( m_uColumns == 0 || m_uRows == 0 || m_uGridCellsCount == 0 || m_tGridCellsSize.width == 0 || m_tGridCellsSize.height == 0 )
	{
		return;
	}

	if( !m_pTableGridDataSourceHandler || !m_pTableGridDataSourceListener )
	{
		return;
	}

	CCTable::setDataSourceSelector(this, tabledatasource_selector(CCTableGrid::tableDataSource));
	this->updatePageCount();
	this->updateGridCellsPosition();
	CCTable::reloadData();
}

CCTableCell* CCTableGrid::tableDataSource(CCTable* pTable, unsigned int page)
{
	CCTableGridPage* pPageCell = (CCTableGridPage*)(pTable->dequeueCell());
	if(!pPageCell)
	{
		pPageCell = new CCTableGridPage();
		pPageCell->autorelease();

		CCArray* pGridCells = pPageCell->getGirdCells();
		unsigned int uBeginIdx = page * m_uCellsMaxCountInPage;
		unsigned int uEndIdx = uBeginIdx + m_uCellsMaxCountInPage;

		for( unsigned int idx = uBeginIdx, i = 0; idx < uEndIdx; ++idx, ++i )
		{
			CCTableGridCell* pGridCell = NULL;
			if( idx < m_uGridCellsCount )
			{
				pGridCell = executeDataSource(this, NULL, idx);
				pGridCell->setAnchorPoint(CCPointZero);
				pGridCell->setContentSize(m_tGridCellsSize);
				pGridCell->setPosition(m_vGridCellsPosition[i]);
				pGridCell->setIdx(idx);
				pPageCell->addChild(pGridCell);
				pGridCells->addObject(pGridCell);
			}
			else
			{
				pGridCell = executeDataSource(this, NULL, CC_INVALID_INDEX);
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
			CCTableGridCell* pGridCell = (CCTableGridCell*) pGridCells->objectAtIndex(i);
			if( idx < m_uGridCellsCount )
			{
				pGridCell->setIdx(idx);
				pGridCell = executeDataSource(this, pGridCell, idx);
			}
			else
			{
				pGridCell->setIdx(CC_INVALID_INDEX);
				pGridCell->reset();
				pGridCell = executeDataSource(this, pGridCell, CC_INVALID_INDEX);
			}
		}
	}
	return pPageCell;
}

NS_CC_WIDGET_END