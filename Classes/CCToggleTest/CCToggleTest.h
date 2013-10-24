#ifndef __CCTOGGLETEST_H__
#define __CCTOGGLETEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCToggleTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCToggleBasicTest : public CCToggleTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CCTextTTF* m_pText;
};

//////////////////////////////////////////////////////

class CCToggleGroupTest : public CCToggleTestSceneBase
{
public:
	virtual bool init();
	void onCheck(CCObject* pSender, bool bChecked);
};

//////////////////////////////////////////////////////

static int cctoggle_test_idx;

static CCScene* getCCToggleTestScene()
{
	switch(cctoggle_test_idx)
	{
	case 0:
		return new CCToggleBasicTest();
	case 1:
		return new CCToggleGroupTest();
	default:
		cctoggle_test_idx = 0;
		return new CCToggleBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCToggleTestScene()
{
	cctoggle_test_idx = 0;
	CCScene* pScene = getCCToggleTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCToggleTestScene()
{
	cctoggle_test_idx++;
	CCScene* pScene = getCCToggleTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCToggleTestScene()
{
	cctoggle_test_idx--;
	CCScene* pScene = getCCToggleTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCToggleTestScene()
{
	CCScene* pScene = getCCToggleTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCTOGGLETEST_H__