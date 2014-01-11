/****************************************************************************
Copyright (c) 2013 Lijunlin - Jason lee

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
#include "ExpandableListView.h"
using namespace std;

NS_CC_WIDGET_BEGIN

CExpandableNode::CExpandableNode()
: m_bExpanded(false)
, m_pExpandableListViewParent(NULL)
, m_nIdx(CC_INVALID_INDEX)
{

}

CExpandableNode::~CExpandableNode()
{
	removeAllItemNodes();
}

CExpandableNode* CExpandableNode::create()
{
	CExpandableNode* pRet = new CExpandableNode();
	pRet->init();
	pRet->setContentSize(CCSize(100, 100));
	pRet->setAnchorPoint(CCPoint(0.5f, 0.5f));
	pRet->autorelease();
	return pRet;
}

void CExpandableNode::insertItemNodeAtLast(CCNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vExpandableNodeItemList.push_back(pNode);
	pNode->retain();
}

void CExpandableNode::insertItemNodeAtFront(CCNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vExpandableNodeItemList.insert(m_vExpandableNodeItemList.begin(), pNode);
	pNode->retain();
}

void CExpandableNode::removeItemNode(CCNode* pNode)
{
	CCAssert(pNode, "should not null");

	if( m_vExpandableNodeItemList.size() == 0 )
		return;

	vector<CCNode*>::iterator itr = std::find(
		m_vExpandableNodeItemList.begin(),
		m_vExpandableNodeItemList.end(), 
		pNode);

	if( itr != m_vExpandableNodeItemList.end() )
	{
		pNode->release();
		m_vExpandableNodeItemList.erase(itr);
	}
}

void CExpandableNode::removeItemNodeAtIndex(unsigned int idx)
{
	if( m_vExpandableNodeItemList.size() == 0 )
		return;

	m_vExpandableNodeItemList[idx]->release();
	m_vExpandableNodeItemList.erase(m_vExpandableNodeItemList.begin() + idx);
}

void CExpandableNode::removeAllItemNodes()
{
	if( m_vExpandableNodeItemList.size() == 0 )
		return;

	vector<CCNode*>::iterator itr = m_vExpandableNodeItemList.begin();
	vector<CCNode*>::iterator end = m_vExpandableNodeItemList.end();

	for(; itr != end ; ++itr )
	{
		(*itr)->release();
	}

	m_vExpandableNodeItemList.clear();
}

void CExpandableNode::setExpanded(bool bExpanded)
{
	m_bExpanded = bExpanded;
}

bool CExpandableNode::isExpanded() const
{
	return m_bExpanded;
}

void CExpandableNode::setExpandableListViewParent(CExpandableListView* pListView)
{
	m_pExpandableListViewParent = pListView;
}

std::vector<CCNode*>& CExpandableNode::getExpandableNodeItemList()
{
	return m_vExpandableNodeItemList;
}

CWidgetTouchModel CExpandableNode::onTouchBegan(CCTouch* pTouch)
{
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;

	CCPoint tNodePoint = convertToNodeSpace(pTouch->getLocation());
	if( m_pChildren && m_pChildren->count() > 0 )
	{
		CCObject* pObject = NULL;
		CCARRAY_FOREACH_REVERSE( m_pChildren, pObject )
		{
			CCNode* pNode = dynamic_cast<CCNode*>(pObject);
			CWidget* pWidget = dynamic_cast<CWidget*>(pObject);
			if( pWidget && pNode->isVisible() && pWidget->isEnabled() && pWidget->isTouchEnabled() )
			{
				if( pNode->boundingBox().containsPoint(tNodePoint) )
				{
					m_eSelectedWidgetTouchModel = pWidget->executeTouchBeganHandler(pTouch);
					if( m_eSelectedWidgetTouchModel == eWidgetTouchNone )
					{
						m_pSelectedWidget = NULL;
						m_eSelectedWidgetTouchModel = eWidgetTouchNone;
					}
					else
					{
						m_pSelectedWidget = pWidget;
						return m_eSelectedWidgetTouchModel;
					}
				}
			}
		}
	}
	return eWidgetTouchTransient;
}

void CExpandableNode::onTouchMoved(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchMovedHandler(pTouch, fDuration);
	}
}

void CExpandableNode::onTouchEnded(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchEndedHandler(pTouch, fDuration);
	}
	else
	{
		CCAssert(m_pExpandableListViewParent, "parent should not null");

		CCPoint tPoint = m_pParent->convertToNodeSpace(pTouch->getLocation());
		if( boundingBox().containsPoint(tPoint) )
		{
			if( m_bExpanded )
			{
				m_bExpanded = false;
				m_pExpandableListViewParent->reloadData();
			}
			else
			{
				m_bExpanded = true;
				m_pExpandableListViewParent->reloadData();
			}
		}
	}
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;
}

void CExpandableNode::onTouchCancelled(CCTouch* pTouch, float fDuration)
{
	if( m_pSelectedWidget && !m_pSelectedWidget->isTouchInterrupted() )
	{
		m_pSelectedWidget->executeTouchCancelledHandler(pTouch, fDuration);
	}
	m_pSelectedWidget = NULL;
	m_eSelectedWidgetTouchModel = eWidgetTouchNone;
}










CExpandableListView::CExpandableListView()
{
	m_eDirection = eScrollViewDirectionVertical;
}

CExpandableListView::~CExpandableListView()
{
	removeAllExpandableNodes();
}

CExpandableListView* CExpandableListView::create(const CCSize& contentSize)
{
	CExpandableListView* pRet = new CExpandableListView();
	pRet->initWithSize(contentSize);
	pRet->autorelease();
	return pRet;
}

void CExpandableListView::expand(unsigned int idx)
{
	m_vExpandableNodeList[idx]->setExpanded(true);
}

void CExpandableListView::collapse(unsigned int idx)
{
	m_vExpandableNodeList[idx]->setExpanded(false);
}

void CExpandableListView::insertExpandableNodeAtLast(CExpandableNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vExpandableNodeList.push_back(pNode);
	pNode->retain();
	pNode->setExpandableListViewParent(this);
}

void CExpandableListView::insertExpandableNodeAtFront(CExpandableNode* pNode)
{
	CCAssert(pNode, "should not null");
	m_vExpandableNodeList.insert(m_vExpandableNodeList.begin(), pNode);
	pNode->retain();
	pNode->setExpandableListViewParent(this);
}

void CExpandableListView::removeExpandableNode(CExpandableNode* pNode)
{
	if( m_vExpandableNodeList.size() == 0 )
		return;

	vector<CExpandableNode*>::iterator itr = std::find(
			m_vExpandableNodeList.begin(),
			m_vExpandableNodeList.end(),
			pNode);

	if( itr != m_vExpandableNodeList.end() )
	{
		pNode->release();
		m_vExpandableNodeList.erase(itr);
	}
}

void CExpandableListView::removeExpandableNodeAtIndex(unsigned int idx)
{
	if( m_vExpandableNodeList.size() == 0 )
		return;

	m_vExpandableNodeList[idx]->release();
	m_vExpandableNodeList.erase(m_vExpandableNodeList.begin() + idx);
}

void CExpandableListView::removeLastExpandableNode()
{
	if( m_vExpandableNodeList.size() == 0 )
		return;

	m_vExpandableNodeList[m_vExpandableNodeList.size() - 1]->release();
	m_vExpandableNodeList.pop_back();
}

void CExpandableListView::removeFrontExpandableNode()
{
	if( m_vExpandableNodeList.size() == 0 )
		return;

	m_vExpandableNodeList[0]->release();
	m_vExpandableNodeList.erase(m_vExpandableNodeList.begin());
}

void CExpandableListView::removeAllExpandableNodes()
{
	if( m_vExpandableNodeList.size() == 0 )
		return;

	unsigned int i = 0;
	unsigned int end = m_vExpandableNodeList.size();

	for(; i < end; ++i )
	{
		m_vExpandableNodeList[i]->release();
	}

	m_vExpandableNodeList.clear();
}

CCArray* CExpandableListView::getExpandableNodes()
{
	CCArray* pArray = new CCArray();
	pArray->initWithCapacity(10);

	if( !m_vExpandableNodeList.empty() )
	{
		vector<CExpandableNode*>::iterator iter = m_vExpandableNodeList.begin();
		vector<CExpandableNode*>::iterator iend = m_vExpandableNodeList.end();

		for(; iter != iend; ++iter )
		{
			pArray->addObject(*iter);
		}
	}

	pArray->autorelease();
	return pArray;
}

unsigned int CExpandableListView::getExpandableNodeCount()
{
	return m_vExpandableNodeList.size();
}

CExpandableNode* CExpandableListView::getExpandableNodeAtIndex(unsigned int idx)
{
	return m_vExpandableNodeList[idx];
}

void CExpandableListView::updateNodesPosition()
{
	m_pContainer->removeAllChildrenWithCleanup(true);

	if( m_vExpandableNodeList.size() == 0 )
		return;

	float fAllNodesHeight = 0.0f;

	unsigned int uBegin = 0;
	unsigned int uEnd = m_vExpandableNodeList.size();

	for(; uBegin < uEnd; ++uBegin )
	{
		CExpandableNode* pExpandableNode = m_vExpandableNodeList[uBegin];
		fAllNodesHeight += pExpandableNode->getContentSize().height;

		if( pExpandableNode->isExpanded() )
		{
			vector<CCNode*>&  vNodeItemList = pExpandableNode->getExpandableNodeItemList();
			if( vNodeItemList.size() != 0 )
			{
				for( unsigned int i = 0; i < vNodeItemList.size(); ++i )
				{
					fAllNodesHeight += (vNodeItemList[i])->getContentSize().height;
				}
			}
		}
	}

	fAllNodesHeight = MAX(m_obContentSize.height, fAllNodesHeight);
	setContainerSize(CCSize(m_obContentSize.width, fAllNodesHeight));

	uBegin = 0;
	uEnd = m_vExpandableNodeList.size();

	for(; uBegin < uEnd; ++uBegin )
	{
		CExpandableNode* pExpandableNode = m_vExpandableNodeList[uBegin];
		fAllNodesHeight = fAllNodesHeight - pExpandableNode->getContentSize().height;

		pExpandableNode->setAnchorPoint(CCPointZero);
		pExpandableNode->setPosition(CCPoint(0, fAllNodesHeight));
		m_pContainer->addChild(pExpandableNode);

		if( pExpandableNode->isExpanded() )
		{
			vector<CCNode*>& vNodeItemList = pExpandableNode->getExpandableNodeItemList();
			if( vNodeItemList.size() != 0 )
			{
				for( unsigned int i = 0; i < vNodeItemList.size(); ++i )
				{
					CCNode* pNode = vNodeItemList[i];
					fAllNodesHeight = fAllNodesHeight - pNode->getContentSize().height;

					pNode->setAnchorPoint(CCPointZero);
					pNode->setPosition(CCPoint(0, fAllNodesHeight));
					m_pContainer->addChild(pNode);
				}
			}
		}
	}
}

void CExpandableListView::reloadData()
{
	CCAssert(m_eDirection == eScrollViewDirectionVertical, "should be Vertical");

	float fOldHeight = getContainerSize().height;

	updateNodesPosition();

	float tNewHeight = getContainerSize().height - fOldHeight;

	setContentOffset(getContentOffset() - CCPoint(0, tNewHeight));

	relocateContainer();
}

NS_CC_WIDGET_END