#include "CCTextTest.h"

void CCTextTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCTextTestScene();
}

void CCTextTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCTextTestScene();
}

void CCTextTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCTextTestScene();
}

//////////////////////////////////////////////////////

bool CCTextBasicTest::init()
{
	CCTextTestSceneBase::init();
	setTitle("CCTextBasicTest");
	setDescription("CCTextTTF extern CCLabelTTF (long click and click)");

	CCTextTTF* pText1 = CCTextTTF::create("Hello CCTK And cocoswidget", "", 30.0f);
	pText1->enableShadow(CCSizeMake(2.0f, -2.0f), 0, 0);
	pText1->setPosition(ccp(480, 450));
	m_pLayout->addChild(pText1);

	CCTextTTF* pText2 = CCTextTTF::create("Click me test event", "", 30.0f);
	pText2->setTouchEnabled(true);
	pText2->setLongClickSelector(this, longclick_selector(CCTextBasicTest::onLongClick));
	pText2->setClickSelector(this, click_selector(CCTextBasicTest::onClick));
	pText2->setTouchBeganSelector(this, touchbegan_selector(CCTextBasicTest::onTouchBegan));
	pText2->setTouchMovedSelector(this, touch_selector(CCTextBasicTest::onTouchMoved));
	pText2->setTouchEndedSelector(this, touch_selector(CCTextBasicTest::onTouchEnded));
	pText2->setTouchCancelledSelector(this, touch_selector(CCTextBasicTest::onTouchEnded));
	pText2->setColor(ccc3(0, 255, 0));
	pText2->setPosition(ccp(480, 380));
	m_pLayout->addChild(pText2);

	pText3 = CCTextTTF::create("none", "", 30.0f);
	pText3->setPosition(ccp(750, 380));
	m_pLayout->addChild(pText3);

	return true;
}

CCWidgetTouchModel CCTextBasicTest::onTouchBegan(CCObject* pSender, CCTouch* pTouch)
{
	CCTextTTF* pText = (CCTextTTF*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.3f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return eWidgetTouchTransient;
}

bool CCTextBasicTest::onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	return true;
}

bool CCTextBasicTest::onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CCTextTTF* pText = (CCTextTTF*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);
	return true;
}

void CCTextBasicTest::onClick(CCObject* pSender)
{
	pText3->setString("Clicked");
}

bool CCTextBasicTest::onLongClick(CCObject* pSender)
{
	pText3->setString("LongClicked");
	return false;
}

//////////////////////////////////////////////////////

bool CCTextAtlasTest::init()
{
	CCTextTestSceneBase::init();
	setTitle("CCTextBasicTest");
	setDescription("CCTextAtlas extern CCLabelAtlas (test event)");

	CCTextAtlas* pText = CCTextAtlas::create(";12456", "num.png", 26, 34, 49);
	pText->setTouchEnabled(true);
	pText->setAnchorPoint(ccp(0.5, 0.5));
	pText->setPosition(ccp(480, 320));
	pText->setTouchBeganSelector(this, touchbegan_selector(CCTextAtlasTest::onTouchBegan));
	pText->setTouchEndedSelector(this, touch_selector(CCTextAtlasTest::onTouchEnded));
	pText->setTouchCancelledSelector(this, touch_selector(CCTextAtlasTest::onTouchEnded));
	m_pLayout->addChild(pText);

	return true;
}

CCWidgetTouchModel CCTextAtlasTest::onTouchBegan(CCObject* pSender, CCTouch* pTouch)
{
	CCTextAtlas* pText = (CCTextAtlas*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.3f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return eWidgetTouchTransient;
}

bool CCTextAtlasTest::onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CCTextAtlas* pText = (CCTextAtlas*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);

	return true;
}

//////////////////////////////////////////////////////

bool CCTextBMFontTest::init()
{
	CCTextTestSceneBase::init();
	setTitle("CCTextBMFontTest");
	setDescription("CCTextBMFont extern CCLabelBMFont");

	CCTextBMFont* pText = CCTextBMFont::create("hello cocos2d-x and cocoswidget", "arial-unicode-26.fnt");
	pText->setPosition(ccp(480, 320));
	m_pLayout->addChild(pText);

	return true;
}