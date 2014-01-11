#ifndef __CControlViewTEST_H__
#define __CControlViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CControlViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CControlViewBasicTest : public CControlViewTestSceneBase
{
public:
	virtual bool init();
	void onTouched(CCObject* pSender, float fx, float fy);
	CCSprite* m_pIcon;
};

//////////////////////////////////////////////////////

static int CControlView_test_idx;

static CCScene* getCControlViewTestScene()
{
	switch(CControlView_test_idx)
	{
	case 0:
		return new CControlViewBasicTest();
	default:
		CControlView_test_idx = 0;
		return new CControlViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCControlViewTestScene()
{
	CControlView_test_idx = 0;
	CCScene* pScene = getCControlViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCControlViewTestScene()
{
	CControlView_test_idx++;
	CCScene* pScene = getCControlViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCControlViewTestScene()
{
	CControlView_test_idx--;
	CCScene* pScene = getCControlViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCControlViewTestScene()
{
	CCScene* pScene = getCControlViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CControlViewTEST_H__