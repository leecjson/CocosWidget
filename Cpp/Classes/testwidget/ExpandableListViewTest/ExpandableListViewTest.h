#ifndef __CExpandableListViewTEST_H__
#define __CExpandableListViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CExpandableListViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CExpandableListViewBasicTest : public CExpandableListViewTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CExpandableListView* pListView;
};


//////////////////////////////////////////////////////

static int CExpandableListView_test_idx;

static CCScene* getCExpandableListViewTestScene()
{
	switch(CExpandableListView_test_idx)
	{
	case 0:
		return new CExpandableListViewBasicTest();
	default:
		CExpandableListView_test_idx = 0;
		return new CExpandableListViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCExpandableListViewTestScene()
{
	CExpandableListView_test_idx = 0;
	CCScene* pScene = getCExpandableListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCExpandableListViewTestScene()
{
	CExpandableListView_test_idx++;
	CCScene* pScene = getCExpandableListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCExpandableListViewTestScene()
{
	CExpandableListView_test_idx--;
	CCScene* pScene = getCExpandableListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCExpandableListViewTestScene()
{
	CCScene* pScene = getCExpandableListViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CExpandableListViewTEST_H__