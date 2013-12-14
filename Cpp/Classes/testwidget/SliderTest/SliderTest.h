#ifndef __CSliderTEST_H__
#define __CSliderTEST_H__

#include "../../MenuScene.h"

//////////////////////////////////////////////////////

class CSliderTestSceneBase : public BaseTestScene
{
public:
	virtual void onNextBtnClick(CCObject* pSender);
	virtual void onBackBtnClick(CCObject* pSender);
	virtual void onRefBtnClick(CCObject* pSender);
};

//////////////////////////////////////////////////////

class CSliderBasicTest : public CSliderTestSceneBase
{
public:
	virtual bool init();
	CLabel* m_pText;
	CSlider* m_pSlider;
	void onValueChanged(CCObject* pSender, int nValue);
};

//////////////////////////////////////////////////////

class CSliderWithScrollTest : public CSliderTestSceneBase
{
public:
	virtual bool init();
	CScrollView* m_pScrollView;
	CSlider* m_pSlider;

	void onValueChanged(CCObject* pSender, int nValue);
};


//////////////////////////////////////////////////////

static int CSlider_test_idx;

static CCScene* getCSliderTestScene()
{
	switch(CSlider_test_idx)
	{
	case 0:
		return new CSliderBasicTest();
	case 1:
		return new CSliderWithScrollTest();
	default:
		CSlider_test_idx = 0;
		return new CSliderBasicTest();
	}
	return NULL;
} 

static CCScene* pushCSliderTestScene()
{
	CSlider_test_idx = 0;
	CCScene* pScene = getCSliderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->pushScene(pScene);
	return pScene;
}

static void nextCSliderTestScene()
{
	CSlider_test_idx++;
	CCScene* pScene = getCSliderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void backCSliderTestScene()
{
	CSlider_test_idx--;
	CCScene* pScene = getCSliderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

static void refCSliderTestScene()
{
	CCScene* pScene = getCSliderTestScene();
	pScene->init();
	pScene->autorelease();
	CCDirector::sharedDirector()->replaceScene(pScene);
}

#endif //__CSliderTEST_H__