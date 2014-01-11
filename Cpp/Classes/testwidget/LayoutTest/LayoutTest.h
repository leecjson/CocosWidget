#ifndef __CLayoutTEST_H__
#define __CLayoutTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CLayoutTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CLayoutBasicTest : public CLayoutTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CLayoutColorTest : public CLayoutTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CLayoutGradientTest : public CLayoutTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CLayout_test_idx;

static CCScene* getCLayoutTestScene()
{
	switch(CLayout_test_idx)
	{
	case 0:
		return new CLayoutBasicTest();
	case 1:
		return new CLayoutColorTest();
	case 2:
		return new CLayoutGradientTest();
	default:
		CLayout_test_idx = 0;
		return new CLayoutBasicTest();
	}
	return NULL;
} 

static CCScene* pushCLayoutTestScene()
{
	CLayout_test_idx = 0;
	CCScene* pScene = getCLayoutTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCLayoutTestScene()
{
	CLayout_test_idx++;
	CCScene* pScene = getCLayoutTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCLayoutTestScene()
{
	CLayout_test_idx--;
	CCScene* pScene = getCLayoutTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCLayoutTestScene()
{
	CCScene* pScene = getCLayoutTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CLayoutTEST_H__