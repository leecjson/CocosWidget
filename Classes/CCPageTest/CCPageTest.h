#ifndef __CCPAGETEST_H__
#define __CCPAGETEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCPageTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCPageBasicTest : public CCPageTestSceneBase
{
public:
	virtual bool init();
	CCTextTTF* m_pText;
	CCPageCell* pageviewDataSource(CCPage* pPage, unsigned int nPageIdx);
	void onPageChanged(CCPage* pPage, unsigned int nPageIndx);
};

//////////////////////////////////////////////////////

class CCPageVerticalTest : public CCPageTestSceneBase
{
public:
	virtual bool init();
	CCTextTTF* m_pText;
	CCPageCell* pageviewDataSource(CCPage* pPage, unsigned int nPageIdx);
	void onPageChanged(CCPage* pPage, unsigned int nPageIndx);
};

//////////////////////////////////////////////////////

static int CCPage_test_idx;

static CCScene* getCCPageTestScene()
{
	switch(CCPage_test_idx)
	{
	case 0:
		return new CCPageBasicTest();
	case 1:
		return new CCPageVerticalTest();
	default:
		CCPage_test_idx = 0;
		return new CCPageBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCPageTestScene()
{
	CCPage_test_idx = 0;
	CCScene* pScene = getCCPageTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCPageTestScene()
{
	CCPage_test_idx++;
	CCScene* pScene = getCCPageTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCPageTestScene()
{
	CCPage_test_idx--;
	CCScene* pScene = getCCPageTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCPageTestScene()
{
	CCScene* pScene = getCCPageTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCPAGETEST_H__