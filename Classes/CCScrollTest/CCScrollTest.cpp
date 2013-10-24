#include "CCScrollTest.h"

void CCScrollTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCScrollTestScene();
}

void CCScrollTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCScrollTestScene();
}

void CCScrollTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCScrollTestScene();
}

//////////////////////////////////////////////////////

bool CCScrollBasicTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollBasicTest");
	setDescription("ScrollView basic test");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	CCScroll* pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setPosition(ccp(480, 320));
	pScroll->setDirection(eScrollDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	return true;
}

//////////////////////////////////////////////////////

bool CCScrollEventTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollEventTest");
	setDescription("test event");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(680, 320));
	m_pLayout->addChild(pBg);

	CCScroll* pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setScrollSelector(this, scroll_selector(CCScrollEventTest::onScrolling));
	pScroll->setPosition(ccp(680, 320));
	pScroll->setDirection(eScrollDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	m_pText1 = CCTextTTF::create();
	m_pText1->setAnchorPoint(ccp(0, 0.5));
	m_pText1->setPosition(ccp(35, 460));
	m_pText1->setFontSize(35.0f);
	m_pText1->setString("contentOffset:");
	m_pLayout->addChild(m_pText1);

	return true;
}

void CCScrollEventTest::onScrolling(CCObject* pSender)
{
	CCScroll* pScroll = (CCScroll*) pSender;

	char buff[64];
	sprintf(buff, "contentOffset:[%d][%d]", (int)pScroll->getContentOffset().x, (int)pScroll->getContentOffset().y);
	m_pText1->setString(buff);
}

//////////////////////////////////////////////////////

bool CCScrollHorizontalTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollHorizontalTest");
	setDescription("direction by horizontal\n add some buttons and sprites ");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	CCScroll* pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setPosition(ccp(480, 320));
	pScroll->setDirection(eScrollDirectionHorizontal);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);
	
	for(int i = 0; i < 10; i++)
	{
		CCSprite* pIcon = CCSprite::create("icon.png");
		pIcon->setAnchorPoint(CCPointZero);
		pIcon->setPosition(ccp(i * 100, 0));
		pScroll->getContainer()->addChild(pIcon);
	}

	for(int i = 0; i < 5; i++)
	{
		CCButton* pButton = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setAnchorPoint(CCPointZero);
		pButton->setPosition(ccp(i * 200, 200));
		pScroll->getContainer()->addChild(pButton);
	}
	
	return true;
}

//////////////////////////////////////////////////////

bool CCScrollVerticalTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollVerticalTest");
	setDescription("direction by vertical\n add some toggle button in the same group");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	CCScroll* pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setPosition(ccp(480, 320));
	pScroll->setDirection(eScrollDirectionVertical);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	for(int i = 0; i < 5; i++)
	{
		CCToggle* pToggleButton = CCToggle::create("toggle1_1.png", "toggle1_2.png");
		pToggleButton->setAnchorPoint(CCPointZero);
		pToggleButton->setPosition(ccp(130, i * 130));
		pToggleButton->setExclusion(1);
		pScroll->getContainer()->addChild(pToggleButton);
	}

	return true;
}

//////////////////////////////////////////////////////

