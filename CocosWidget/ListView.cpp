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
#include "ListView.h"
#include <algorithm>
using namespace std;

NS_CC_WIDGET_BEGIN

static const CCPoint ListViewHorizontalNodeAnchorPoint = CCPoint(0, 0);
static const CCPoint ListViewVerticalNodeAnchorPoint = CCPoint(0, 0);


CListView::CListView()
: m_fLayoutIndexSize(0.0f)
{
	m_eDirection = eScrollViewDirectionVertical;
}

CListView::~CListView()
{
	removeAllNodes();
}

CListView* CListView::create(const CCSize& contentSize)
{
	CListView* pRet = new CListView();
	if( pRet && pRet->initWithSize(contentSize) )
	{
		pRet->autorelease();
		return pRet;
	}
	CC_SAFE_DELETE(pRet);
	return NULL;
}

unsigned int CListView::getNodeCount() const
{
	return m_vNodeList.size();
}

CCArray* CListView::getNodes()
{
	CCArray* pArray = new CCArray();
	pArray->initWithCapacity(10);

	if( !m_vNodeList.empty() )
	{
		vector<CCNode*>::iterator iter = m_vNodeList.begin();
		vector<CCNode*>::iterator iend = m_vNodeList.end();

		for(; iter != iend; ++iter )
		{
			pArray->addObject(*iter);
		}
	}

	pArray->autorelease();
	return pArray;
}

CCNode* CListView::getNodeAtIndex(unsigned int idx)
{
	return m_vNodeList[idx];
}

void CListView::insertNodeAtLast(CCNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vNodeList.push_back(pNode);
	pNode->retain();
}

void CListView::insertNodeAtFront(CCNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vNodeList.insert(m_vNodeList.begin(), pNode);
	pNode->retain();
}

void CListView::insertNode(CCNode* pNode, CCNode* pTarget)
{
	CCAssert(pTarget && pNode, "should not null");

	unsigned int idx = 0;
	unsigned int end = m_vNodeList.size();

	for(; idx < end; ++idx )
	{
		if( pTarget == m_vNodeList[idx] )
		{
			m_vNodeList.insert(m_vNodeList.begin() + idx, pNode);
			pNode->retain();
		}
	}
}

void CListView::insertNode(CCNode* pNode, unsigned int idx)
{
	CCAssert(pNode, "should not null");

	if( idx >= m_vNodeList.size() )
	{
		insertNodeAtLast(pNode);
		return;
	}

	m_vNodeList.insert(m_vNodeList.begin() + idx, pNode);
	pNode->retain();
}

void CListView::removeNodeAtIndex(unsigned int idx)
{
	if( m_vNodeList.size() == 0 )
		return;

	m_vNodeList[idx]->release();
	m_vNodeList.erase(m_vNodeList.begin() + idx);
}

void CListView::removeNode(CCNode* pNode)
{
	CCAssert(pNode, "should not null");

	if( m_vNodeList.size() == 0 )
		return;

	vector<CCNode*>::iterator itr = std::find(
		m_vNodeList.begin(),
		m_vNodeList.end(),
		pNode);

	if( itr != m_vNodeList.end() )
	{
		pNode->release();
		m_vNodeList.erase(itr);
	}
}

void CListView::removeFrontNode()
{
	if( m_vNodeList.size() == 0 )
		return;

	m_vNodeList[0]->release();
	m_vNodeList.erase(m_vNodeList.begin());
}

void CListView::removeLastNode()
{
	if( m_vNodeList.size() == 0 )
		return;

	m_vNodeList[m_vNodeList.size() - 1]->release();
	m_vNodeList.pop_back();
}

void CListView::removeAllNodes()
{
	if( m_vNodeList.size() == 0 )
		return;

	unsigned int i = 0;
	unsigned int end = m_vNodeList.size();

	for(; i < end; ++i )
	{
		m_vNodeList[i]->release();
	}

	m_vNodeList.clear();
}

void CListView::updateNodesPosition()
{
	m_pContainer->removeAllChildrenWithCleanup(true);

	if( m_vNodeList.size() == 0 )
		return;

	m_fLayoutIndexSize = 0.0f;

	switch( m_eDirection )
	{
	case eScrollViewDirectionHorizontal:
		{
			unsigned int i = 0;
			unsigned int end = m_vNodeList.size();
			CCNode* pNode = NULL;

			for(; i < end; ++i )
			{
				pNode = m_vNodeList[i];
				pNode->setAnchorPoint(ListViewHorizontalNodeAnchorPoint);
				pNode->setPosition(CCPoint(m_fLayoutIndexSize, 0));
				m_fLayoutIndexSize += pNode->getContentSize().width;
			}

			setContainerSize(CCSize(m_fLayoutIndexSize, m_obContentSize.height));
		}
		break;
	case eScrollViewDirectionVertical:
		{
			float fAllNodesSize = 0.0f;

			unsigned int i = 0;
			unsigned int end = m_vNodeList.size();
			CCNode* pNode = NULL;

			for(; i < end; ++i )
			{
				pNode = m_vNodeList[i];
				fAllNodesSize += pNode->getContentSize().height;
			}

			m_fLayoutIndexSize = fAllNodesSize;
			fAllNodesSize = MAX(m_obContentSize.height, fAllNodesSize);
			setContainerSize(CCSize(m_obContentSize.width, fAllNodesSize));
			
			i = 0;
			end = m_vNodeList.size();

			for(; i < end; ++i )
			{
				pNode = m_vNodeList[i];
				fAllNodesSize = fAllNodesSize - pNode->getContentSize().height;
				pNode->setAnchorPoint(ListViewVerticalNodeAnchorPoint);
				pNode->setPosition(CCPoint(0, fAllNodesSize));

				m_pContainer->addChild(pNode);
			}
		}
		break;
	default:
		break;
	}
}

void CListView::reloadData()
{
	CCAssert( m_eDirection != eScrollViewDirectionBoth, "reloadData");

	if( m_eDirection == eScrollViewDirectionVertical )
	{
		float fOldHeight = getContainerSize().height;

		updateNodesPosition();

		float tNewHeight = getContainerSize().height - fOldHeight;

		setContentOffset(getContentOffset() - CCPoint(0, tNewHeight));
	}
	else
	{
		updateNodesPosition();
	}

	relocateContainer();
}

NS_CC_WIDGET_END