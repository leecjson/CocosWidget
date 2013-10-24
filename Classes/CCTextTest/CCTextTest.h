#ifndef __CCTEXTTEST_H__
#define __CCTEXTTEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCTextTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCTextBasicTest : public CCTextTestSceneBase
{
public:
	virtual bool init();
	CCWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onClick(CCObject* pSender);
	bool onLongClick(CCObject* pSender);
	CCTextTTF* pText3;
};

//////////////////////////////////////////////////////

class CCTextAtlasTest : public CCTextTestSceneBase
{
public:
	virtual bool init();
	CCWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
};

//////////////////////////////////////////////////////

class CCTextBMFontTest : public CCTextTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

static int CCText_test_idx;

static CCScene* getCCTextTestScene()
{
	switch(CCText_test_idx)
	{
	case 0:
		return new CCTextBasicTest();
	case 1:
		return new CCTextAtlasTest();
	case 2:
		return new CCTextBMFontTest();
	default:
		CCText_test_idx = 0;
		return new CCTextBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCTextTestScene()
{
	CCText_test_idx = 0;
	CCScene* pScene = getCCTextTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCTextTestScene()
{
	CCText_test_idx++;
	CCScene* pScene = getCCTextTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCTextTestScene()
{
	CCText_test_idx--;
	CCScene* pScene = getCCTextTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCTextTestScene()
{
	CCScene* pScene = getCCTextTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCTEXTTEST_H__