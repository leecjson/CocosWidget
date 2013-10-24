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
#include "CCTable.h"
using namespace std;

NS_CC_WIDGET_BEGIN

#define CCTable_AUTO_RELOCATE_SPPED 350.0f

CCTableCell::CCTableCell()
: m_uIdx(CC_INVALID_INDEX)
{
    
}

CCTableCell::~CCTableCell()
{

}

CCTable::CCTable()
: m_uCellsCount(0)
, m_pDataSourceHandler(NULL)
, m_pDataSourceListener(NULL)
, m_tCellsSize(CCSizeZero)
, m_bAutoRelocate(false)
, m_fAutoRelocateSpeed(CCTable_AUTO_RELOCATE_SPPED)
{
	m_eDirection  = eScrollDirectionHorizontal;
	m_pIndices    = new set<unsigned int>();
	m_pPositions  = new vector<float>();
	m_pCellsUsed  = new list<CCTableCell*>();
	m_pCellsFreed = new list<CCTableCell*>();
}

CCTable::~CCTable()
{
	this->removeAllFromUsed();
	this->removeAllFromFreed();
	CC_SAFE_DELETE(m_pIndices);
	CC_SAFE_DELETE(m_pPositions);
	CC_SAFE_DELETE(m_pCellsUsed);
	CC_SAFE_DELETE(m_pCellsFreed);
}

