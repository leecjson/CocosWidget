#include "ToggleViewTest.h"

void CToggleViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCToggleViewTestScene();
}

void CToggleViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCToggleViewTestScene();
}

void CToggleViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCToggleViewTestScene();
}

//////////////////////////////////////////////////////

bool CToggleViewBasicTest::init()
{
	CToggleViewTestSceneBase::init();
	setTitle("CToggleViewBasicTest");
	setDescription("toggle button");

	CToggleView* pToggle = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle->setOnClickListener(this, ccw_click_selector(CToggleViewBasicTest::onClick));
	pToggle->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pToggle);

	m_pText = CLabel::create();
	m_pText->setAnchorPoint(CCPoint(0, 0.5));
	m_pText->setPosition(CCPoint(380, 400));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

void CToggleViewBasicTest::onClick(CCObject* pSender)
{
	CToggleView* pToggle = (CToggleView*) pSender;
	if( pToggle->isChecked() )
	{
		m_pText->setString("checked");
	}
	else
	{
		m_pText->setString("unchecked");
	}
}

//////////////////////////////////////////////////////

bool CToggleViewGroupTest::init()
{
	CToggleViewTestSceneBase::init();
	setTitle("CToggleViewGroupTest");
	setDescription("Toggle button in group");

	CToggleView* pToggle1 = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle1->setOnCheckListener(this, ccw_check_selector(CToggleViewGroupTest::onCheck));
	pToggle1->setPosition(CCPoint(200, 450));
	pToggle1->setExclusion(1);
	m_pLayout->addChild(pToggle1);

	CToggleView* pToggle2 = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle2->setOnCheckListener(this, ccw_check_selector(CToggleViewGroupTest::onCheck));
	pToggle2->setPosition(CCPoint(200, 350));
	pToggle2->setExclusion(1);
	m_pLayout->addChild(pToggle2);

	CToggleView* pToggle3 = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle3->setOnCheckListener(this, ccw_check_selector(CToggleViewGroupTest::onCheck));
	pToggle3->setPosition(CCPoint(200, 250));
	pToggle3->setExclusion(1);
	m_pLayout->addChild(pToggle3);

	CLabel* pText1 = CLabel::create();
	pText1->setAnchorPoint(CCPoint(0, 0.5));
	pText1->setPosition(CCPoint(350, 450));
	pText1->setFontSize(35.0f);
	pText1->setString("none");
	m_pLayout->addChild(pText1);
	pToggle1->setUserObject(pText1);

	CLabel* pText2 = CLabel::create();
	pText2->setAnchorPoint(CCPoint(0, 0.5));
	pText2->setPosition(CCPoint(350, 350));
	pText2->setFontSize(35.0f);
	pText2->setString("none");
	m_pLayout->addChild(pText2);
	pToggle2->setUserObject(pText2);

	CLabel* pText3 = CLabel::create();
	pText3->setAnchorPoint(CCPoint(0, 0.5));
	pText3->setPosition(CCPoint(350, 250));
	pText3->setFontSize(35.0f);
	pText3->setString("none");
	m_pLayout->addChild(pText3);
	pToggle3->setUserObject(pText3);


	CToggleView* pToggle4 = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle4->setPosition(CCPoint(700, 250));
	pToggle4->setExclusion(2);
	m_pLayout->addChild(pToggle4);

	CToggleView* pToggle5 = CToggleView::create("toggle1_2.png", "toggle1_1.png");
	pToggle5->setPosition(CCPoint(700, 350));
	pToggle5->setExclusion(2);
	m_pLayout->addChild(pToggle5);

	return true;
}

void CToggleViewGroupTest::onCheck(CCObject* pSender, bool bChecked)
{
	CToggleView* pToggle = (CToggleView*) pSender;
	CLabel* pText = (CLabel*) pToggle->getUserObject();

	if( bChecked )
	{
		pText->setString("checked");
	}
	else
	{
		pText->setString("unchecked");
	}
}