bool CCScrollAttributeTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollAttributeTest");
	setDescription("test attribute of scroll");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(680, 320));
	m_pLayout->addChild(pBg);

	pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setPosition(ccp(680, 320));
	pScroll->setDirection(eScrollDirectionVertical);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	for(int i = 0; i < 5; i++)
	{
		CCToggle* pToggleButton = CCToggle::create("toggle1_1.png", "toggle1_2.png");
		pToggleButton->setAnchorPoint(CCPointZero);
		pToggleButton->setPosition(ccp(130, i * 130));
		pToggleButton->setExclusion(1);
		pScroll->getContainer()->addChild(pToggleButton);
	}

	CCToggle* pToggle1 = CCToggle::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle1->getTextTTF()->initWithString("setDeaccelerateable", "", 28);
	pToggle1->setPosition(150, 480);
	pToggle1->setChecked(true);
	pToggle1->setClickSelector(this, click_selector(CCScrollAttributeTest::onClick));
	pToggle1->setUserTag(1);
	m_pLayout->addChild(pToggle1);

	CCTextTTF* pText1 = CCTextTTF::create();
	pText1->setAnchorPoint(ccp(0, 0.5));
	pText1->setPosition(ccp(300, 480));
	pText1->setFontSize(35.0f);
	pText1->setString("true");
	m_pLayout->addChild(pText1);
	pToggle1->setUserObject(pText1);

	CCToggle* pToggle2 = CCToggle::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle2->getTextTTF()->initWithString("setBounceable", "", 28);
	pToggle2->setPosition(150, 400);
	pToggle2->setChecked(true);
	pToggle2->setClickSelector(this, click_selector(CCScrollAttributeTest::onClick));
	pToggle2->setUserTag(2);
	m_pLayout->addChild(pToggle2);

	CCTextTTF* pText2 = CCTextTTF::create();
	pText2->setAnchorPoint(ccp(0, 0.5));
	pText2->setPosition(ccp(300, 400));
	pText2->setFontSize(35.0f);
	pText2->setString("true");
	m_pLayout->addChild(pText2);
	pToggle2->setUserObject(pText2);


	CCToggle* pToggle3 = CCToggle::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle3->getTextTTF()->initWithString("setDragable", "", 28);
	pToggle3->setPosition(150, 320);
	pToggle3->setChecked(true);
	pToggle3->setClickSelector(this, click_selector(CCScrollAttributeTest::onClick));
	pToggle3->setUserTag(3);
	m_pLayout->addChild(pToggle3);

	CCTextTTF* pText3 = CCTextTTF::create();
	pText3->setAnchorPoint(ccp(0, 0.5));
	pText3->setPosition(ccp(300, 320));
	pText3->setFontSize(35.0f);
	pText3->setString("true");
	m_pLayout->addChild(pText3);
	pToggle3->setUserObject(pText3);


	CCToggle* pToggle4 = CCToggle::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle4->getTextTTF()->initWithString("setTouchEnabled", "", 28);
	pToggle4->setPosition(150, 240);
	pToggle4->setChecked(true);
	pToggle4->setClickSelector(this, click_selector(CCScrollAttributeTest::onClick));
	pToggle4->setUserTag(4);
	m_pLayout->addChild(pToggle4);

	CCTextTTF* pText4 = CCTextTTF::create();
	pText4->setAnchorPoint(ccp(0, 0.5));
	pText4->setPosition(ccp(300, 240));
	pText4->setFontSize(35.0f);
	pText4->setString("true");
	m_pLayout->addChild(pText4);
	pToggle4->setUserObject(pText4);

	return true;
}

void CCScrollAttributeTest::onClick(CCObject* pSender)
{
	CCToggle* pToggle = (CCToggle*) pSender;
	CCTextTTF* pText = (CCTextTTF*) pToggle->getUserObject();
	
	if( pToggle->isChecked() )
	{
		pText->setString("true");
	}
	else
	{
		pText->setString("false");
	}

	if( pToggle->getUserTag() == 1 )
	{
		pScroll->setDeaccelerateable(pToggle->isChecked());
	}
	else if( pToggle->getUserTag() == 2 )
	{
		pScroll->setBounceable(pToggle->isChecked());
	}
	else if( pToggle->getUserTag() == 3 )
	{
		pScroll->setDragable(pToggle->isChecked());
	}
	else if( pToggle->getUserTag() == 4 )
	{
		pScroll->setTouchEnabled(pToggle->isChecked());
	}
}

//////////////////////////////////////////////////////