CCTable* CCTable::create(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pTarget, SEL_TableDataSourceHandler pDataSourceHandler)
{
	CCTable* pRet = new CCTable();
	if( pRet && pRet->initWithParams(tViewSize, tCellSize, uCellCount, pTarget, pDataSourceHandler) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

bool CCTable::initWithParams(const CCSize& tViewSize, const CCSize& tCellSize, unsigned int uCellCount, 
		CCObject* pTarget, SEL_TableDataSourceHandler pDataSourceHandler)
{
	if( initWithSize(tViewSize) )
	{
		setSizeOfCell(tCellSize);
		setCountOfCell(uCellCount);
		setDataSourceSelector(pTarget, pDataSourceHandler);
		return true;
	}
	return false;
}

void CCTable::setCountOfCell(unsigned int uCellsCount)
{
	m_uCellsCount = uCellsCount; 
}

unsigned int CCTable::getCountOfCell() const
{
	return m_uCellsCount;
}

void CCTable::setSizeOfCell(const CCSize& tCellsSize) 
{ 
	m_tCellsSize = tCellsSize; 
}

const CCSize& CCTable::getSizeOfCell() const
{ 
	return m_tCellsSize;
}

bool CCTable::isAutoRelocate() const
{
	return m_bAutoRelocate;
}

void CCTable::setAutoRelocate(bool bAuto)
{
	m_bAutoRelocate = bAuto;
}

float CCTable::getAutoRelocateSpeed() const
{
	return m_fAutoRelocateSpeed;
}

void CCTable::setAutoRelocateSpeed(float fSpeed)
{
	m_fAutoRelocateSpeed = fSpeed;
}

void CCTable::setDataSourceSelector(CCObject* pTarget, SEL_TableDataSourceHandler pDataSourceHandler)
{
    if( pTarget && pDataSourceHandler )
    {
        m_pDataSourceHandler = pDataSourceHandler;
        m_pDataSourceListener = pTarget;
    }
}

CCTableCell* CCTable::executeDataSource(CCTable* pTable, unsigned int idx)
{
    if( m_pDataSourceListener && m_pDataSourceHandler )
    {
        return (m_pDataSourceListener->*m_pDataSourceHandler)(pTable, idx);
    }
    return NULL;
}

void CCTable::reloadData()
{
	if( !m_pDataSourceListener || !m_pDataSourceHandler )
	{
		return;
	}

    if( m_tCellsSize.width == 0 || m_tCellsSize.height == 0 )
    {
        return;
    }
    
    if( m_uCellsCount == 0 )
    {
        return;
    }
    
    if( m_eDirection == eScrollDirectionBoth )
    {
        return;
    }

	list<CCTableCell*>::iterator iter = m_pCellsUsed->begin();
	while(iter != m_pCellsUsed->end())
	{
		CCTableCell* pCell = (*iter);
		m_pCellsFreed->push_back(pCell);
		m_pContainer->removeChild(*iter, true);
		iter = m_pCellsUsed->erase(iter);
	}
    
	m_pIndices->clear();
    m_pPositions->clear();
	this->updatePositions();
	this->setContentOffsetToTop();
    this->onScrolling();
}

void CCTable::removeAllFromUsed()
{
	if( !m_pCellsUsed->empty() )
	{
		list<CCTableCell*>::iterator iter = m_pCellsUsed->begin();
		for(; iter != m_pCellsUsed->end(); ++iter)
		{
			m_pContainer->removeChild((*iter));
			(*iter)->release();
		}
		m_pCellsUsed->clear();
	}
}

void CCTable::removeAllFromFreed()
{
	if( !m_pCellsFreed->empty() )
	{
		list<CCTableCell*>::iterator iter = m_pCellsFreed->begin();
		for(; iter != m_pCellsFreed->end(); ++iter)
		{
			(*iter)->release();
		}
		m_pCellsFreed->clear();
	}
}

void CCTable::onScrolling()
{
    unsigned uBeginIdx = 0, uEndIdx = 0;

	uBeginIdx = cellBeginIndexFromOffset( getContentOffset() );
	uEndIdx = cellEndIndexFromOffset( getContentOffset() );
	
#if 0
	CCLOG("cell begin %u  end %u", uBeginIdx, uEndIdx);
#endif

    while( !m_pCellsUsed->empty() )
    {
        CCTableCell* pCell = m_pCellsUsed->front();
		unsigned int uIdx = pCell->getIdx();

        if( uIdx < uBeginIdx )
        {
			m_pIndices->erase(uIdx);
			m_pCellsUsed->pop_front();
            m_pCellsFreed->push_back(pCell);
            pCell->reset();
            m_pContainer->removeChild(pCell, true);
        }
        else
        {
            break;
        }
    }
    
    while( !m_pCellsUsed->empty() )
    {
        CCTableCell* pCell = m_pCellsUsed->back();
		unsigned int uIdx = pCell->getIdx();

        if( uIdx > uEndIdx && uIdx < m_uCellsCount )
        {
			m_pIndices->erase(uIdx);
			m_pCellsUsed->pop_back();
            m_pCellsFreed->push_back(pCell);
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
		if( m_pIndices->find(idx) != m_pIndices->end() )
		{
			continue;
		}
		updateCellAtIndex(idx);
    }
}

void CCTable::onDeaccelerateScrollEnded()
{
	onDraggingScrollEnded();
}

void CCTable::onDraggingScrollEnded()
{
	if( m_bAutoRelocate )
	{
		CCPoint tOffset = getContentOffset();
		unsigned int uIdx = cellBeginIndexFromOffset(tOffset);
		CCPoint tAPoint = cellPositionFromIndex(uIdx);

		if( m_eDirection == eScrollDirectionHorizontal )
		{
			CCPoint tBPoint = ccp(tAPoint.x + m_tCellsSize.width, 0);
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
			CCPoint tBPoint = ccp(0, tAPoint.y - m_tCellsSize.height);
			CCPoint tContentPoint = ccp(0, m_obContentSize.height);
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

CCTable* CCTable::create(const CCSize& tViewSize)
{
	CCTable * pRet = new CCTable();
	if( pRet && pRet->initWithSize(tViewSize) )
    {
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CCTableCell* CCTable::dequeueCell()
{
    CCTableCell* pCell = NULL;
    if( m_pCellsFreed->empty() )
    {
        return NULL;
    }
    else
    {
        pCell = m_pCellsFreed->front();
        m_pCellsFreed->pop_front();
        pCell->autorelease();
    }
    return pCell;
}

unsigned int CCTable::cellBeginIndexFromOffset(const CCPoint& offset)
{
    if( m_uCellsCount == 0 )
    {
        return CC_INVALID_INDEX;
    }

	switch( m_eDirection )
	{
	case eScrollDirectionHorizontal:
		{
			int xos = -offset.x;
			int uIdx = xos / m_tCellsSize.width;

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	default:
		{
			int ofy = offset.y + m_pContainer->getContentSize().height;
			int xos = ofy - m_obContentSize.height;
			int uIdx = xos / m_tCellsSize.height;

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	}
    
    return CC_INVALID_INDEX;
}

unsigned int CCTable::cellEndIndexFromOffset(const CCPoint& offset)
{
	if( m_uCellsCount == 0 )
    {
        return CC_INVALID_INDEX;
    }

	switch( m_eDirection )
	{
	case eScrollDirectionHorizontal:
		{
			int xos = -(offset.x + -m_obContentSize.width);
			int uIdx = xos / m_tCellsSize.width;

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	default:
		{
			int ofy = offset.y + m_pContainer->getContentSize().height;
			int uIdx = ofy / m_tCellsSize.height;

			uIdx = MAX(uIdx, 0);
			uIdx = MIN((int)m_uCellsCount - 1, uIdx);

			return (unsigned int)uIdx;
		}
	}

	return CC_INVALID_INDEX;
}

CCPoint CCTable::cellPositionFromIndex(unsigned int idx)
{
    if( idx == CC_INVALID_INDEX )
    {
        return ccp(0, 0);
    }
    
	switch( m_eDirection )
	{
	case eScrollDirectionHorizontal:
		{
			return ccp(m_pPositions->at(idx), 0);
		}
	default:
		{
			return ccp(0, m_pPositions->at(idx));
		}
	}

	return ccp(0, 0);
}

void CCTable::insertSortableCell(CCTableCell* pCell, unsigned int idx)
{
	if( m_pCellsUsed->empty() )
	{
		m_pCellsUsed->push_back(pCell);
	}
	else
	{
		list<CCTableCell*>::iterator iter = m_pCellsUsed->begin();
		for(; iter != m_pCellsUsed->end(); ++iter)
		{
			if( (*iter)->getIdx() > idx )
			{
				m_pCellsUsed->insert(iter, pCell);
				return;
			}
		}
		m_pCellsUsed->push_back(pCell);
		return;
	}
}

CCArray* CCTable::getCells()
{
	CCArray* pArray = new CCArray();
	pArray->initWithCapacity(10);

	if( !m_pCellsUsed->empty() )
	{
		list<CCTableCell*>::iterator iter = m_pCellsUsed->begin();
		for(; iter != m_pCellsUsed->end(); ++iter)
		{
			pArray->addObject(*iter);
		}
	}

	if( !m_pCellsFreed->empty() )
	{
		list<CCTableCell*>::iterator iter = m_pCellsFreed->begin();
		for(; iter != m_pCellsFreed->end(); ++iter)
		{
			pArray->addObject(*iter);
		}
	}

	pArray->autorelease();
	return pArray;
}

CCTableCell* CCTable::cellAtIndex(unsigned int idx)
{
	if( m_pIndices->find(idx) == m_pIndices->end() )
	{
		return NULL;
	}

    list<CCTableCell*>::iterator iter = m_pCellsUsed->begin();
    for(; iter != m_pCellsUsed->end() ; ++iter)
    {
        if( (*iter)->getIdx() == idx )
        {
            return (*iter);
        }
    }
    return NULL;
}

void CCTable::updateCellAtIndex(unsigned int idx)
{
	CCTableCell* pCell = executeDataSource(this, idx);
#if 0
    CCAssert(pCell != NULL, "cell can not be null");
#endif

	pCell->setIdx(idx);

	switch(m_eDirection)
	{
	case eScrollDirectionHorizontal:
		pCell->setAnchorPoint(CCPointZero);
		break;
	default:
		pCell->setAnchorPoint(ccp(0, 1));
		break;
	}
	
	pCell->setContentSize(m_tCellsSize);
	pCell->setPosition(cellPositionFromIndex(idx));

    m_pContainer->addChild(pCell);
	insertSortableCell(pCell, idx);
    pCell->retain();

	m_pIndices->insert(idx);
}

void CCTable::updatePositions()
{
	if( m_eDirection == eScrollDirectionHorizontal )
    {
		setContainerSize(CCSizeMake(m_tCellsSize.width * m_uCellsCount, m_tCellsSize.height));
        for(unsigned int i = 0; i < m_uCellsCount; ++i)
        {
            m_pPositions->push_back(m_tCellsSize.width * i);
        }
    }
    else
    {
		float fHeight = m_tCellsSize.height * m_uCellsCount;
		setContainerSize(CCSizeMake(m_tCellsSize.width, fHeight));
		fHeight = MAX(fHeight, m_obContentSize.height);	
        for(int i = m_uCellsCount - 1; i >= 0; --i)
        {
            m_pPositions->push_back(fHeight);
			fHeight -= m_tCellsSize.height;
        }
    }
}


NS_CC_WIDGET_END