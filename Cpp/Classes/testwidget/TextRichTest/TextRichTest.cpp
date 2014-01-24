#include "TextRichTest.h"

void CTextRichTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCTextRichTestScene();
}

void CTextRichTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCTextRichTestScene();
}

void CTextRichTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCTextRichTestScene();
}

//////////////////////////////////////////////////////

bool CTextRichBasicTest::init()
{
	CTextRichTestSceneBase::init();
	setTitle("CTextRichBasicTest");
	setDescription("a basic text rich widget with a single line");

	CTextRich* pTextRich = CTextRich::create();
	pTextRich->insertElement("TEXT", "", 20);
	pTextRich->insertElement("Rich", "", 45);
	pTextRich->insertElement("And", "", 25, ccRED);
	pTextRich->insertElement("cocos2d-x", "", 70, ccBLUE);
	pTextRich->setPosition(ccp(960/2, 640/2));
	pTextRich->reloadData();

	CColorView* pColor = CColorView::create(ccc4(255, 0, 0, 50));
	pColor->setContentSize(pTextRich->getContentSize());
	pColor->setPosition(ccp(960/2, 640/2));

	m_pWindow->addChild(pColor);
	m_pWindow->addChild(pTextRich);

	return true;
}


//////////////////////////////////////////////////////

bool CTextRichEventTest::init()
{
	CTextRichTestSceneBase::init();
	setTitle("CTextRichBasicTest");
	setDescription("mutil line and event test");

	CTextRich* pTextRich = CTextRich::create();
	pTextRich->setMaxLineLength(20);
	pTextRich->setVerticalSpacing(15.0f);
	pTextRich->insertElement("[System]:", "", 30);
	pTextRich->insertElement("cocos2d-x ", "", 30, ccRED);
	pTextRich->insertElement("is a good mobile phone game engine and ");
	pTextRich->insertElement("cocoswidget ", "", 30, ccRED);
	pTextRich->insertElement("be helpful for it ", "", 30, ccORANGE);
	pTextRich->insertElement("[ click me ] ", "", 30, ccMAGENTA, "Label");
	pTextRich->insertElement("my name ", "", 30);
	pTextRich->insertElement("Jason lee - Lijunlin", "", 30, ccYELLOW, "Jason lee - Lijunlin");

	CCSprite* pIcon = CCSprite::create("icon.png");
	pIcon->runAction(CCRepeatForever::create(CCBlink::create(1.0f, 5)));

	pTextRich->insertElement(pIcon, 4, "Image");
	pTextRich->insertElement("hehe ByeBye","", 30);
	pTextRich->setPosition(CCPoint(960/2, 640/2));
	pTextRich->reloadData();
	pTextRich->setOnTextRichClickListener(this, ccw_textrichclick_selector(CTextRichEventTest::onClickTextRich));
	m_pWindow->addChild(pTextRich);

	m_pLabel = CLabel::create("None", "", 30);
	m_pLabel->setPosition(CCPoint(800, 320));
	m_pWindow->addChild(m_pLabel);

	return true;
}

void CTextRichEventTest::onClickTextRich(CCObject* pSender, const char* pDescription)
{
	if( pDescription )
	{
		m_pLabel->setString(pDescription);
	}
	else
	{
		m_pLabel->setString("click");
	}
}

