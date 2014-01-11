#include "LayoutTest.h"

void CLayoutTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCLayoutTestScene();
}

void CLayoutTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCLayoutTestScene();
}

void CLayoutTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCLayoutTestScene();
}

//////////////////////////////////////////////////////

bool CLayoutBasicTest::init()
{
	CLayoutTestSceneBase::init();
	setTitle("CLayoutBasicTest");
	setDescription("some things in a basic layout");

	CLayout* pLayout = CLayout::create();
	pLayout->setPosition(CCPoint(480 ,320));
	pLayout->setContentSize(CCSize(480, 320));
	pLayout->setBackgroundImage("background.png");
	m_pWindow->addChild(pLayout);

	CButton* pButton = CButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(150, 100));
	pLayout->addChild(pButton);

	CImageView* pImage = CImageView::create("icon.png");
	pImage->setPosition(CCPoint(200, 150));
	pLayout->addChild(pImage);

	return true;
}

//////////////////////////////////////////////////////

bool CLayoutColorTest::init()
{
	CLayoutTestSceneBase::init();
	setTitle("CLayoutColorTest");
	setDescription("color back ground");

	CLayout* pLayout = CLayout::create();
	pLayout->setBackgroundColor(ccc4(255, 0, 0, 255));
	pLayout->setPosition(CCPoint(480 ,320));
	pLayout->setContentSize(CCSize(480, 320));
	m_pWindow->addChild(pLayout);

	return true;
}

//////////////////////////////////////////////////////

bool CLayoutGradientTest::init()
{
	CLayoutTestSceneBase::init();
	setTitle("CLayoutGradientTest");
	setDescription("Gradient back ground");

	CLayout* pLayout = CLayout::create();
	pLayout->setBackgroundGradient(ccc4(255,0,0,255), ccc4(0, 255, 0, 128), CCPoint(1.0f, 0.0f));
	pLayout->setPosition(CCPoint(480 ,320));
	pLayout->setContentSize(CCSize(480, 320));
	m_pWindow->addChild(pLayout);

	return true;
}