#ifndef __CLabelTEST_H__
#define __CLabelTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CLabelTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CLabelBasicTest : public CLabelTestSceneBase
{
public:
	virtual bool init();
	CWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onClick(CCObject* pSender);
	bool onLongClick(CCObject* pSender, CCTouch* pTouch);
	CLabel* pText3;
};

//////////////////////////////////////////////////////

class CLabelAtlasTest : public CLabelTestSceneBase
{
public:
	virtual bool init();
	CWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
};

//////////////////////////////////////////////////////

class CLabelBMFontTest : public CLabelTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CLabel_test_idx;

static CCScene* getCLabelTestScene()
{
	switch(CLabel_test_idx)
	{
	case 0:
		return new CLabelBasicTest();
	case 1:
		return new CLabelAtlasTest();
	case 2:
		return new CLabelBMFontTest();
	default:
		CLabel_test_idx = 0;
		return new CLabelBasicTest();
	}
	return NULL;
} 

static CCScene* pushCLabelTestScene()
{
	CLabel_test_idx = 0;
	CCScene* pScene = getCLabelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCLabelTestScene()
{
	CLabel_test_idx++;
	CCScene* pScene = getCLabelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCLabelTestScene()
{
	CLabel_test_idx--;
	CCScene* pScene = getCLabelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCLabelTestScene()
{
	CCScene* pScene = getCLabelTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CLabelTEST_H__