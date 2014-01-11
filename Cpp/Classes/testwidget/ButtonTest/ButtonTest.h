#ifndef __CButtonTEST_H__
#define __CButtonTEST_H__

#include "../../MenuScene.h"
#include <string>
#include <list>

//////////////////////////////////////////////////////

class CButtonTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CButtonBasicTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
};

//////////////////////////////////////////////////////

class CButtonEventTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
	
	void onClick(CCObject* pSender);
	CWidgetTouchModel onTouchBegan(CCObject* pSender, CCTouch* pTouch);
	bool onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTouchCancelled(CCObject* pSender, CCTouch* pTouch, float fDuration);

private:
	CLabel* m_pText1;
	CLabel* m_pText2;
	CLabel* m_pDurationText;
	void setDuration(float fDuration);
};


////////////////////////////////////////////////////////

class CButtonLongClickTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	bool onButton1LongClick(CCObject* pSender, CCTouch* pTouch);
	bool onButton2LongClick(CCObject* pSender, CCTouch* pTouch);

	void onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration);

private:
	CButton* pButton2;
	CLabel* m_pText1;
	CLabel* m_pText2;
};

////////////////////////////////////////////////////////

class CButtonWithTextTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

class CButtonAttributeTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

class CButton9SpriteTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
};

////////////////////////////////////////////////////////

class CButtonChangeSizeTest : public CButtonTestSceneBase
{
public:
	virtual bool init();
	void onClick(CCObject* pSender);
	std::list<std::string> m_lData;
	CButton* m_pButton;
};

////////////////////////////////////////////////////////

static int CButton_test_idx;

static CCScene* getCButtonTestScene()
{
	switch(CButton_test_idx)
	{
	case 0:
		return new CButtonBasicTest();
	case 1:
		return new CButtonEventTest();
	case 2:
		return new CButtonLongClickTest();
	case 3:
		return new CButtonWithTextTest();
	case 4:
		return new CButtonAttributeTest();
	case 5:
		return new CButton9SpriteTest();
	case 6:
		return new CButtonChangeSizeTest();
	default:
		CButton_test_idx = 0;
		return new CButtonBasicTest();
	}
	return NULL;
} 

static CCScene* pushCButtonTestScene()
{
	CButton_test_idx = 0;
	CCScene* pScene = getCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCButtonTestScene()
{
	CButton_test_idx++;
	CCScene* pScene = getCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCButtonTestScene()
{
	CButton_test_idx--;
	CCScene* pScene = getCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCButtonTestScene()
{
	CCScene* pScene = getCButtonTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CButtonTEST_H__