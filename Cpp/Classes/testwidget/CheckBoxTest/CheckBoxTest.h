#ifndef __CCheckBoxTEST_H__
#define __CCheckBoxTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CCheckBoxTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCheckBoxBasicTest : public CCheckBoxTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CLabel* m_pText;
};

//////////////////////////////////////////////////////

class CCheckBoxExclusionTest : public CCheckBoxTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

static int CCheckBox_test_idx;

static CCScene* getCCheckBoxTestScene()
{
	switch(CCheckBox_test_idx)
	{
	case 0:
		return new CCheckBoxBasicTest();
	case 1:
		return new CCheckBoxExclusionTest();
	default:
		CCheckBox_test_idx = 0;
		return new CCheckBoxBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCheckBoxTestScene()
{
	CCheckBox_test_idx = 0;
	CCScene* pScene = getCCheckBoxTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCheckBoxTestScene()
{
	CCheckBox_test_idx++;
	CCScene* pScene = getCCheckBoxTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCheckBoxTestScene()
{
	CCheckBox_test_idx--;
	CCScene* pScene = getCCheckBoxTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCheckBoxTestScene()
{
	CCScene* pScene = getCCheckBoxTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCheckBoxTEST_H__