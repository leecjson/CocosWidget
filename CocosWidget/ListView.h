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
#ifndef __CCWIDGET_LISTVIEW_H__
#define __CCWIDGET_LISTVIEW_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1]
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "ScrollView.h"
#include "WidgetProtocol.h"
#include <list>

NS_CC_WIDGET_BEGIN

/**
 * class    : CListView
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 可变长列表控件定义
 */
class CListView : public CScrollView
{
public:
	CListView();
	virtual ~CListView();
	static CListView* create(const CCSize& contentSize);

	// 在列表尾部插入节点
	void insertNodeAtLast(CCNode* pNode);
	// 在列表头部插入节点
	void insertNodeAtFront(CCNode* pNode);
	// 在目标节点之前插入节点
	void insertNode(CCNode* pNode, CCNode* pTarget);
	// 在对应下标插入节点
	void insertNode(CCNode* pNode, unsigned int idx);

	// 根据下标删除节点
	void removeNode(unsigned int idx);
	// 删除节点
	void removeNode(CCNode* pNode);
	// 删除头部节点
	void removeFrontNode();
	// 删除尾部节点
	void removeLastNode();
	// 删除所有节点
	void removeAllNodes();

	// 获取所有节点
	CCArray* getNodes();
	// 获取节点数量
	unsigned int getNodeCount() const;

protected:
	void updateNodesPosition();

protected:
	std::list<CCNode*> m_lNodeList;
	float m_fNodesSize;
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_LISTVIEW_H__