#ifndef __CTableViewTEST_H__
#define __CTableViewTEST_H__

#include "../../MenuScene.h"
#include <vector>
#include <list>

//////////////////////////////////////////////////////

class CTableViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CTableViewBasicTest : public CTableViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* tableviewDataSource(CCObject* pConvertView, unsigned int idx);
};

//////////////////////////////////////////////////////

class CTableViewBindingDataAndVertical : public CTableViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* tableviewDataSource(CCObject* pConvertView, unsigned int idx);
	std::vector<std::string> m_vDatas;
	void onClick(CCObject* pSender);
	CLabel* pText;
};

//////////////////////////////////////////////////////

class CTableViewReloadTest : public CTableViewTestSceneBase
{
public:
	virtual bool init();
	CCObject* tableviewDataSource(CCObject* pConvertView, unsigned int idx);
	void onClick(CCObject* pSender);
	std::list<string> m_lDataQueue;
	std::vector<string> m_vDatas;
	CTableView* pTable;
};

//////////////////////////////////////////////////////

static int CTableView_test_idx;

static CCScene* getCTableViewTestScene()
{
	switch(CTableView_test_idx)
	{
	case 0:
		return new CTableViewBasicTest();
	case 1:
		return new CTableViewBindingDataAndVertical();
	case 2:
		return new CTableViewReloadTest();
	default:
		CTableView_test_idx = 0;
		return new CTableViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCTableViewTestScene()
{
	CTableView_test_idx = 0;
	CCScene* pScene = getCTableViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCTableViewTestScene()
{
	CTableView_test_idx++;
	CCScene* pScene = getCTableViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCTableViewTestScene()
{
	CTableView_test_idx--;
	CCScene* pScene = getCTableViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCTableViewTestScene()
{
	CCScene* pScene = getCTableViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CTableViewTEST_H__