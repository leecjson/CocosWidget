#include "ScrollViewTest.h"

void CScrollViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCScrollViewTestScene();
}

void CScrollViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCScrollViewTestScene();
}

void CScrollViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCScrollViewTestScene();
}

//////////////////////////////////////////////////////

bool CScrollViewBasicTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewBasicTest");
	setDescription("ScrollView basic test");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pBg);

	CScrollView* pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setPosition(CCPoint(480, 320));
	pScroll->setDirection(eScrollViewDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	return true;
}

//////////////////////////////////////////////////////

bool CScrollViewEventTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewEventTest");
	setDescription("test event");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(680, 320));
	m_pLayout->addChild(pBg);

	CScrollView* pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setOnScrollingListener(this, ccw_scrolling_selector(CScrollViewEventTest::onScrolling));
	pScroll->setPosition(CCPoint(680, 320));
	pScroll->setDirection(eScrollViewDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	m_pText1 = CLabel::create();
	m_pText1->setAnchorPoint(CCPoint(0, 0.5));
	m_pText1->setPosition(CCPoint(35, 460));
	m_pText1->setFontSize(35.0f);
	m_pText1->setString("contentOffset:");
	m_pLayout->addChild(m_pText1);

	return true;
}

void CScrollViewEventTest::onScrolling(CCObject* pSender)
{
	CScrollView* pScroll = (CScrollView*) pSender;

	char buff[64];
	sprintf(buff, "contentOffset:[%d][%d]", (int)pScroll->getContentOffset().x, (int)pScroll->getContentOffset().y);
	m_pText1->setString(buff);
}

//////////////////////////////////////////////////////

bool CScrollViewHorizontalTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewHorizontalTest");
	setDescription("direction by horizontal\n add some buttons and sprites ");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pBg);

	CScrollView* pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setPosition(CCPoint(480, 320));
	pScroll->setDirection(eScrollViewDirectionHorizontal);
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
		pIcon->setPosition(CCPoint(i * 100, 0));
		pScroll->getContainer()->addChild(pIcon);
	}

	for(int i = 0; i < 5; i++)
	{
		CButton* pButton = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setAnchorPoint(CCPointZero);
		pButton->setPosition(CCPoint(i * 200, 200));
		pScroll->getContainer()->addChild(pButton);
	}
	
	return true;
}

//////////////////////////////////////////////////////

bool CScrollViewVerticalTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewVerticalTest");
	setDescription("direction by vertical\n add some toggle button in the same group");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pBg);

	CScrollView* pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setPosition(CCPoint(480, 320));
	pScroll->setDirection(eScrollViewDirectionVertical);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	for(int i = 0; i < 5; i++)
	{
		CToggleView* pToggleButton = CToggleView::create("toggle1_1.png", "toggle1_2.png");
		pToggleButton->setAnchorPoint(CCPointZero);
		pToggleButton->setPosition(CCPoint(130, i * 130));
		pToggleButton->setExclusion(1);
		pScroll->getContainer()->addChild(pToggleButton);
	}

	return true;
}

//////////////////////////////////////////////////////

bool CScrollViewAttributeTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewAttributeTest");
	setDescription("test attribute of scroll");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(680, 320));
	m_pLayout->addChild(pBg);

	pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setPosition(CCPoint(680, 320));
	pScroll->setDirection(eScrollViewDirectionVertical);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	for(int i = 0; i < 5; i++)
	{
		CToggleView* pToggleButton = CToggleView::create("toggle1_1.png", "toggle1_2.png");
		pToggleButton->setAnchorPoint(CCPointZero);
		pToggleButton->setPosition(CCPoint(130, i * 130));
		pToggleButton->setExclusion(1);
		pScroll->getContainer()->addChild(pToggleButton);
	}

	CToggleView* pToggle1 = CToggleView::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle1->getLabel()->initWithString("setDeaccelerateable", "", 28);
	pToggle1->setPosition(150, 480);
	pToggle1->setChecked(true);
	pToggle1->setOnClickListener(this, ccw_click_selector(CScrollViewAttributeTest::onClick));
	pToggle1->setUserTag(1);
	m_pLayout->addChild(pToggle1);

	CLabel* pText1 = CLabel::create();
	pText1->setAnchorPoint(CCPoint(0, 0.5));
	pText1->setPosition(CCPoint(300, 480));
	pText1->setFontSize(35.0f);
	pText1->setString("true");
	m_pLayout->addChild(pText1);
	pToggle1->setUserObject(pText1);

	CToggleView* pToggle2 = CToggleView::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle2->getLabel()->initWithString("setBounceable", "", 28);
	pToggle2->setPosition(150, 400);
	pToggle2->setChecked(true);
	pToggle2->setOnClickListener(this, ccw_click_selector(CScrollViewAttributeTest::onClick));
	pToggle2->setUserTag(2);
	m_pLayout->addChild(pToggle2);

	CLabel* pText2 = CLabel::create();
	pText2->setAnchorPoint(CCPoint(0, 0.5));
	pText2->setPosition(CCPoint(300, 400));
	pText2->setFontSize(35.0f);
	pText2->setString("true");
	m_pLayout->addChild(pText2);
	pToggle2->setUserObject(pText2);


	CToggleView* pToggle3 = CToggleView::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle3->getLabel()->initWithString("setDragable", "", 28);
	pToggle3->setPosition(150, 320);
	pToggle3->setChecked(true);
	pToggle3->setOnClickListener(this, ccw_click_selector(CScrollViewAttributeTest::onClick));
	pToggle3->setUserTag(3);
	m_pLayout->addChild(pToggle3);

	CLabel* pText3 = CLabel::create();
	pText3->setAnchorPoint(CCPoint(0, 0.5));
	pText3->setPosition(CCPoint(300, 320));
	pText3->setFontSize(35.0f);
	pText3->setString("true");
	m_pLayout->addChild(pText3);
	pToggle3->setUserObject(pText3);


	CToggleView* pToggle4 = CToggleView::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pToggle4->getLabel()->initWithString("setTouchEnabled", "", 28);
	pToggle4->setPosition(150, 240);
	pToggle4->setChecked(true);
	pToggle4->setOnClickListener(this, ccw_click_selector(CScrollViewAttributeTest::onClick));
	pToggle4->setUserTag(4);
	m_pLayout->addChild(pToggle4);

	CLabel* pText4 = CLabel::create();
	pText4->setAnchorPoint(CCPoint(0, 0.5));
	pText4->setPosition(CCPoint(300, 240));
	pText4->setFontSize(35.0f);
	pText4->setString("true");
	m_pLayout->addChild(pText4);
	pToggle4->setUserObject(pText4);

	return true;
}

