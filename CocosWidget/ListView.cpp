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
#include "ListView.h"
using namespace std;

NS_CC_WIDGET_BEGIN

CListView::CListView()
: m_fNodesSize(0.0f)
{

}

CListView::~CListView()
{

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
	return m_lNodeList.size();
}

CCArray* CListView::getNodes()
{
	if( !m_lNodeList.empty() )
	{
		CCArray* pArray = new CCArray(m_lNodeList.size());
		pArray->autorelease();

		list<CCNode*>::iterator itr = m_lNodeList.begin();
		for(; itr != m_lNodeList.end(); ++itr)
		{
			pArray->addObject(*itr);
		}
		return pArray;
	}
	return NULL;
}

void CListView::insertNodeAtLast(CCNode* pNode)
{
	CCSize tNodeSize = pNode->getContentSize();
	if( m_eDirection == eScrollViewDirectionHorizontal )
	{
		setContainerSize(CCSize(m_fNodesSize + tNodeSize.width, m_obContentSize.height));
		pNode->setAnchorPoint(CCPointZero);
		pNode->setPosition(CCPoint(m_fNodesSize, 0));
		m_pContainer->addChild(pNode);
		m_lNodeList.push_back(pNode);

		m_fNodesSize += tNodeSize.width;
	}
	else if( m_eDirection == eScrollViewDirectionVertical )
	{
		pNode->setAnchorPoint(CCPointZero);
		m_pContainer->addChild(pNode);
		m_lNodeList.push_back(pNode);
		updateNodesPosition();
	}
}

void CListView::insertNodeAtFront(CCNode* pNode)
{
	CCSize tNodeSize = pNode->getContentSize();
	if( m_eDirection == eScrollViewDirectionHorizontal )
	{
		pNode->setAnchorPoint(CCPointZero);
		m_pContainer->addChild(pNode);
		m_lNodeList.push_front(pNode);
		updateNodesPosition();
	}
	else if( m_eDirection == eScrollViewDirectionVertical )
	{
		pNode->setAnchorPoint(CCPointZero);
		m_pContainer->addChild(pNode);
		m_lNodeList.push_front(pNode);
		updateNodesPosition();
	}
}

void CListView::insertNode(CCNode* pNode, CCNode* pTarget)
{
	if( !m_lNodeList.empty() )
	{
		list<CCNode*>::iterator itr = m_lNodeList.begin();
		for(; itr != m_lNodeList.end(); ++itr)
		{
			if( *itr == pTarget )
			{
				pNode->setAnchorPoint(CCPointZero);
				m_lNodeList.insert(itr, pNode);
				m_pContainer->addChild(pNode);
				updateNodesPosition();
				return;
			}
		}
	}
}

void CListView::insertNode(CCNode* pNode, unsigned int idx)
{
	if( idx >= m_lNodeList.size() )
	{
		insertNodeAtLast(pNode);
		return;
	}

	list<CCNode*>::iterator itr = m_lNodeList.begin();
	for(unsigned int i = 0; itr != m_lNodeList.end(); ++i, ++itr)
	{
		if( i == idx )
		{
			pNode->setAnchorPoint(CCPointZero);
			m_lNodeList.insert(itr, pNode);
			m_pContainer->addChild(pNode);
			updateNodesPosition();
			return;
		}
	}
}

void CListView::removeNode(unsigned int idx)
{
	if( !m_lNodeList.empty() && idx < m_lNodeList.size() )
	{
		list<CCNode*>::iterator itr = m_lNodeList.begin();
		for(unsigned int i = 0; itr != m_lNodeList.end(); ++i, ++itr)
		{
			if( i == idx )
			{
				m_pContainer->removeChild(*itr);
				m_lNodeList.erase(itr);
				updateNodesPosition();

				relocateContainer();
				return;
			}
		}
	}
}

void CListView::removeNode(CCNode* pNode)
{
	if( !m_lNodeList.empty() )
	{
		m_pContainer->removeChild(pNode);
		m_lNodeList.remove(pNode);
		updateNodesPosition();

		relocateContainer();
	}
}

void CListView::removeFrontNode()
{
	if( !m_lNodeList.empty() )
	{
		CCNode* pNode = m_lNodeList.front();
		m_pContainer->removeChild(pNode);
		m_lNodeList.pop_front();
		updateNodesPosition();

		relocateContainer();
	}
}

void CListView::removeLastNode()
{
	if( !m_lNodeList.empty() )
	{
		CCNode* pNode = m_lNodeList.back();
		m_pContainer->removeChild(pNode);
		m_lNodeList.pop_back();
		updateNodesPosition();

		relocateContainer();
	}
}

void CListView::removeAllNodes()
{
	if( !m_lNodeList.empty() )
	{
		list<CCNode*>::iterator itr = m_lNodeList.begin();
		for(; itr != m_lNodeList.end(); ++itr)
		{
			m_pContainer->removeChild(*itr);
		}
		m_lNodeList.clear();
		m_fNodesSize = 0.0f;
	}
}

void CListView::updateNodesPosition()
{
	m_fNodesSize = 0.0f;
	if( !m_lNodeList.empty() )
	{
		switch( m_eDirection )
		{
		case eScrollViewDirectionHorizontal:
			{
				list<CCNode*>::iterator itr = m_lNodeList.begin();
				for(; itr != m_lNodeList.end(); ++itr)
				{
					(*itr)->setPosition(CCPoint(m_fNodesSize, 0));
					m_fNodesSize += (*itr)->getContentSize().width;
				}
				setContainerSize(CCSize(m_fNodesSize, m_obContentSize.height));
			}
			break;
		case eScrollViewDirectionVertical:
			{
				float fAllNodesSize = 0.0f;
				list<CCNode*>::iterator itr = m_lNodeList.begin();
				for(; itr != m_lNodeList.end(); ++itr)
				{
					fAllNodesSize += (*itr)->getContentSize().height;
				}
				
				m_fNodesSize = fAllNodesSize;
				fAllNodesSize = MAX(m_obContentSize.height, fAllNodesSize);
				setContainerSize(CCSize(m_obContentSize.width, fAllNodesSize));

				for(itr = m_lNodeList.begin(); itr != m_lNodeList.end(); ++itr)
				{
					fAllNodesSize = fAllNodesSize - (*itr)->getContentSize().height;
					(*itr)->setPosition(CCPoint(0, fAllNodesSize));
				}
			}
			break;
		default:
			break;
		}
	}
}




NS_CC_WIDGET_END