bool CCScrollAnimationTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollAnimationTest");
	setDescription("test animation");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(680, 320));
	m_pLayout->addChild(pBg);

	pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setPosition(ccp(680, 320));
	pScroll->setDirection(eScrollDirectionHorizontal);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	for(int i = 0; i < 10; i++)
	{
		CCSprite* pIcon = CCSprite::create("icon.png");
		pIcon->setAnchorPoint(CCPointZero);
		pIcon->setPosition(ccp(i * 100, 100));
		pScroll->getContainer()->addChild(pIcon);
	}


	CCButton* pButton1 = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton1->getTextTTF()->initWithString("scrollToRight", "", 28);
	pButton1->setPosition(120, 480);
	pButton1->setClickSelector(this, click_selector(CCScrollAnimationTest::onClick));
	pButton1->setUserTag(1);
	m_pLayout->addChild(pButton1);

	CCTextTTF* pText1 = CCTextTTF::create();
	pText1->setAnchorPoint(ccp(0, 0.5));
	pText1->setPosition(ccp(240, 480));
	pText1->setFontSize(35.0f);
	pText1->setString("setContentOffsetInDuration");
	m_pLayout->addChild(pText1);


	CCButton* pButton2 = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton2->getTextTTF()->initWithString("scrollToLeft", "", 28);
	pButton2->setPosition(120, 400);
	pButton2->setClickSelector(this, click_selector(CCScrollAnimationTest::onClick));
	pButton2->setUserTag(2);
	m_pLayout->addChild(pButton2);

	CCTextTTF* pText2 = CCTextTTF::create();
	pText2->setAnchorPoint(ccp(0, 0.5));
	pText2->setPosition(ccp(240, 400));
	pText2->setFontSize(35.0f);
	pText2->setString("setContentOffsetEaseIn");
	m_pLayout->addChild(pText2);

	CCButton* pButton3 = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton3->getTextTTF()->initWithString("scrollToRight", "", 28);
	pButton3->setPosition(120, 320);
	pButton3->setClickSelector(this, click_selector(CCScrollAnimationTest::onClick));
	pButton3->setUserTag(3);
	m_pLayout->addChild(pButton3);

	CCTextTTF* pText3 = CCTextTTF::create();
	pText3->setAnchorPoint(ccp(0, 0.5));
	pText3->setPosition(ccp(240, 320));
	pText3->setFontSize(35.0f);
	pText3->setString("setContentOffset");
	m_pLayout->addChild(pText3);

	return true;
}

void CCScrollAnimationTest::onClick(CCObject* pSender)
{
	CCButton* pBtn = (CCButton*) pSender;
	if( pBtn->getUserTag() == 1 )
	{
		pScroll->setContentOffsetInDuration(pScroll->getMinOffset(), 1.0f);
	}
	else if( pBtn->getUserTag() == 2 )
	{
		pScroll->setContentOffsetEaseIn(pScroll->getMaxOffset(), 1.0f, 0.2f);
	}
	else if( pBtn->getUserTag() == 3 )
	{
		pScroll->setContentOffset(pScroll->getMinOffset());
	}
}

//////////////////////////////////////////////////////

bool CCScrollInsideScrollTest::init()
{
	CCScrollTestSceneBase::init();
	setTitle("CCScrollInsideScrollTest");
	setDescription("Scroll view inside the other one");

	CCScroll* pScroll = CCScroll::create(CCSize(480, 320));
	pScroll->setBackgroundNode(CCSprite::create("background.png"));
	pScroll->setPosition(ccp(480, 320));
	pScroll->setDirection(eScrollDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	CCScroll* pScroll2 = CCScroll::create(CCSize(272, 76));
	pScroll2->setDirection(eScrollDirectionHorizontal);
	pScroll2->setBackgroundNode(CCSprite::create("background3.png"));
	pScroll2->setPosition(ccp(480 /2, 320 / 2));
	pScroll->getContainer()->addChild(pScroll2);

	pScroll2->setContainerSize(CCSize(62 * 20, 76));
	for( int i = 0; i < 20; ++i )
	{
		CCSprite* pSp = CCSprite::create("icon.png");
		pSp->setAnchorPoint(CCPointZero);
		pSp->setPosition(ccp(i * 62, 0));
		pScroll2->getContainer()->addChild(pSp);
	}

	return true;
}