#include "ControlViewTest.h"

void CControlViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCControlViewTestScene();
}

void CControlViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCControlViewTestScene();
}

void CControlViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCControlViewTestScene();
}

//////////////////////////////////////////////////////

bool CControlViewBasicTest::init()
{
	CControlViewTestSceneBase::init();
	setTitle("CControlViewBasicTest");
	setDescription("control the icon to move");

	m_pIcon = CCSprite::create("icon.png");
	m_pIcon->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(m_pIcon);

	CControlView* pView = CControlView::create(
		"control_baseboard.png", "control_joystick.png");
	pView->setPosition(CCPoint(100, 100));
	pView->setRadius(pView->getContentSize().width / 2);
	pView->setOnControlListener(this, ccw_control_selector(CControlViewBasicTest::onTouched));
	pView->setAnchorPoint(CCPointZero);
	pView->setScale(1.5f);
	pView->setOpacity(200);
	m_pWindow->addChild(pView);

	CControlView* pView2 = CControlView::create();
	pView2->setBaseBoardImage("control_baseboard.png");
	pView2->setPosition(CCPoint(860, 100));
	pView2->setRadius(pView2->getContentSize().width / 2);
	pView2->setOnControlListener(this, ccw_control_selector(CControlViewBasicTest::onTouched));
	pView2->setAnchorPoint(CCPoint(1, 0));
	pView2->setScale(1.5f);
	pView2->setOpacity(200);
	m_pWindow->addChild(pView2);

	return true;
}
void CControlViewBasicTest::onTouched(CCObject* pSender, float fx, float fy)
{
	m_pIcon->setPosition(m_pIcon->getPosition() + CCPoint(fx, fy));
}


//////////////////////////////////////////////////////

