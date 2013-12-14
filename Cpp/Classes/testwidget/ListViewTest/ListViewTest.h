#ifndef __CListViewTEST_H__
#define __CListViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CListViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CListViewBasicTest : public CListViewTestSceneBase
{
public:
	struct tagItem
	{
		CCSize tSize;
		ccColor3B tColor;
	};
public:
	virtual bool init();
	CListView* m_pListView;
	list<tagItem> m_lDatas;
	void onClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CListViewOperateTest : public CListViewTestSceneBase
{
public:
	virtual bool init();
	CListView* m_pListView;
	void onClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

static int CListView_test_idx;

static CCScene* getCListViewTestScene()
{
	switch(CListView_test_idx)
	{
	case 0:
		return new CListViewBasicTest();
	case 1:
		return new CListViewOperateTest();
	default:
		CListView_test_idx = 0;
		return new CListViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCListViewTestScene()
{
	CListView_test_idx = 0;
	CCScene* pScene = getCListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCListViewTestScene()
{
	CListView_test_idx++;
	CCScene* pScene = getCListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCListViewTestScene()
{
	CListView_test_idx--;
	CCScene* pScene = getCListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCListViewTestScene()
{
	CCScene* pScene = getCListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CListViewTEST_H__