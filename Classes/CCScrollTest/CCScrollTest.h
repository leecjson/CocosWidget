#ifndef __CCSCROLLTEST_H__
#define __CCSCROLLTEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCScrollTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCScrollBasicTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CCScrollEventTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
	void onScrolling(CCObject* pSender);

public:
	CCTextTTF* m_pText1;
};

//////////////////////////////////////////////////////

class CCScrollHorizontalTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();

};

//////////////////////////////////////////////////////

class CCScrollVerticalTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CCScrollAttributeTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CCScroll* pScroll;
};

//////////////////////////////////////////////////////

class CCScrollAnimationTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	CCScroll* pScroll;
};

//////////////////////////////////////////////////////

class CCScrollInsideScrollTest : public CCScrollTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int ccscroll_test_idx;

static CCScene* getCCScrollTestScene()
{
	switch(ccscroll_test_idx)
	{
	case 0:
		return new CCScrollBasicTest();
	case 1:
		return new CCScrollEventTest();
	case 2:
		return new CCScrollHorizontalTest();
	case 3:
		return new CCScrollVerticalTest();
	case 4:
		return new CCScrollAttributeTest();
	case 5:
		return new CCScrollAnimationTest();
	case 6:
		return new CCScrollInsideScrollTest();
	default:
		ccscroll_test_idx = 0;
		return new CCScrollBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCScrollTestScene()
{
	ccscroll_test_idx = 0;
	CCScene* pScene = getCCScrollTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCScrollTestScene()
{
	ccscroll_test_idx++;
	CCScene* pScene = getCCScrollTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCScrollTestScene()
{
	ccscroll_test_idx--;
	CCScene* pScene = getCCScrollTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCScrollTestScene()
{
	CCScene* pScene = getCCScrollTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCSCROLLTEST_H__