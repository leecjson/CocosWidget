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
#include "PageView.h"

NS_CC_WIDGET_BEGIN

CPageView::CPageView()
{
	setAutoRelocate(true);
	setAutoRelocateSpeed(700.0f);
}

CPageView* CPageView::create(const CCSize& tPageSize)
{
	CPageView * pRet = new CPageView();
	if( pRet && pRet->initWithSize(tPageSize) )
    {
		
		pRet->setSizeOfCell(tPageSize);
		pRet->autorelease();
		return pRet;
    }
	CC_SAFE_DELETE(pRet);
	return NULL;
}

CPageView* CPageView::create(const CCSize& tPageSize, unsigned int uPageCount, CCObject* pListener, SEL_DataSoucreAdapterHandler pHandler)
{
	CPageView* pRet = new CPageView();
	if( pRet && pRet->initWithSize(tPageSize) )
	{
		pRet->setSizeOfCell(tPageSize);
		pRet->setCountOfCell(uPageCount);
		pRet->setDataSourceAdapter(pListener, pHandler);
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

void CPageView::onScrolling()
{
	if( m_uCellsCount == 0 )
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

void CPageView::updateCellAtIndex(unsigned int idx)
{
	CPageViewCell* pCell = (CPageViewCell*)(executeDataSourceAdapterHandler(dequeueCell(), idx));
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

	m_pIndices->insert(idx);
}

NS_CC_WIDGET_END