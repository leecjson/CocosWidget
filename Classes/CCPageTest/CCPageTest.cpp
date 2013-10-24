#include "CCPageTest.h"

void CCPageTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCPageTestScene();
}

void CCPageTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCPageTestScene();
}

void CCPageTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCPageTestScene();
}

//////////////////////////////////////////////////////

bool CCPageBasicTest::init()
{
	CCPageTestSceneBase::init();
	setTitle("CCPageBasicTest");
	setDescription("PageView basic test");

	CCPage* pPageView = CCPage::create(
		CCSize(484, 320),
		10, this,
		pagedatasource_selector(CCPageBasicTest::pageviewDataSource));
	pPageView->setPageChangedSelector(this, pagechanged_selector(CCPageBasicTest::onPageChanged));
	pPageView->setPosition(ccp(480, 320));
	m_pLayout->addChild(pPageView);
	pPageView->reloadData();

	m_pText = CCTextTTF::create();
	m_pText->setAnchorPoint(ccp(0, 0.5));
	m_pText->setPosition(ccp(800, 320));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

CCPageCell* CCPageBasicTest::pageviewDataSource(CCPage* pPage, unsigned int nPageIdx)
{
	CCPageCell* pPageCell = pPage->dequeuePage();
	CCButton* pButton = NULL;

	if( !pPageCell )
	{
		pPageCell = new CCPageCell();
		pPageCell->autorelease();
		pPageCell->setBackgroundNode(CCSprite::create("background.png"));
		pPageCell->getBackgroundNode()->setPosition(484 / 2, 320 / 2);

		pButton = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->getTextTTF()->setFontSize(30.0f);
		pButton->setPosition(ccp(484 / 2, 320 / 2));
		pButton->setTag(1);
		pPageCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pPageCell->getChildByTag(1);
	}

	char buf[48] = {0};
	sprintf(buf, "%u", nPageIdx);
	pButton->getTextTTF()->setString(buf);

	return pPageCell;
}

void CCPageBasicTest::onPageChanged(CCPage* pPage, unsigned int nPageIndx)
{
	char buf[48] = {0};
	sprintf(buf, "%u", nPageIndx);
	m_pText->setString(buf);
}

//////////////////////////////////////////////////////

bool CCPageVerticalTest::init()
{
	CCPageTestSceneBase::init();
	setTitle("CCPageVerticalTest");
	setDescription("PageView in vertical");

	CCPage* pPageView = CCPage::create(
		CCSize(484, 320),
		10, this,
		pagedatasource_selector(CCPageVerticalTest::pageviewDataSource));
	pPageView->setPageChangedSelector(this, pagechanged_selector(CCPageVerticalTest::onPageChanged));
	pPageView->setPosition(ccp(480, 320));
	pPageView->setDirection(eScrollDirectionVertical);
	m_pLayout->addChild(pPageView);
	pPageView->reloadData();

	m_pText = CCTextTTF::create();
	m_pText->setAnchorPoint(ccp(0, 0.5));
	m_pText->setPosition(ccp(800, 320));
	m_pText->setFontSize(35.0f);
	m_pText->setString("none");
	m_pLayout->addChild(m_pText);

	return true;
}

CCPageCell* CCPageVerticalTest::pageviewDataSource(CCPage* pPage, unsigned int nPageIdx)
{
	CCPageCell* pPageCell = pPage->dequeuePage();
	CCButton* pButton = NULL;

	if( !pPageCell )
	{
		pPageCell = new CCPageCell();
		pPageCell->autorelease();
		pPageCell->setBackgroundNode(CCSprite::create("background.png"));
		pPageCell->getBackgroundNode()->setPosition(484 / 2, 320 / 2);

		pButton = CCButton::createWith9Sprite(CCSize(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->getTextTTF()->setFontSize(30.0f);
		pButton->setPosition(ccp(484 / 2, 320 / 2));
		pButton->setTag(1);
		pPageCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pPageCell->getChildByTag(1);
	}

	char buf[48] = {0};
	sprintf(buf, "%u", nPageIdx);
	pButton->getTextTTF()->setString(buf);

	return pPageCell;
}

void CCPageVerticalTest::onPageChanged(CCPage* pPage, unsigned int nPageIndx)
{
	char buf[48] = {0};
	sprintf(buf, "%u", nPageIndx);
	m_pText->setString(buf);
}