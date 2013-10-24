#ifndef __CCTableGridGRIDTEST_H__
#define __CCTableGridGRIDTEST_H__

#include "../MenuScene.h"
#include <vector>

//////////////////////////////////////////////////////

class CCTableGridTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCTableGridBasicTest : public CCTableGridTestSceneBase
{
public:
	virtual bool init();
	CCTableGridCell* tableviewDataSource(CCTableGrid* pTable, CCTableGridCell* pCell, unsigned int idx);
};

//////////////////////////////////////////////////////

class CCTableGridBackPackTest : public CCTableGridTestSceneBase
{
public:
	virtual bool init();
	CCTableGridCell* tableviewDataSource(CCTableGrid* pTable, CCTableGridCell* pCell, unsigned int idx);
	std::vector<std::string> m_vData;
	CCTableGrid* pTable;

public:
	CCToggle* m_pToggleImage;
	CCSprite* m_pSelectedSprite;
	bool onItemLongClick(CCObject* pSender);
	void onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onLayoutTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);
};

//////////////////////////////////////////////////////

static int CCTableGrid_test_idx;

static CCScene* getCCTableGridTestScene()
{
	switch(CCTableGrid_test_idx)
	{
	case 0:
		return new CCTableGridBasicTest();
	case 1:
		return new CCTableGridBackPackTest();
	default:
		CCTableGrid_test_idx = 0;
		return new CCTableGridBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCTableGridTestScene()
{
	CCTableGrid_test_idx = 0;
	CCScene* pScene = getCCTableGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCTableGridTestScene()
{
	CCTableGrid_test_idx++;
	CCScene* pScene = getCCTableGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCTableGridTestScene()
{
	CCTableGrid_test_idx--;
	CCScene* pScene = getCCTableGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCTableGridTestScene()
{
	CCScene* pScene = getCCTableGridTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCTableGridGRIDTEST_H__