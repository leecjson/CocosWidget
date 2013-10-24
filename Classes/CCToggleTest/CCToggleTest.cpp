#include "CCToggleTest.h"

void CCToggleTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCToggleTestScene();
}

void CCToggleTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCToggleTestScene();
}

void CCToggleTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCToggleTestScene();
}

//////////////////////////////////////////////////////

bool CCToggleBasicTest::init()
{
	CCToggleTestSceneBase::init();
	setTitle("CCToggleBasicTest");
	setDescription("toggle button");

	CCToggle* pToggle = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle->setClickSelector(this, click_selector(CCToggleBasicTest::onClick));
	pToggle->setPosition(ccp(480, 320));
	m_pLayout->addChild(pToggle);

	m_pText = CCTextTTF::create();
	m_pText->setAnchorPoint(ccp(0, 0.5));
	m_pText->setPosition(ccp(380, 400));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

void CCToggleBasicTest::onClick(CCObject* pSender)
{
	CCToggle* pToggle = (CCToggle*) pSender;
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

bool CCToggleGroupTest::init()
{
	CCToggleTestSceneBase::init();
	setTitle("CCToggleBasicTest");
	setDescription("Toggle button in group");

	CCToggle* pToggle1 = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle1->setCheckSelector(this, check_selector(CCToggleGroupTest::onCheck));
	pToggle1->setPosition(ccp(200, 450));
	pToggle1->setExclusion(1);
	m_pLayout->addChild(pToggle1);

	CCToggle* pToggle2 = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle2->setCheckSelector(this, check_selector(CCToggleGroupTest::onCheck));
	pToggle2->setPosition(ccp(200, 350));
	pToggle2->setExclusion(1);
	m_pLayout->addChild(pToggle2);

	CCToggle* pToggle3 = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle3->setCheckSelector(this, check_selector(CCToggleGroupTest::onCheck));
	pToggle3->setPosition(ccp(200, 250));
	pToggle3->setExclusion(1);
	m_pLayout->addChild(pToggle3);

	CCTextTTF* pText1 = CCTextTTF::create();
	pText1->setAnchorPoint(ccp(0, 0.5));
	pText1->setPosition(ccp(350, 450));
	pText1->setFontSize(35.0f);
	pText1->setString("none");
	m_pLayout->addChild(pText1);
	pToggle1->setUserObject(pText1);

	CCTextTTF* pText2 = CCTextTTF::create();
	pText2->setAnchorPoint(ccp(0, 0.5));
	pText2->setPosition(ccp(350, 350));
	pText2->setFontSize(35.0f);
	pText2->setString("none");
	m_pLayout->addChild(pText2);
	pToggle2->setUserObject(pText2);

	CCTextTTF* pText3 = CCTextTTF::create();
	pText3->setAnchorPoint(ccp(0, 0.5));
	pText3->setPosition(ccp(350, 250));
	pText3->setFontSize(35.0f);
	pText3->setString("none");
	m_pLayout->addChild(pText3);
	pToggle3->setUserObject(pText3);


	CCToggle* pToggle4 = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle4->setPosition(ccp(700, 250));
	pToggle4->setExclusion(2);
	m_pLayout->addChild(pToggle4);

	CCToggle* pToggle5 = CCToggle::create("toggle1_2.png", "toggle1_1.png");
	pToggle5->setPosition(ccp(700, 350));
	pToggle5->setExclusion(2);
	m_pLayout->addChild(pToggle5);

	return true;
}

void CCToggleGroupTest::onCheck(CCObject* pSender, bool bChecked)
{
	CCToggle* pToggle = (CCToggle*) pSender;
	CCTextTTF* pText = (CCTextTTF*) pToggle->getUserObject();

	if( bChecked )
	{
		pText->setString("checked");
	}
	else
	{
		pText->setString("unchecked");
	}
}