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
#ifndef __CCWIDGET_EXPANDABLELISTVIEW_H__
#define __CCWIDGET_EXPANDABLELISTVIEW_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <vector>

NS_CC_WIDGET_BEGIN

class CExpandableNode;
class CExpandableListView;

/**
 * class  : CExpandableNode
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : expandable node define
 */
class CExpandableNode: public CLayout
{
public:
	CExpandableNode();
	virtual ~CExpandableNode();
	static CExpandableNode* create();

	void insertItemNodeAtLast(CCNode* pNode);
	void insertItemNodeAtFront(CCNode* pNode);
	void removeItemNode(CCNode* pNode);
	void removeItemNodeAtIndex(unsigned int idx);
	void removeAllItemNodes();

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch);
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration);

protected:
	friend class CExpandableListView;
	void setExpanded(bool bExpanded);
	bool isExpanded() const;
	std::vector<CCNode*>& getExpandableNodeItemList();
	void setExpandableListViewParent(CExpandableListView* pListView);

protected:
	bool m_bExpanded;
	unsigned int m_nIdx;
	std::vector<CCNode*> m_vExpandableNodeItemList;
	CExpandableListView* m_pExpandableListViewParent;
};

/**
 * class  : CExpandableListView
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : expandable list view define
 */
class CExpandableListView : public CScrollView
{
public:
	CExpandableListView();
	virtual ~CExpandableListView();
	static CExpandableListView* create(const CCSize& contentSize);

	// expand a expandable node by idx
	void expand(unsigned int idx);
	// collapse a expandable node by idx
	void collapse(unsigned int idx);

	void insertExpandableNodeAtLast(CExpandableNode* pNode);
	void insertExpandableNodeAtFront(CExpandableNode* pNode);
	void removeExpandableNode(CExpandableNode* pNode);
	void removeExpandableNodeAtIndex(unsigned int idx);
	void removeLastExpandableNode();
	void removeFrontExpandableNode();
	void removeAllExpandableNodes();
	CCArray* getExpandableNodes();
	unsigned int getExpandableNodeCount();
	CExpandableNode* getExpandableNodeAtIndex(unsigned int idx);

	void reloadData();

protected:
	friend class CExpandableNode;
	void updateNodesPosition();

protected:
	std::vector<CExpandableNode*> m_vExpandableNodeList;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_EXPANDABLELISTVIEW_H__