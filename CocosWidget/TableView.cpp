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
#include "TableView.h"
using namespace std;

NS_CC_WIDGET_BEGIN

#define CTABLEVIEW_AUTO_RELOCATE_SPPED 350.0f

CTableViewCell::CTableViewCell()
: m_uIdx(CC_INVALID_INDEX)
{
    
}

CTableViewCell::~CTableViewCell()
{

}

CTableView::CTableView()
: m_uCellsCount(0)
, m_tCellsSize(CCSizeZero)
, m_bAutoRelocate(false)
, m_fAutoRelocateSpeed(CTABLEVIEW_AUTO_RELOCATE_SPPED)
{
	m_eDirection  = eScrollViewDirectionHorizontal;
}

CTableView::~CTableView()
{
	this->removeAllFromUsed();
	this->removeAllFromFreed();
}

CTableView* CTableView::create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler)
{
	CTableView* pRet = new CTableView();
	if( pRet && pRet->initWithParams(tViewSize, tCellSize, uCellCount, pListener, pHandler) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CTableView::initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler)
{
	if( initWithSize(tViewSize) )
	{
		setSizeOfCell(tCellSize);
		setCountOfCell(uCellCount);
		setDataSourceAdapter(pListener, pHandler);
		return true;
	}
	return false;
}

void CTableView::setCountOfCell(unsigned int uCellsCount)
{
	m_uCellsCount = uCellsCount; 
}

unsigned int CTableView::getCountOfCell() const
{
	return m_uCellsCount;
}

void CTableView::setSizeOfCell(const CCSize& tCellsSize) 
{ 
	m_tCellsSize = tCellsSize; 
}

const CCSize& CTableView::getSizeOfCell() const
{ 
	return m_tCellsSize;
}

bool CTableView::isAutoRelocate() const
{
	return m_bAutoRelocate;
}

void CTableView::setAutoRelocate(bool bAuto)
{
	m_bAutoRelocate = bAuto;
}

float CTableView::getAutoRelocateSpeed() const
{
	return m_fAutoRelocateSpeed;
}

void CTableView::setAutoRelocateSpeed(float fSpeed)
{
	m_fAutoRelocateSpeed = fSpeed;
}

void CTableView::reloadData()
{
#if USING_LUA
	CCAssert(
		(m_nDataSourceAdapterScriptHandler != 0) ||
		(m_pDataSourceAdapterListener && m_pDataSourceAdapterHandler), "reloadData");
#else
	CCAssert(m_pDataSourceAdapterListener && m_pDataSourceAdapterHandler, "reloadData");
#endif
	CCAssert((int)m_tCellsSize.width != 0 && (int)m_tCellsSize.height != 0, "reloadData");
    CCAssert(m_eDirection != eScrollViewDirectionBoth, "reloadData");

	vector<CTableViewCell*>::iterator itr = m_vCellsUsed.begin();
	vector<CTableViewCell*>::iterator end = m_vCellsUsed.end();

	for(; itr != end; ++itr )
	{
		CTableViewCell* pCell = (*itr);
		m_vCellsFreed.push_back(pCell);
		m_pContainer->removeChild(pCell, true);
		pCell->reset();
	}

	m_vCellsUsed.clear();

	m_sIndices.clear();
	m_vPositions.clear();
	this->updatePositions();
	this->setContentOffsetToTop();
    this->onScrolling();

	relocateContainer();
}

void CTableView::removeAllFromUsed()
{
	if( !m_vCellsUsed.empty() )
	{
		vector<CTableViewCell*>::iterator iter = m_vCellsUsed.begin();
		for(; iter != m_vCellsUsed.end(); ++iter )
		{
			m_pContainer->removeChild((*iter));
			(*iter)->release();
		}
		m_vCellsUsed.clear();
	}
}

void CTableView::removeAllFromFreed()
{
	if( !m_vCellsFreed.empty() )
	{
		vector<CTableViewCell*>::iterator iter = m_vCellsFreed.begin();
		for(; iter != m_vCellsFreed.end(); ++iter)
		{
			(*iter)->release();
		}
		m_vCellsFreed.clear();
	}
}

void CTableView::onScrolling()
{
	if( m_uCellsCount == 0 )
		return;

    unsigned uBeginIdx = 0, uEndIdx = 0;

	uBeginIdx = cellBeginIndexFromOffset( getContentOffset() );
	uEndIdx = cellEndIndexFromOffset( getContentOffset() );
	
#if 0
	CCLOG("cell begin %u  end %u", uBeginIdx, uEndIdx);
#endif

	while( !m_vCellsUsed.empty() )
    {
        CTableViewCell* pCell = m_vCellsUsed.front();
		unsigned int uIdx = pCell->getIdx();

        if( uIdx < uBeginIdx )
        {
			m_sIndices.erase(uIdx);
			m_vCellsUsed.erase(m_vCellsUsed.begin());
            m_vCellsFreed.push_back(pCell);
            pCell->reset();
            m_pContainer->removeChild(pCell, true);
        }
        else
        {
            break;
        }
    }

	while( !m_vCellsUsed.empty() )
    {
        CTableViewCell* pCell = m_vCellsUsed.back();
		unsigned int uIdx = pCell->getIdx();

        if( uIdx > uEndIdx && uIdx < m_uCellsCount )
        {
			m_sIndices.erase(uIdx);
			m_vCellsUsed.pop_back();
            m_vCellsFreed.push_back(pCell);
            pCell->reset();
            m_pContainer->removeChild(pCell, true);
        }
        else
        {
            break;
        }
    }
    
    for( unsigned int idx = uBeginIdx; idx <= uEndIdx && idx < m_uCellsCount; ++idx )
    {
		if( m_sIndices.find(idx) != m_sIndices.end() )
		{
			continue;
		}
		updateCellAtIndex(idx);
    }
}

void CTableView::onDeaccelerateScrollEnded()
{
	onDraggingScrollEnded();
}

void CTableView::onDraggingScrollEnded()
{
	if( m_uCellsCount == 0 )
		return;

	if( m_bAutoRelocate )
	{
		CCPoint tOffset = getContentOffset();
		unsigned int uIdx = cellBeginIndexFromOffset(tOffset);
		CCPoint tAPoint = cellPositionFromIndex(uIdx);

		if( m_eDirection == eScrollViewDirectionHorizontal )
		{
			CCPoint tBPoint = CCPoint(tAPoint.x + m_tCellsSize.width, 0);
			float fADistance = tOffset.getDistance(-tAPoint);
			float fBDistance = tOffset.getDistance(-tBPoint);

			if( fADistance < fBDistance )
			{
				float fDuration = fabs(fADistance) / m_fAutoRelocateSpeed;
				setContentOffsetInDuration(-tAPoint, fDuration);
			}
			else
			{
				float fDuration = fabs(fBDistance) / m_fAutoRelocateSpeed;
				setContentOffsetInDuration(-tBPoint, fDuration);
			}
		}
		else
		{
			CCPoint tBPoint = CCPoint(0, tAPoint.y - m_tCellsSize.height);
			CCPoint tContentPoint = CCPoint(0, m_obContentSize.height);
			tOffset = tOffset - tContentPoint;
			float fADistance = tOffset.getDistance(-tAPoint);
			float fBDistance = tOffset.getDistance(-tBPoint);
			
			if( fADistance < fBDistance )
			{
				float fDuration = fabs(fADistance) / m_fAutoRelocateSpeed;
				setContentOffsetInDuration(-tAPoint + tContentPoint, fDuration);
			}
			else
			{
				float fDuration = fabs(fBDistance) / m_fAutoRelocateSpeed;
				setContentOffsetInDuration(-tBPoint + tContentPoint, fDuration);
			}
		}
	}
}

CTableView* CTableView::create(const CCSize& tViewSize)
{
	CTableView * pRet = new CTableView();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CTableViewCell* CTableView::dequeueCell()
{
	CTableViewCell* pCell = NULL;
    if( m_vCellsFreed.empty() )
    {
        return NULL;
    }
    else
    {
		pCell = m_vCellsFreed.back();
		m_vCellsFreed.pop_back();
        pCell->autorelease();
    }
    return pCell;
}

unsigned int CTableView::cellBeginIndexFromOffset(const CCPoint& offset)
{
    if( m_uCellsCount == 0 )
    {
        return CC_INVALID_INDEX;
    }

	switch( m_eDirection )
	{
	case eScrollViewDirectionHorizontal:
		{
			float xos = -offset.x;
			int uIdx = (int)(xos / m_tCellsSize.width);

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	default:
		{
			float ofy = offset.y + m_pContainer->getContentSize().height;
			float xos = ofy - m_obContentSize.height;
			int uIdx = (int)(xos / m_tCellsSize.height);

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	}
    
    return CC_INVALID_INDEX;
}

unsigned int CTableView::cellEndIndexFromOffset(const CCPoint& offset)
{
	if( m_uCellsCount == 0 )
    {
        return CC_INVALID_INDEX;
    }

	switch( m_eDirection )
	{
	case eScrollViewDirectionHorizontal:
		{
			float xos = -(offset.x + -m_obContentSize.width);
			int uIdx = (int)(xos / m_tCellsSize.width);

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	default:
		{
			float ofy = offset.y + m_pContainer->getContentSize().height;
			int uIdx = (int)(ofy / m_tCellsSize.height);

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	}

	return CC_INVALID_INDEX;
}

CCPoint CTableView::cellPositionFromIndex(unsigned int idx)
{
    if( idx == CC_INVALID_INDEX )
    {
        return CCPoint(0, 0);
    }
    
	switch( m_eDirection )
	{
	case eScrollViewDirectionHorizontal:
		{
			return CCPoint(m_vPositions[idx], 0);
		}
	default:
		{
			return CCPoint(0, m_vPositions[idx]);
		}
	}

	return CCPoint(0, 0);
}

void CTableView::insertSortableCell(CTableViewCell* pCell, unsigned int idx)
{
	if( m_vCellsUsed.empty() )
	{
		m_vCellsUsed.push_back(pCell);
	}
	else
	{
		vector<CTableViewCell*>::iterator iter = m_vCellsUsed.begin();
		vector<CTableViewCell*>::iterator iend = m_vCellsUsed.end();

		for(; iter != iend; ++iter )
		{
			if( (*iter)->getIdx() > idx )
			{
				m_vCellsUsed.insert(iter, pCell);
				return;
			}
		}
		m_vCellsUsed.push_back(pCell);
		return;
	}
}

CCArray* CTableView::getCells()
{
	CCArray* pArray = new CCArray();
	pArray->initWithCapacity(10);

	if( !m_vCellsUsed.empty() )
	{
		vector<CTableViewCell*>::iterator iter = m_vCellsUsed.begin();
		vector<CTableViewCell*>::iterator iend = m_vCellsUsed.end();

		for(; iter != iend; ++iter )
		{
			pArray->addObject(*iter);
		}
	}

	pArray->autorelease();
	return pArray;
}

CTableViewCell* CTableView::cellAtIndex(unsigned int idx)
{
	if( m_sIndices.find(idx) == m_sIndices.end() )
	{
		return NULL;
	}

    vector<CTableViewCell*>::iterator iter = m_vCellsUsed.begin();
	vector<CTableViewCell*>::iterator iend = m_vCellsUsed.end();

    for(; iter != iend; ++iter )
    {
        if( (*iter)->getIdx() == idx )
        {
            return (*iter);
        }
    }
    return NULL;
}

void CTableView::updateCellAtIndex(unsigned int idx)
{
	CTableViewCell* pCell = (CTableViewCell*)(executeDataSourceAdapterHandler(dequeueCell(), idx));
#if 1
    CCAssert(pCell != NULL, "cell can not be nil");
#endif

	pCell->setIdx(idx);

	switch(m_eDirection)
	{
	case eScrollViewDirectionHorizontal:
		pCell->setAnchorPoint(CCPointZero);
		break;
	default:
		pCell->setAnchorPoint(CCPoint(0, 1));
		break;
	}
	
	pCell->setContentSize(m_tCellsSize);
	pCell->setPosition(cellPositionFromIndex(idx));

    m_pContainer->addChild(pCell);
	insertSortableCell(pCell, idx);
    pCell->retain();

	m_sIndices.insert(idx);
}

void CTableView::updatePositions()
{
	if( m_eDirection == eScrollViewDirectionHorizontal )
    {
		setContainerSize(CCSizeMake(m_tCellsSize.width * m_uCellsCount, m_tCellsSize.height));
        for(unsigned int i = 0; i < m_uCellsCount; ++i)
        {
            m_vPositions.push_back(m_tCellsSize.width * i);
        }
    }
    else
    {
		float fHeight = m_tCellsSize.height * m_uCellsCount;
		setContainerSize(CCSizeMake(m_tCellsSize.width, fHeight));
		fHeight = MAX(fHeight, m_obContentSize.height);	
        for(int i = m_uCellsCount - 1; i >= 0; --i)
        {
            m_vPositions.push_back(fHeight);
			fHeight -= m_tCellsSize.height;
        }
    }
}


NS_CC_WIDGET_END