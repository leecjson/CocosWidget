#ifndef __CCGRIDTEST_H__
#define __CCGRIDTEST_H__

#include "../MenuScene.h"
#include <vector>
#include <list>

//////////////////////////////////////////////////////

class CCGridTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCGridBasicTest : public CCGridTestSceneBase
{
public:
	virtual bool init();
	CCGridCell* gridviewDataSource(CCGrid* pTable, unsigned int idx);
};

//////////////////////////////////////////////////////

static int CCGrid_test_idx;

static CCScene* getCCGridTestScene()
{
	switch(CCGrid_test_idx)
	{
	case 0:
		return new CCGridBasicTest();
	default:
		CCGrid_test_idx = 0;
		return new CCGridBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCGridTestScene()
{
	CCGrid_test_idx = 0;
	CCScene* pScene = getCCGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCGridTestScene()
{
	CCGrid_test_idx++;
	CCScene* pScene = getCCGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCGridTestScene()
{
	CCGrid_test_idx--;
	CCScene* pScene = getCCGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCGridTestScene()
{
	CCScene* pScene = getCCGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCGRIDTEST_H__