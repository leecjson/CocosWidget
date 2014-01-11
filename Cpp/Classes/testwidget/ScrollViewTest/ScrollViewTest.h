#ifndef __CScrollViewTEST_H__
#define __CScrollViewTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CScrollViewTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CScrollViewBasicTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CScrollViewEventTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
	void onScrolling(CCObject* pSender);

public:
	CLabel* m_pText1;
};

//////////////////////////////////////////////////////

class CScrollViewHorizontalTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();

};

//////////////////////////////////////////////////////

class CScrollViewVerticalTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CScrollViewAttributeTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CScrollView* pScroll;
};

//////////////////////////////////////////////////////

class CScrollViewAnimationTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CScrollView* pScroll;
};

//////////////////////////////////////////////////////

class CScrollViewInsideScrollTest : public CScrollViewTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CScrollView_test_idx;

static CCScene* getCScrollViewTestScene()
{
	switch(CScrollView_test_idx)
	{
	case 0:
		return new CScrollViewBasicTest();
	case 1:
		return new CScrollViewEventTest();
	case 2:
		return new CScrollViewHorizontalTest();
	case 3:
		return new CScrollViewVerticalTest();
	case 4:
		return new CScrollViewAttributeTest();
	case 5:
		return new CScrollViewAnimationTest();
	case 6:
		return new CScrollViewInsideScrollTest();
	default:
		CScrollView_test_idx = 0;
		return new CScrollViewBasicTest();
	}
	return NULL;
} 

static CCScene* pushCScrollViewTestScene()
{
	CScrollView_test_idx = 0;
	CCScene* pScene = getCScrollViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCScrollViewTestScene()
{
	CScrollView_test_idx++;
	CCScene* pScene = getCScrollViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCScrollViewTestScene()
{
	CScrollView_test_idx--;
	CCScene* pScene = getCScrollViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCScrollViewTestScene()
{
	CCScene* pScene = getCScrollViewTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CScrollViewTEST_H__