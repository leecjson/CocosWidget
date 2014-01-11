#include "DrawOrderTest.h"

void DrawOrderTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextDrawOrderTestScene();
}

void DrawOrderTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backDrawOrderTestScene();
}

void DrawOrderTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refDrawOrderTestScene();
}

//////////////////////////////////////////////////////

bool DrawOrderBasicTest::init()
{
	DrawOrderTestSceneBase::init();
	setTitle("DrawOrderBasicTest");
	setDescription("swap the zorder for see event dispatch");
	
	CButton* pSwapBtn = CButton::create();
	pSwapBtn->setPosition(CCPoint(170, 320));
	pSwapBtn->setScale9Enabled(true);
	pSwapBtn->setNormalImage("sprite9_btn1.png");
	pSwapBtn->setSelectedImage("sprite9_btn2.png");
	pSwapBtn->initText("swap z order", "", 30);
	pSwapBtn->setCascadeTextSizeEnabled(true, CCSize(50, 30));
	pSwapBtn->setOnClickListener(this, ccw_click_selector(DrawOrderBasicTest::onClick));
	m_pWindow->addChild(pSwapBtn);

	pButton1 = CButton::create("btn1_1.png", "btn1_2.png");
	pButton1->setZOrder(1);
	pButton1->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pButton1);

	pButton2 = CButton::create("btn1_1.png", "btn1_2.png");
	pButton2->setZOrder(2);
	pButton2->setPosition(CCPoint(520, 350));
	m_pWindow->addChild(pButton2);

	return true;
}

void DrawOrderBasicTest::onClick(CCObject* pSender)
{
	int z = pButton2->getZOrder();
	pButton2->setZOrder(pButton1->getZOrder());
	pButton1->setZOrder(z);
}

//////////////////////////////////////////////////////