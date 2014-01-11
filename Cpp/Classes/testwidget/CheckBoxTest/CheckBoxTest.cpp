#include "CheckBoxTest.h"

void CCheckBoxTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCheckBoxTestScene();
}

void CCheckBoxTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCheckBoxTestScene();
}

void CCheckBoxTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCheckBoxTestScene();
}

//////////////////////////////////////////////////////

bool CCheckBoxBasicTest::init()
{
	CCheckBoxTestSceneBase::init();
	setTitle("CCheckBoxBasicTest");
	setDescription("checkbox face, click it");

	CCheckBox* pCheckBox = CCheckBox::create();
	pCheckBox->setNormalImage("ckb_normal_01.png");
	pCheckBox->setNormalPressImage("ckb_normal_02.png");
	pCheckBox->setCheckedImage("ckb_selected_01.png");
	pCheckBox->setCheckedPressImage("ckb_selected_02.png");
	pCheckBox->setDisabledNormalImage("ckb_disable_01.png");
	pCheckBox->setDisabledCheckedImage("ckb_disable_02.png");
	pCheckBox->setOnClickListener(this, ccw_click_selector(CCheckBoxBasicTest::onClick));
	pCheckBox->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pCheckBox);

	CCheckBox* pCheckBox2 = CCheckBox::create();
	pCheckBox2->setNormalImage("ckb_normal_01.png");
	pCheckBox2->setCheckedImage("ckb_selected_01.png");
	pCheckBox2->setOnClickListener(this, ccw_click_selector(CCheckBoxBasicTest::onClick));
	pCheckBox2->setPosition(CCPoint(560, 320));
	m_pWindow->addChild(pCheckBox2);

	m_pText = CLabel::create();
	m_pText->setAnchorPoint(CCPoint(0, 0.5));
	m_pText->setPosition(CCPoint(380, 400));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pWindow->addChild(m_pText);

	return true;
}

void CCheckBoxBasicTest::onClick(CCObject* pSender)
{
	CCheckBox* pCheckBox = (CCheckBox*) pSender;
	if( pCheckBox->isChecked() )
	{
		m_pText->setString("checked");
	}
	else
	{
		m_pText->setString("unchecked");
	}
}

//////////////////////////////////////////////////////

#define CREATE_CHECKBOX(_NAME_, _POS_) \
CCheckBox* _NAME_ = CCheckBox::create(); \
_NAME_->setNormalImage("ckb_normal_01.png"); \
_NAME_->setNormalPressImage("ckb_normal_02.png"); \
_NAME_->setCheckedImage("ckb_selected_01.png"); \
_NAME_->setCheckedPressImage("ckb_selected_02.png"); \
_NAME_->setDisabledNormalImage("ckb_disable_01.png"); \
_NAME_->setDisabledCheckedImage("ckb_disable_02.png"); \
_NAME_->setPosition(_POS_);

bool CCheckBoxExclusionTest::init()
{
	CCheckBoxTestSceneBase::init();
	setTitle("CCheckBoxExclusionTest");
	setDescription("checkbox exclusion test");

	CREATE_CHECKBOX(pCheckBox1, CCPoint(480, 490));
	pCheckBox1->setTag(1);
	pCheckBox1->setExclusion(1);
	pCheckBox1->setChecked(true);
	pCheckBox1->setEnabled(false);
	m_pWindow->addChild(pCheckBox1);

	CREATE_CHECKBOX(pCheckBox2, CCPoint(480, 425));
	pCheckBox2->setExclusion(1);
	m_pWindow->addChild(pCheckBox2);
	
	CREATE_CHECKBOX(pCheckBox3, CCPoint(480, 360));
	pCheckBox3->setExclusion(1);
	m_pWindow->addChild(pCheckBox3);

	CREATE_CHECKBOX(pCheckBox4, CCPoint(480, 295));
	pCheckBox4->setExclusion(1);
	m_pWindow->addChild(pCheckBox4);

	CREATE_CHECKBOX(pCheckBox5, CCPoint(480, 230));
	pCheckBox5->setExclusion(1);
	m_pWindow->addChild(pCheckBox5);

	CREATE_CHECKBOX(pCheckBox6, CCPoint(480, 165));
	pCheckBox6->setExclusion(1);
	m_pWindow->addChild(pCheckBox6);

	CButton* pButton = CButton::createWith9Sprite(CCSize(280, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(200, 450));
	pButton->setUserTag(1);
	pButton->setOnClickListener(this, ccw_click_selector(CCheckBoxExclusionTest::onClick));
	pButton->initText("set true for first", "", 30);
	m_pWindow->addChild(pButton);

	return true;
}

void CCheckBoxExclusionTest::onClick(CCObject* pSender)
{
	CCheckBox* pCheckBox = (CCheckBox*)m_pWindow->getChildByTag(1);
	pCheckBox->setChecked(true);
}
