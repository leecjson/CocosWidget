#ifndef __CCBUTTONTEST_H__
#define __CCBUTTONTEST_H__

#include "../MenuScene.h"

//////////////////////////////////////////////////////

class CCButtonTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CCButtonBasicTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CCButtonEventTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
	
	void onClick(CCObject* pSender);
	CCWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchCancelled(CCObject* pSender, CCTouch* pTouch, float fDuration);

private:
	CCTextTTF* m_pText1;
	CCTextTTF* m_pText2;
	CCTextTTF* m_pDurationText;
	void setDuration(float fDuration);
};


////////////////////////////////////////////////////////

class CCButtonLongClickTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	bool onButton1LongClick(CCObject* pSender);
	bool onButton2LongClick(CCObject* pSender);

	void onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);

private:
	CCButton* pButton2;
	CCTextTTF* m_pText1;
	CCTextTTF* m_pText2;
};

////////////////////////////////////////////////////////

class CCButtonWithTextTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

class CCButtonAttributeTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

class CCButton9SpriteTest : public CCButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

static int ccbutton_test_idx;

static CCScene* getCCButtonTestScene()
{
	switch(ccbutton_test_idx)
	{
	case 0:
		return new CCButtonBasicTest();
	case 1:
		return new CCButtonEventTest();
	case 2:
		return new CCButtonLongClickTest();
	case 3:
		return new CCButtonWithTextTest();
	case 4:
		return new CCButtonAttributeTest();
	case 5:
		return new CCButton9SpriteTest();
	default:
		ccbutton_test_idx = 0;
		return new CCButtonBasicTest();
	}
	return NULL;
} 

static CCScene* pushCCButtonTestScene()
{
	ccbutton_test_idx = 0;
	CCScene* pScene = getCCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCCButtonTestScene()
{
	ccbutton_test_idx++;
	CCScene* pScene = getCCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCCButtonTestScene()
{
	ccbutton_test_idx--;
	CCScene* pScene = getCCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCCButtonTestScene()
{
	CCScene* pScene = getCCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CCBUTTONTEST_H__