#include "PanelTest.h"

void CPanelTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCPanelTestScene();
}

void CPanelTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCPanelTestScene();
}

void CPanelTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCPanelTestScene();
}

//////////////////////////////////////////////////////

bool CPanelBasicTest::init()
{
	CPanelTestSceneBase::init();
	setTitle("CPanelBasicTest");
	setDescription("some things in panel");

	CPanel* pPanel = CPanel::create();
	pPanel->setPosition(CCPoint(480 ,320));
	pPanel->setContentSize(CCSize(480, 320));
	pPanel->setBackgroundImage("background.png");
	m_pLayout->addChild(pPanel);

	CButton* pButton = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(150, 100));
	pPanel->addChild(pButton);

	CImageView* pImage = CImageView::create("icon.png");
	pImage->setPosition(CCPoint(200, 150));
	pPanel->addChild(pImage);

	return true;
}

//////////////////////////////////////////////////////

bool CPanelColorTest::init()
{
	CPanelTestSceneBase::init();
	setTitle("CPanelColorTest");
	setDescription("color panel");

	CPanelColor* pPanel = CPanelColor::create(ccc4(255, 0, 0, 255));
	pPanel->setPosition(CCPoint(480 ,320));
	pPanel->setContentSize(CCSize(480, 320));
	m_pLayout->addChild(pPanel);

	return true;
}