void CScrollViewAttributeTest::onClick(CCObject* pSender)
{
	CToggleView* pToggle = (CToggleView*) pSender;
	CLabel* pText = (CLabel*) pToggle->getUserObject();
	
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

bool CScrollViewAnimationTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewAnimationTest");
	setDescription("test animation");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(680, 320));
	m_pLayout->addChild(pBg);

	pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setPosition(CCPoint(680, 320));
	pScroll->setDirection(eScrollViewDirectionHorizontal);
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
		pIcon->setPosition(CCPoint(i * 100, 100));
		pScroll->getContainer()->addChild(pIcon);
	}


	CButton* pButton1 = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton1->getLabel()->initWithString("scrollToRight", "", 28);
	pButton1->setPosition(120, 480);
	pButton1->setOnClickListener(this, ccw_click_selector(CScrollViewAnimationTest::onClick));
	pButton1->setUserTag(1);
	m_pLayout->addChild(pButton1);

	CLabel* pText1 = CLabel::create();
	pText1->setAnchorPoint(CCPoint(0, 0.5));
	pText1->setPosition(CCPoint(240, 480));
	pText1->setFontSize(35.0f);
	pText1->setString("setContentOffsetInDuration");
	m_pLayout->addChild(pText1);


	CButton* pButton2 = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton2->getLabel()->initWithString("scrollToLeft", "", 28);
	pButton2->setPosition(120, 400);
	pButton2->setOnClickListener(this, ccw_click_selector(CScrollViewAnimationTest::onClick));
	pButton2->setUserTag(2);
	m_pLayout->addChild(pButton2);

	CLabel* pText2 = CLabel::create();
	pText2->setAnchorPoint(CCPoint(0, 0.5));
	pText2->setPosition(CCPoint(240, 400));
	pText2->setFontSize(35.0f);
	pText2->setString("setContentOffsetEaseIn");
	m_pLayout->addChild(pText2);

	CButton* pButton3 = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton3->getLabel()->initWithString("scrollToRight", "", 28);
	pButton3->setPosition(120, 320);
	pButton3->setOnClickListener(this, ccw_click_selector(CScrollViewAnimationTest::onClick));
	pButton3->setUserTag(3);
	m_pLayout->addChild(pButton3);

	CLabel* pText3 = CLabel::create();
	pText3->setAnchorPoint(CCPoint(0, 0.5));
	pText3->setPosition(CCPoint(240, 320));
	pText3->setFontSize(35.0f);
	pText3->setString("setContentOffset");
	m_pLayout->addChild(pText3);

	return true;
}

void CScrollViewAnimationTest::onClick(CCObject* pSender)
{
	CButton* pBtn = (CButton*) pSender;
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

bool CScrollViewInsideScrollTest::init()
{
	CScrollViewTestSceneBase::init();
	setTitle("CScrollViewInsideScrollTest");
	setDescription("Scroll view inside the other one");

	CScrollView* pScroll = CScrollView::create(CCSize(480, 320));
	pScroll->setBackgroundImage("background.png");
	pScroll->setPosition(CCPoint(480, 320));
	pScroll->setDirection(eScrollViewDirectionBoth);
	m_pLayout->addChild(pScroll);

	CCSprite* pSprite = CCSprite::create("scrollcontent.png");
	pSprite->setAnchorPoint(CCPointZero);
	pSprite->setPosition(CCPointZero);
	pScroll->setContainerSize(pSprite->getContentSize());
	pScroll->getContainer()->addChild(pSprite);

	CScrollView* pScroll2 = CScrollView::create(CCSize(272, 76));
	pScroll2->setDirection(eScrollViewDirectionHorizontal);
	pScroll2->setBackgroundImage("background3.png");
	pScroll2->setPosition(CCPoint(480 /2, 320 / 2));
	pScroll->getContainer()->addChild(pScroll2);

	pScroll2->setContainerSize(CCSize(62 * 20, 76));
	for( int i = 0; i < 20; ++i )
	{
		CCSprite* pSp = CCSprite::create("icon.png");
		pSp->setAnchorPoint(CCPointZero);
		pSp->setPosition(CCPoint(i * 62, 0));
		pScroll2->getContainer()->addChild(pSp);
	}

	return true;
}