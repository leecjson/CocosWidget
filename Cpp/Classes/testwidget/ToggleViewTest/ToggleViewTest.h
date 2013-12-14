#ifndef __CToggleViewTEST_H__
#define __CToggleViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CToggleViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CToggleViewBasicTest : public CToggleViewTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CLabel* m_pText;
};

//////////////////////////////////////////////////////

class CToggleViewGroupTest : public CToggleViewTestSceneBase
{
public:
	virtual bool init();
	void onCheck(CCObject* pSender, bool bChecked);
};

//////////////////////////////////////////////////////

static int CToggleView_test_idx;

static CCScene* getCToggleViewTestScene()
{
	switch(CToggleView_test_idx)
	{
	case 0:
		return new CToggleViewBasicTest();
	case 1:
		return new CToggleViewGroupTest();
	default:
		CToggleView_test_idx = 0;
		return new CToggleViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCToggleViewTestScene()
{
	CToggleView_test_idx = 0;
	CCScene* pScene = getCToggleViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCToggleViewTestScene()
{
	CToggleView_test_idx++;
	CCScene* pScene = getCToggleViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCToggleViewTestScene()
{
	CToggleView_test_idx--;
	CCScene* pScene = getCToggleViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCToggleViewTestScene()
{
	CCScene* pScene = getCToggleViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CToggleViewTEST_H__