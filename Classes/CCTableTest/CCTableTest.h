#ifndef __CCTABLETEST_H__
#define __CCTABLETEST_H__

#include "../MenuScene.h"
#include <vector>
#include <list>

//////////////////////////////////////////////////////

class CCTableTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCTableBasicTest : public CCTableTestSceneBase
{
public:
	virtual bool init();
	CCTableCell* tableviewDataSource(CCTable* pTable, unsigned int idx);
};

//////////////////////////////////////////////////////

class CCTableBindingDataAndVertical : public CCTableTestSceneBase
{
public:
	virtual bool init();
	CCTableCell* tableviewDataSource(CCTable* pTable, unsigned int idx);
	std::vector<std::string> m_vDatas;
	void onClick(CCObject* pSender);
	CCTextTTF* pText;
};

//////////////////////////////////////////////////////

class CCTableReloadTest : public CCTableTestSceneBase
{
public:
	virtual bool init();
	CCTableCell* tableviewDataSource(CCTable* pTable, unsigned int idx);
	void onClick(CCObject* pSender);
	std::list<string> m_lDataQueue;
	std::vector<string> m_vDatas;
	CCTable* pTable;
};

//////////////////////////////////////////////////////

static int cctable_test_idx;

static CCScene* getCCTableTestScene()
{
	switch(cctable_test_idx)
	{
	case 0:
		return new CCTableBasicTest();
	case 1:
		return new CCTableBindingDataAndVertical();
	case 2:
		return new CCTableReloadTest();
	default:
		cctable_test_idx = 0;
		return new CCTableBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCTableTestScene()
{
	cctable_test_idx = 0;
	CCScene* pScene = getCCTableTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCTableTestScene()
{
	cctable_test_idx++;
	CCScene* pScene = getCCTableTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCTableTestScene()
{
	cctable_test_idx--;
	CCScene* pScene = getCCTableTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCTableTestScene()
{
	CCScene* pScene = getCCTableTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCTABLETEST_H__