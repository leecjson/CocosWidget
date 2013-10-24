#include "CCPanelTest.h"

void CCPanelTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCPanelTestScene();
}

void CCPanelTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCPanelTestScene();
}

void CCPanelTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCPanelTestScene();
}

//////////////////////////////////////////////////////

bool CCPanelBasicTest::init()
{
	CCPanelTestSceneBase::init();
	setTitle("CCPanelBasicTest");
	setDescription("some things in panel");

	CCPanel* pPanel = CCPanel::create();
	pPanel->setPosition(ccp(480 ,320));
	pPanel->setContentSize(ccp(480, 320));
	pPanel->setBackgroundNode(CCSprite::create("background.png"));
	m_pLayout->addChild(pPanel);

	CCButton* pButton = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(ccp(150, 100));
	pPanel->addChild(pButton);

	CCImageBox* pImage = CCImageBox::create("icon.png");
	pImage->setPosition(ccp(200, 150));
	pPanel->addChild(pImage);

	return true;
}

//////////////////////////////////////////////////////

bool CCPanelColorTest::init()
{
	CCPanelTestSceneBase::init();
	setTitle("CCPanelColorTest");
	setDescription("color panel");

	CCPanelColor* pPanel = CCPanelColor::create(ccc4(255, 0, 0, 255));
	pPanel->setPosition(ccp(480 ,320));
	pPanel->setContentSize(ccp(480, 320));
	m_pLayout->addChild(pPanel);

	return true;
}