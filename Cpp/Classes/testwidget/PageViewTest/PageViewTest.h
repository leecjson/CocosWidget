#ifndef __CPageViewTEST_H__
#define __CPageViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CPageViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CPageViewBasicTest : public CPageViewTestSceneBase
{
public:
	virtual bool init();
	CLabel* m_pText;
	CCObject* pageviewDataSource(CCObject* pConvertCell, unsigned int nPageIdx);
	void onPageChanged(CPageView* pPage, unsigned int nPageIndx);
};

//////////////////////////////////////////////////////

class CPageViewVerticalTest : public CPageViewTestSceneBase
{
public:
	virtual bool init();
	CLabel* m_pText;
	CCObject* pageviewDataSource(CCObject* pConvertCell, unsigned int nPageIdx);
	void onPageChanged(CPageView* pPage, unsigned int nPageIndx);
};

//////////////////////////////////////////////////////

static int CPageView_test_idx;

static CCScene* getCPageViewTestScene()
{
	switch(CPageView_test_idx)
	{
	case 0:
		return new CPageViewBasicTest();
	case 1:
		return new CPageViewVerticalTest();
	default:
		CPageView_test_idx = 0;
		return new CPageViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCPageViewTestScene()
{
	CPageView_test_idx = 0;
	CCScene* pScene = getCPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCPageViewTestScene()
{
	CPageView_test_idx++;
	CCScene* pScene = getCPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCPageViewTestScene()
{
	CPageView_test_idx--;
	CCScene* pScene = getCPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCPageViewTestScene()
{
	CCScene* pScene = getCPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CPageViewTEST_H__