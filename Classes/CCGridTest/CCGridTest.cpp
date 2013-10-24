#include "CCGridTest.h"

void CCGridTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCGridTestScene();
}

void CCGridTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCGridTestScene();
}

void CCGridTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCGridTestScene();
}

//////////////////////////////////////////////////////

bool CCGridBasicTest::init()
{
	CCGridTestSceneBase::init();
	setTitle("CCGridBasicTest");
	setDescription("GridView basic test (only work in vertical)");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	CCGrid* pGridView = CCGrid::create(
		CCSize(480, 320),
		CCSize(480 / 5, 320 / 4),
		96, this,
		griddatasource_selector(CCGridBasicTest::gridviewDataSource));
	pGridView->setColumns(5);
	pGridView->setPosition(ccp(480, 320));
	m_pLayout->addChild(pGridView);
	pGridView->reloadData();

	return true;
}

CCGridCell* CCGridBasicTest::gridviewDataSource(CCGrid* pTable, unsigned int idx)
{
	CCGridCell* pCell = pTable->dequeueCell();
	CCButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CCGridCell();
		pCell->autorelease();

		pButton = CCButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(ccp(480 / 5 / 2, 320 / 4 / 2));
		pButton->getTextTTF()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pCell->getChildByTag(1);
	}

	char buff[64];
	sprintf(buff, "%u", idx);
	pButton->getTextTTF()->setString(buff);
	pButton->setUserTag(idx);

	return pCell;
}

//////////////////////////////////////////////////////