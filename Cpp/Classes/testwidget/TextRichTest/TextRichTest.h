#ifndef __CTextRichTEST_H__
#define __CTextRichTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CTextRichTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CTextRichBasicTest : public CTextRichTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CTextRichEventTest : public CTextRichTestSceneBase
{
public:
	virtual bool init();
	void onClickTextRich(CCObject* pSender, const char* pDescription);
	CLabel* m_pLabel;
};


//////////////////////////////////////////////////////

static int CTextRich_test_idx;

static CCScene* getCTextRichTestScene()
{
	switch(CTextRich_test_idx)
	{
	case 0:
		return new CTextRichBasicTest();
	case 1:
		return new CTextRichEventTest();
	default:
		CTextRich_test_idx = 0;
		return new CTextRichBasicTest();
	}
	return NULL;
} 

static CCScene* pushCTextRichTestScene()
{
	CTextRich_test_idx = 0;
	CCScene* pScene = getCTextRichTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCTextRichTestScene()
{
	CTextRich_test_idx++;
	CCScene* pScene = getCTextRichTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCTextRichTestScene()
{
	CTextRich_test_idx--;
	CCScene* pScene = getCTextRichTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCTextRichTestScene()
{
	CCScene* pScene = getCTextRichTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CTextRichTEST_H__