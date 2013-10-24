#include "CCButtonTest.h"

void CCButtonTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCButtonTestScene();
}

void CCButtonTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCButtonTestScene();
}

void CCButtonTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCButtonTestScene();
}

//////////////////////////////////////////////////////

bool CCButtonBasicTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonBasicTest");
	setDescription("button by create");

	CCButton* pButton = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton->setPosition(ccp(480, 320));
	m_pLayout->addChild(pButton);

	return true;
}

//////////////////////////////////////////////////////

bool CCButtonEventTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonEventTest");
	setDescription("button events");

	CCButton* pButton1 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1->setTouchBeganSelector(this, touchbegan_selector(CCButtonEventTest::onTouchBegan));
	pButton1->setTouchMovedSelector(this, touch_selector(CCButtonEventTest::onTouchMoved));
	pButton1->setTouchEndedSelector(this, touch_selector(CCButtonEventTest::onTouchEnded));
	pButton1->setTouchCancelledSelector(this, touch_selector(CCButtonEventTest::onTouchCancelled));
	pButton1->setPosition(ccp(350, 320));
	m_pLayout->addChild(pButton1);

	m_pText1 = CCTextTTF::create();
	m_pText1->setAnchorPoint(ccp(0, 0.5));
	m_pText1->setPosition(ccp(260, 430));
	m_pText1->setFontSize(35.0f);
	m_pText1->setString("none");
	m_pLayout->addChild(m_pText1);

	m_pDurationText = CCTextTTF::create();
	m_pDurationText->setPosition(ccp(260, 390));
	m_pDurationText->setFontSize(35.0f);
	m_pDurationText->setString("ms:0");
	m_pDurationText->setAnchorPoint(ccp(0, 0.5));
	m_pLayout->addChild(m_pDurationText);

	CCButton* pButton2 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2->setClickSelector(this, click_selector(CCButtonEventTest::onClick));
	pButton2->setPosition(ccp(610, 320));
	m_pLayout->addChild(pButton2);

	m_pText2 = CCTextTTF::create();
	m_pText2->setAnchorPoint(ccp(0, 0.5));
	m_pText2->setPosition(ccp(520, 430));
	m_pText2->setFontSize(35.0f);
	m_pText2->setString("none");
	m_pLayout->addChild(m_pText2);

	return true;
}

void CCButtonEventTest::setDuration(float fDuration)
{
	char buff[48] = {0};
	sprintf(buff, "ms:%f", fDuration);
	m_pDurationText->setString(buff);
}

void CCButtonEventTest::onClick(CCObject* pSender)
{
	m_pText2->setString("Clicked");
}

CCWidgetTouchModel CCButtonEventTest::onTouchBegan(CCObject* pSender, CCTouch* pTouch)
{
	m_pText1->setString("Down");
	return eWidgetTouchTransient;
}

bool CCButtonEventTest::onTouchMoved(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	m_pText1->setString("Moved");
	setDuration(fDuration);
	return true;
}

bool CCButtonEventTest::onTouchEnded(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	m_pText1->setString("Ended");
	setDuration(fDuration);
	return true;
}

bool CCButtonEventTest::onTouchCancelled(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	m_pText1->setString("Cancelled");
	setDuration(fDuration);
	return true;
}

////////////////////////////////////////////////////////

bool CCButtonLongClickTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonLongClickTest");
	setDescription("drag the 2s button after long click\n (the touch event will back to CCWidgetLayout after long click)");

	CCButton* pButton1 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1->setClickSelector(this, click_selector(CCButtonLongClickTest::onClick));
	pButton1->setLongClickSelector(this, longclick_selector(CCButtonLongClickTest::onButton1LongClick));
	pButton1->setPosition(ccp(350, 320));
	m_pLayout->addChild(pButton1);

	m_pText1 = CCTextTTF::create();
	m_pText1->setAnchorPoint(ccp(0, 0.5));
	m_pText1->setPosition(ccp(260, 430));
	m_pText1->setFontSize(35.0f);
	m_pText1->setString("none");
	m_pLayout->addChild(m_pText1);

	m_pLayout->setTouchMovedAfterLongClickSelector(this, afterlongclick_selector(CCButtonLongClickTest::onLayoutTouchMovedAfterLongClick));

	m_pText2 = CCTextTTF::create();
	m_pText2->setAnchorPoint(ccp(0, 0.5));
	m_pText2->setPosition(ccp(520, 430));
	m_pText2->setFontSize(35.0f);
	m_pText2->setString("drag after long click!");
	m_pLayout->addChild(m_pText2);

	pButton2 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2->setLongClickSelector(this, longclick_selector(CCButtonLongClickTest::onButton2LongClick));
	pButton2->setPosition(ccp(610, 320));
	m_pLayout->addChild(pButton2);

	return true;
}

void CCButtonLongClickTest::onClick(CCObject* pSender)
{
	m_pText1->setString("Clicked");
}

bool CCButtonLongClickTest::onButton1LongClick(CCObject* pSender)
{
	m_pText1->setString("Long Clicked");
	return false;
}

bool CCButtonLongClickTest::onButton2LongClick(CCObject* pSender)
{
	return true;
}

