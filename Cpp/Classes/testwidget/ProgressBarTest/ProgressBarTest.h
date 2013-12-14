#ifndef __CProgressBarTEST_H__
#define __CProgressBarTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CProgressBarTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CProgressBarBasicTest : public CProgressBarTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CProgressBar* m_pProgressBar;
	CLabel* m_pText;
	void onProgressing(CCObject* pSender, int nValue);
};

//////////////////////////////////////////////////////

static int CProgressBar_test_idx;

static CCScene* getCProgressBarTestScene()
{
	switch(CProgressBar_test_idx)
	{
	case 0:
		return new CProgressBarBasicTest();
	default:
		CProgressBar_test_idx = 0;
		return new CProgressBarBasicTest();
	}
	return NULL;
} 

static CCScene* pushCProgressBarTestScene()
{
	CProgressBar_test_idx = 0;
	CCScene* pScene = getCProgressBarTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCProgressBarTestScene()
{
	CProgressBar_test_idx++;
	CCScene* pScene = getCProgressBarTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCProgressBarTestScene()
{
	CProgressBar_test_idx--;
	CCScene* pScene = getCProgressBarTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCProgressBarTestScene()
{
	CCScene* pScene = getCProgressBarTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CProgressBarTEST_H__