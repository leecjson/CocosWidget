#ifndef __CCPANELTEST_H__
#define __CCPANELTEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCPanelTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCPanelBasicTest : public CCPanelTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CCPanelColorTest : public CCPanelTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CCPanel_test_idx;

static CCScene* getCCPanelTestScene()
{
	switch(CCPanel_test_idx)
	{
	case 0:
		return new CCPanelBasicTest();
	case 1:
		return new CCPanelColorTest();
	default:
		CCPanel_test_idx = 0;
		return new CCPanelBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCPanelTestScene()
{
	CCPanel_test_idx = 0;
	CCScene* pScene = getCCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCPanelTestScene()
{
	CCPanel_test_idx++;
	CCScene* pScene = getCCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCPanelTestScene()
{
	CCPanel_test_idx--;
	CCScene* pScene = getCCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCPanelTestScene()
{
	CCScene* pScene = getCCPanelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCPANELTEST_H__