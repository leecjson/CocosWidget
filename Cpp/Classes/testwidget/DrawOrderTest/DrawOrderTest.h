#ifndef __DrawOrderTEST_H__
#define __DrawOrderTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class DrawOrderTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class DrawOrderBasicTest : public DrawOrderTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CButton* pButton1;
	CButton* pButton2;
};

//////////////////////////////////////////////////////

static int DrawOrder_test_idx;

static CCScene* getDrawOrderTestScene()
{
	switch(DrawOrder_test_idx)
	{
	case 0:
		return new DrawOrderBasicTest();
	default:
		DrawOrder_test_idx = 0;
		return new DrawOrderBasicTest();
	}
	return NULL;
} 

static CCScene* pushDrawOrderTestScene()
{
	DrawOrder_test_idx = 0;
	CCScene* pScene = getDrawOrderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextDrawOrderTestScene()
{
	DrawOrder_test_idx++;
	CCScene* pScene = getDrawOrderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backDrawOrderTestScene()
{
	DrawOrder_test_idx--;
	CCScene* pScene = getDrawOrderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refDrawOrderTestScene()
{
	CCScene* pScene = getDrawOrderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__DrawOrderTEST_H__