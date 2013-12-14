#ifndef __CGridViewTEST_H__
#define __CGridViewTEST_H__

#include "../../MenuScene.h"
#include <vector>
#include <list>

//////////////////////////////////////////////////////

class CGridViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CGridViewBasicTest : public CGridViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* gridviewDataSource(CCObject* pConvertView, unsigned int idx);
};

//////////////////////////////////////////////////////

static int CGridView_test_idx;

static CCScene* getCGridViewTestScene()
{
	switch(CGridView_test_idx)
	{
	case 0:
		return new CGridViewBasicTest();
	default:
		CGridView_test_idx = 0;
		return new CGridViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCGridViewTestScene()
{
	CGridView_test_idx = 0;
	CCScene* pScene = getCGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCGridViewTestScene()
{
	CGridView_test_idx++;
	CCScene* pScene = getCGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCGridViewTestScene()
{
	CGridView_test_idx--;
	CCScene* pScene = getCGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCGridViewTestScene()
{
	CCScene* pScene = getCGridViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CGridViewTEST_H__