void CCButtonLongClickTest::onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CCPoint tPoint = m_pLayout->convertTouchToNodeSpace(pTouch);
	
	if( pSender == pButton2 )
	{
		pButton2->setPosition(tPoint);
	}
}

////////////////////////////////////////////////////////

bool CCButtonWithTextTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonWithTextTest");
	setDescription("TextButton and offset for text");

	CCButton* pButton1 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1->setPosition(ccp(350, 320));
	pButton1->getTextTTF()->setFontSize(32.0f);
	pButton1->getTextTTF()->setString("Cocos2d-x");
	pButton1->getTextTTF()->enableShadow(CCSizeMake(2, 2), 0.1f, 0.1f);
	m_pLayout->addChild(pButton1);

	CCTextTTF* pText1 = CCTextTTF::create();
	pText1->setAnchorPoint(ccp(0, 0.5));
	pText1->setPosition(ccp(260, 430));
	pText1->setFontSize(35.0f);
	pText1->setString("Shadow Text");
	m_pLayout->addChild(pText1);

	CCButton* pButton2 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2->getTextTTF()->initWithString("CocosWidget", "", 32.0f);
	pButton2->setTextOffset(ccp(0, 10));
	pButton2->setPosition(ccp(610, 320));
	m_pLayout->addChild(pButton2);

	CCTextTTF* pText2 = CCTextTTF::create();
	pText2->setAnchorPoint(ccp(0, 0.5));
	pText2->setPosition(ccp(520, 430));
	pText2->setFontSize(35.0f);
	pText2->setString("Text With Offset");
	m_pLayout->addChild(pText2);

	return true;
}

////////////////////////////////////////////////////////

bool CCButtonAttributeTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonAttributeTest");
	setDescription("");

	CCButton* pButton1 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1->getTextTTF()->initWithString("true", "", 30.0f);
	pButton1->setPosition(ccp(480, 500));
	pButton1->setEnabled(true);
	m_pLayout->addChild(pButton1);

	CCButton* pButton1ex = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton1ex->getTextTTF()->initWithString("false", "", 30.0f);
	pButton1ex->setPosition(ccp(680, 500));
	pButton1ex->setEnabled(false);
	m_pLayout->addChild(pButton1ex);

	CCTextTTF* pText1 = CCTextTTF::create();
	pText1->setAnchorPoint(ccp(1, 0.5));
	pText1->setPosition(ccp(350, 500));
	pText1->setFontSize(35.0f);
	pText1->setString("setEnabled()");
	m_pLayout->addChild(pText1);


	CCButton* pButton2 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2->getTextTTF()->initWithString("true", "", 30.0f);
	pButton2->setPosition(ccp(480, 400));
	pButton2->setTouchEnabled(true);
	m_pLayout->addChild(pButton2);

	CCButton* pButton2ex = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton2ex->getTextTTF()->initWithString("false", "", 30.0f);
	pButton2ex->setPosition(ccp(680, 400));
	pButton2ex->setTouchEnabled(false);
	m_pLayout->addChild(pButton2ex);

	CCTextTTF* pText2 = CCTextTTF::create();
	pText2->setAnchorPoint(ccp(1, 0.5));
	pText2->setPosition(ccp(350, 400));
	pText2->setFontSize(35.0f);
	pText2->setString("setTouchEnabled()");
	m_pLayout->addChild(pText2);


	CCButton* pButton3 = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton3->getTextTTF()->initWithString("true", "", 30.0f);
	pButton3->setPosition(ccp(480, 300));
	pButton3->setVisible(true);
	m_pLayout->addChild(pButton3);

	CCButton* pButton3ex = CCButton::create("btn1_1.png", "btn1_2.png", "btn1_3.png");
	pButton3ex->getTextTTF()->initWithString("false", "", 30.0f);
	pButton3ex->setPosition(ccp(680, 300));
	pButton3ex->setVisible(false);
	m_pLayout->addChild(pButton3ex);

	CCTextTTF* pText3 = CCTextTTF::create();
	pText3->setAnchorPoint(ccp(1, 0.5));
	pText3->setPosition(ccp(350, 300));
	pText3->setFontSize(35.0f);
	pText3->setString("setVisible()");
	m_pLayout->addChild(pText3);

	return true;
}

////////////////////////////////////////////////////////

bool CCButton9SpriteTest::init()
{
	CCButtonTestSceneBase::init();
	setTitle("CCButtonAttributeTest");
	setDescription("9PatchSprite by create");

	CCButton* pButton = CCButton::createWith9Sprite(CCSize(196, 68),"sprite9_btn1.png", "sprite9_btn2.png");
	pButton->getTextTTF()->initWithString("one", "", 30.0f);
	pButton->setPosition(ccp(480, 370));
	m_pLayout->addChild(pButton);

	CCButton* pButton2 = CCButton::create();
	pButton2->setContentSize(CCSize(196, 68));
	pButton2->set9SpriteEnabled(true);
	pButton2->setNormalImage("sprite9_btn1.png");
	pButton2->setSelectedImage("sprite9_btn2.png");
	pButton2->getTextTTF()->initWithString("two", "", 30.0f);
	pButton2->setPosition(ccp(480, 270));
	m_pLayout->addChild(pButton2);

	return true;
}