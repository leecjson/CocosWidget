#ifndef __CPanelTEST_H__
#define __CPanelTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CPanelTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CPanelBasicTest : public CPanelTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CPanelColorTest : public CPanelTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CPanel_test_idx;

static CCScene* getCPanelTestScene()
{
	switch(CPanel_test_idx)
	{
	case 0:
		return new CPanelBasicTest();
	case 1:
		return new CPanelColorTest();
	default:
		CPanel_test_idx = 0;
		return new CPanelBasicTest();
	}
	return NULL;
} 

static CCScene* pushCPanelTestScene()
{
	CPanel_test_idx = 0;
	CCScene* pScene = getCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCPanelTestScene()
{
	CPanel_test_idx++;
	CCScene* pScene = getCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCPanelTestScene()
{
	CPanel_test_idx--;
	CCScene* pScene = getCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCPanelTestScene()
{
	CCScene* pScene = getCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CPanelTEST_H__