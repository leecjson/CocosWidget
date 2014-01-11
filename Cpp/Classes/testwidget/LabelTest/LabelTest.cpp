#include "LabelTest.h"

void CLabelTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCLabelTestScene();
}

void CLabelTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCLabelTestScene();
}

void CLabelTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCLabelTestScene();
}

//////////////////////////////////////////////////////

bool CLabelBasicTest::init()
{
	CLabelTestSceneBase::init();
	setTitle("CLabelBasicTest");
	setDescription("CLabel extern CCLabelTTF (long click and click)");

	CLabel* pText1 = CLabel::create("Hello CCTK And cocoswidget", "", 30.0f);
	pText1->enableShadow(CCSizeMake(2.0f, -2.0f), 0, 0);
	pText1->setPosition(CCPoint(480, 450));
	m_pWindow->addChild(pText1);

	CLabel* pText2 = CLabel::create("Click me test event", "", 30.0f);
	pText2->setTouchEnabled(true);
	pText2->setOnLongClickListener(this, ccw_longclick_selector(CLabelBasicTest::onLongClick));
	pText2->setOnClickListener(this, ccw_click_selector(CLabelBasicTest::onClick));
	pText2->setOnTouchBeganListener(this, ccw_touchbegan_selector(CLabelBasicTest::onTouchBegan));
	pText2->setOnTouchMovedListener(this, ccw_touchevent_selector(CLabelBasicTest::onTouchMoved));
	pText2->setOnTouchEndedListener(this, ccw_touchevent_selector(CLabelBasicTest::onTouchEnded));
	pText2->setOnTouchCancelledListener(this, ccw_touchevent_selector(CLabelBasicTest::onTouchEnded));
	pText2->setColor(ccc3(0, 255, 0));
	pText2->setPosition(CCPoint(480, 380));
	m_pWindow->addChild(pText2);

	pText3 = CLabel::create("none", "", 30.0f);
	pText3->setPosition(CCPoint(750, 380));
	m_pWindow->addChild(pText3);

	return true;
}

CWidgetTouchModel CLabelBasicTest::onTouchBegan(CCObject* pSender, CCTouch* pTouch)
{
	CLabel* pText = (CLabel*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.3f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return eWidgetTouchTransient;
}

bool CLabelBasicTest::onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	return true;
}

bool CLabelBasicTest::onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CLabel* pText = (CLabel*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);
	return true;
}

void CLabelBasicTest::onClick(CCObject* pSender)
{
	pText3->setString("Clicked");
}

bool CLabelBasicTest::onLongClick(CCObject* pSender, CCTouch* pTouch)
{
	pText3->setString("LongClicked");
	return false;
}

//////////////////////////////////////////////////////

bool CLabelAtlasTest::init()
{
	CLabelTestSceneBase::init();
	setTitle("CLabelBasicTest");
	setDescription("CLabelAtlas extern CCLabelAtlas (test event)");

	CLabelAtlas* pText = CLabelAtlas::create(";12456", "num.png", 26, 34, 49);
	pText->setTouchEnabled(true);
	pText->setAnchorPoint(CCPoint(0.5, 0.5));
	pText->setPosition(CCPoint(480, 320));
	pText->setOnTouchBeganListener(this, ccw_touchbegan_selector(CLabelAtlasTest::onTouchBegan));
	pText->setOnTouchEndedListener(this, ccw_touchevent_selector(CLabelAtlasTest::onTouchEnded));
	pText->setOnTouchCancelledListener(this, ccw_touchevent_selector(CLabelAtlasTest::onTouchEnded));
	m_pWindow->addChild(pText);

	return true;
}

CWidgetTouchModel CLabelAtlasTest::onTouchBegan(CCObject* pSender, CCTouch* pTouch)
{
	CLabelAtlas* pText = (CLabelAtlas*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.3f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return eWidgetTouchTransient;
}

bool CLabelAtlasTest::onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CLabelAtlas* pText = (CLabelAtlas*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return true;
}

//////////////////////////////////////////////////////

bool CLabelBMFontTest::init()
{
	CLabelTestSceneBase::init();
	setTitle("CLabelBMFontTest");
	setDescription("CLabelBMFont extern CCLabelBMFont");

	CLabelBMFont* pText = CLabelBMFont::create("hello cocos2d-x and cocoswidget", "arial-unicode-26.fnt");
	pText->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pText);

	return true;
}