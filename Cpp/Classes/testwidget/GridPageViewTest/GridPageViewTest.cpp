#include "GridPageViewTest.h"

void CGridPageViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCGridPageViewTestScene();
}

void CGridPageViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCGridPageViewTestScene();
}

void CGridPageViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCGridPageViewTestScene();
}

//////////////////////////////////////////////////////

bool CGridPageViewBasicTest::init()
{
	CGridPageViewTestSceneBase::init();
	setTitle("CGridPageViewBasicTest");
	setDescription("GridPageView basic test");

	CCSprite* pBg = CCSprite::create("background2.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pBg);

	CGridPageView* pTable = CGridPageView::create(
		CCSizeMake(320, 390),
		CCSizeMake(320 / 4, 390 / 5),
		72, this, 
		ccw_datasource_adapter_selector(CGridPageViewBasicTest::gridpageviewDataSource));
	pTable->setColumns(4);
	pTable->setRows(5);
	pTable->setAutoRelocate(true);
	pTable->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	return true;
}

CCObject* CGridPageViewBasicTest::gridpageviewDataSource(CCObject* pConvertCell, unsigned int idx)
{
	CGridPageViewCell* pCell = (CGridPageViewCell*) pConvertCell;
	CButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CGridPageViewCell();
		pCell->autorelease();

		pButton = CButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
		pButton->getLabel()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pCell->getChildByTag(1);
	}

	if( idx != CC_INVALID_INDEX )
	{
		pButton->setVisible(true);

		char buff[64];
		sprintf(buff, "%u", idx);
		pButton->getLabel()->setString(buff);
		pButton->setUserTag(idx);
	}
	else
	{
		pButton->setVisible(false);
	}

	return pCell;
}

//////////////////////////////////////////////////////

bool CGridPageViewBackPackTest::init()
{
	CGridPageViewTestSceneBase::init();
	setTitle("CGridPageViewBackPackTest");
	setDescription("backpack test, long click item and drag into circle for remove");

	for(int i = 0 ; i < 72; i++)
	{
		char buff[64];
		sprintf(buff, "%d", i);
		m_vData.push_back(buff);
	}

	CCSprite* pBg = CCSprite::create("background2.png");
	pBg->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pBg);

	pTable = CGridPageView::create(
		CCSizeMake(320, 390),
		CCSizeMake(320 / 4, 390 / 5),
		m_vData.size(), this, 
		ccw_datasource_adapter_selector(CGridPageViewBackPackTest::gridpageviewDataSource));
	pTable->setColumns(4);
	pTable->setRows(5);
	pTable->setAutoRelocate(true);
	pTable->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	m_pSelectedSprite = CCSprite::create("icon.png");
	m_pSelectedSprite->setOpacity(170);
	m_pSelectedSprite->setZOrder(1);
	m_pSelectedSprite->setVisible(false);
	m_pLayout->addChild(m_pSelectedSprite);

	m_pLayout->setOnTouchMovedAfterLongClickListener(this, ccw_afterlongclick_selector(CGridPageViewBackPackTest::onLayoutTouchMovedAfterLongClick));
	m_pLayout->setOnTouchEndedAfterLongClickListener(this, ccw_afterlongclick_selector(CGridPageViewBackPackTest::onLayoutTouchEndedAfterLongClick));
	m_pLayout->setOnTouchCancelledAfterLongClickListener(this, ccw_afterlongclick_selector(CGridPageViewBackPackTest::onLayoutTouchEndedAfterLongClick));

	m_pToggleImage = CToggleView::create("circle1.png", "circle2.png");
	m_pToggleImage->setPosition(CCPoint(200, 320));
	m_pLayout->addChild(m_pToggleImage);

	return true;
}

CCObject* CGridPageViewBackPackTest::gridpageviewDataSource(CCObject* pConvertCell, unsigned int idx)
{
	CGridPageViewCell* pCell = (CGridPageViewCell*) pConvertCell;
	CButton* pIconButton = NULL;

	if(!pCell)
	{
		pCell = new CGridPageViewCell();
		pCell->autorelease();

		CScale9Sprite* pBg = CScale9Sprite::create("sprite9_btn1.png");
		pBg->setContentSize(CCSize(70, 70));
		pBg->setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
		pCell->addChild(pBg);

		pIconButton = CButton::create("icon.png");
		pIconButton->setOnLongClickListener(this, ccw_longclick_selector(CGridPageViewBackPackTest::onItemLongClick));
		pIconButton->getLabel()->setFontSize(25);
		pIconButton->setPosition(CCPoint(320 / 4 / 2, 390 / 5 / 2));
		pIconButton->setLabelOffset(CCPoint(-15, -15));
		pIconButton->setTag(1);
		pCell->addChild(pIconButton);
	}
	else
	{
		pIconButton = (CButton*) pCell->getChildByTag(1);
	}

	if( idx != CC_INVALID_INDEX )
	{
		pIconButton->setVisible(true);

		pIconButton->getLabel()->setString(m_vData[idx].c_str());
		pIconButton->setUserTag(idx);
	}
	else
	{
		pIconButton->setVisible(false);
	}

	return pCell;
}

bool CGridPageViewBackPackTest::onItemLongClick(CCObject* pSender, CCTouch* pTouch)
{
	CButton* pIconButton = (CButton*) pSender;
	pIconButton->setVisible(false);

	CCPoint tPoint = pIconButton->getParent()->convertToWorldSpace(pIconButton->getPosition());

	m_pSelectedSprite->setVisible(true);
	m_pSelectedSprite->setPosition(pTouch->getLocation());

	return true;
}

void CGridPageViewBackPackTest::onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	m_pSelectedSprite->setPosition(pTouch->getLocation());

	CCPoint tLayoutPoint = m_pLayout->convertTouchToNodeSpace(pTouch);
	if( m_pToggleImage->boundingBox().containsPoint(tLayoutPoint) )
	{
		m_pToggleImage->setChecked(true);
	}
	else
	{
		m_pToggleImage->setChecked(false);
	}
}

void CGridPageViewBackPackTest::onLayoutTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CButton* pIconButton = (CButton*) pSender;
	
	m_pSelectedSprite->setPosition(pTouch->getLocation());

	CCPoint tLayoutPoint = m_pLayout->convertTouchToNodeSpace(pTouch);
	if( m_pToggleImage->boundingBox().containsPoint(tLayoutPoint) )
	{
		m_vData.erase(m_vData.begin() + pIconButton->getUserTag());
		pTable->setCountOfCell(m_vData.size());
		pTable->reloadData();
	}

	pIconButton->setVisible(true); //back to the same as before drag
	m_pSelectedSprite->setVisible(false);
	m_pToggleImage->setChecked(false);
}
