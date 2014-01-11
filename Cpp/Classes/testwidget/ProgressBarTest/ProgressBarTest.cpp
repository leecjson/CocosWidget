#include "ProgressBarTest.h"

void CProgressBarTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCProgressBarTestScene();
}

void CProgressBarTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCProgressBarTestScene();
}

void CProgressBarTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCProgressBarTestScene();
}

//////////////////////////////////////////////////////

bool CProgressBarBasicTest::init()
{
	CProgressBarTestSceneBase::init();
	setTitle("CProgressBarBasicTest");
	setDescription("click the button to changed progress");

	CCSprite* m_pBg = CCSprite::create("background.png");
	m_pBg->setScale(1.3f);
	m_pBg->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(m_pBg);

	m_pProgressBar = CProgressBar::create("progress.png");
	m_pProgressBar->setBackgroundImage("progress_bg.png");
	m_pProgressBar->setPosition(CCPoint(480, 320));
	m_pProgressBar->setMaxValue(100);
	m_pProgressBar->setMinValue(0);
	m_pProgressBar->setDirection(eProgressBarDirectionLeftToRight);
	m_pProgressBar->setOnValueChangedListener(
		this, ccw_valuechanged_selector(CProgressBarBasicTest::onProgressing));
	m_pProgressBar->setContentSize(CCSize(960, 640));
	m_pWindow->addChild(m_pProgressBar);

	CButton* pButton = CButton::createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(250, 450));
	pButton->setUserTag(1);
	pButton->setOnClickListener(this, ccw_click_selector(CProgressBarBasicTest::onClick));
	pButton->initText("Add", "", 30);
	m_pWindow->addChild(pButton);

	CButton* pButton2 = CButton::createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton2->setPosition(CCPoint(450, 450));
	pButton2->setUserTag(2);
	pButton2->setOnClickListener(this, ccw_click_selector(CProgressBarBasicTest::onClick));
	pButton2->initText("Less", "", 30);
	m_pWindow->addChild(pButton2);

	CButton* pButton3 = CButton::createWith9Sprite(CCSize(200, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton3->setPosition(CCPoint(670, 450));
	pButton3->setUserTag(3);
	pButton3->setOnClickListener(this, ccw_click_selector(CProgressBarBasicTest::onClick));
	pButton3->initText("change direction", "", 30);
	m_pWindow->addChild(pButton3);

	CButton* pButton4 = CButton::createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton4->setPosition(CCPoint(350, 200));
	pButton4->setUserTag(4);
	pButton4->setOnClickListener(this, ccw_click_selector(CProgressBarBasicTest::onClick));
	pButton4->initText("startProgress", "", 30);
	pButton4->setCascadeTextSizeEnabled(true, CCSize(50, 30));
	m_pWindow->addChild(pButton4);

	CButton* pButton5 = CButton::createWith9Sprite(CCSize(150, 60),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton5->setPosition(CCPoint(650, 200));
	pButton5->setUserTag(5);
	pButton5->setOnClickListener(this, ccw_click_selector(CProgressBarBasicTest::onClick));
	pButton5->initText("stopProgress", "", 30);
	pButton5->setCascadeTextSizeEnabled(true, CCSize(50, 30));
	m_pWindow->addChild(pButton5);
	
	m_pText = CLabel::create();
	m_pText->setAnchorPoint(CCPoint(0, 0.5));
	m_pText->setPosition(CCPoint(200, 400));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pWindow->addChild(m_pText);

	return true;
}

void CProgressBarBasicTest::onClick(CCObject* pSender)
{
	CButton* pButton = (CButton*) pSender;
	if( pButton->getUserTag() == 1 )
	{
		m_pProgressBar->setValue(m_pProgressBar->getValue() + 10);
	}
	else if( pButton->getUserTag() == 2 )
	{
		m_pProgressBar->setValue(m_pProgressBar->getValue() - 5);
	}
	else if( pButton->getUserTag() == 3 )
	{
		if( m_pProgressBar->getDirection() == eProgressBarDirectionLeftToRight )
		{
			m_pProgressBar->setDirection(eProgressBarDirectionRightToLeft);
		}
		else
		{
			m_pProgressBar->setDirection(eProgressBarDirectionLeftToRight);
		}
	}
	else if( pButton->getUserTag() == 4 )
	{
		m_pProgressBar->startProgress(100, 5.0f);
	}
	else if( pButton->getUserTag() == 5 )
	{
		m_pProgressBar->stopProgress();
	}
}

void CProgressBarBasicTest::onProgressing(CCObject* pSender, int nValue)
{
	char buff[82] = {0};
	sprintf(buff, "value %d, percentage %f", m_pProgressBar->getValue(), m_pProgressBar->getPercentage());
	m_pText->setString(buff);
}

//////////////////////////////////////////////////////
