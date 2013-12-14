#ifndef __CGridPageViewGRIDTEST_H__
#define __CGridPageViewGRIDTEST_H__

#include "../../MenuScene.h"
#include <vector>

//////////////////////////////////////////////////////

class CGridPageViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CGridPageViewBasicTest : public CGridPageViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* gridpageviewDataSource(CCObject* pConvertCell, unsigned int idx);
};

//////////////////////////////////////////////////////

class CGridPageViewBackPackTest : public CGridPageViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* gridpageviewDataSource(CCObject* pConvertCell, unsigned int idx);
	std::vector<std::string> m_vData;
	CGridPageView* pTable;

public:
	CToggleView* m_pToggleImage;
	CCSprite* m_pSelectedSprite;
	bool onItemLongClick(CCObject* pSender, CCTouch* pTouch);
	void onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onLayoutTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
};

//////////////////////////////////////////////////////

static int CGridPageView_test_idx;

static CCScene* getCGridPageViewTestScene()
{
	switch(CGridPageView_test_idx)
	{
	case 0:
		return new CGridPageViewBasicTest();
	case 1:
		return new CGridPageViewBackPackTest();
	default:
		CGridPageView_test_idx = 0;
		return new CGridPageViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCGridPageViewTestScene()
{
	CGridPageView_test_idx = 0;
	CCScene* pScene = getCGridPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCGridPageViewTestScene()
{
	CGridPageView_test_idx++;
	CCScene* pScene = getCGridPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCGridPageViewTestScene()
{
	CGridPageView_test_idx--;
	CCScene* pScene = getCGridPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCGridPageViewTestScene()
{
	CCScene* pScene = getCGridPageViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CGridPageViewGRIDTEST_H__