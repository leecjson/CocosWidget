#include "GridViewTest.h"

void CGridViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCGridViewTestScene();
}

void CGridViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCGridViewTestScene();
}

void CGridViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCGridViewTestScene();
}

//////////////////////////////////////////////////////

bool CGridViewBasicTest::init()
{
	CGridViewTestSceneBase::init();
	setTitle("CGridViewBasicTest");
	setDescription("GridView basic test (only work in vertical)");

	CCSprite* pBg = CCSprite::create("background.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pBg);

	CGridView* pGridView = CGridView::create(
		CCSize(480, 320),
		CCSize(480 / 5, 320 / 4),
		96, this,
		ccw_datasource_adapter_selector(CGridViewBasicTest::gridviewDataSource));
	pGridView->setColumns(5);
	pGridView->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pGridView);
	pGridView->setAutoRelocate(true);
	pGridView->reloadData();

	return true;
}

CCObject* CGridViewBasicTest::gridviewDataSource(CCObject* pConvertView, unsigned int idx)
{
	CGridViewCell* pCell = (CGridViewCell*) pConvertView;
	CButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CGridViewCell();
		pCell->autorelease();

		pButton = CButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(CCPoint(480 / 5 / 2, 320 / 4 / 2));
		pButton->getLabel()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pCell->getChildByTag(1);
	}

	char buff[64];
	sprintf(buff, "%u", idx);
	pButton->getLabel()->setString(buff);
	pButton->setUserTag(idx);

	return pCell;
}

//////////////////////////////////////////////////////