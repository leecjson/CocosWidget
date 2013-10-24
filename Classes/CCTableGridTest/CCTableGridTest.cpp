#include "CCTableGridTest.h"

void CCTableGridTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCTableGridTestScene();
}

void CCTableGridTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCTableGridTestScene();
}

void CCTableGridTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCTableGridTestScene();
}

//////////////////////////////////////////////////////

bool CCTableGridBasicTest::init()
{
	CCTableGridTestSceneBase::init();
	setTitle("CCTableGridBasicTest");
	setDescription("TableGrid basic test");

	CCSprite* pBg = CCSprite::create("background2.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	CCTableGrid* pTable = CCTableGrid::create(
		CCSizeMake(320, 390),
		CCSizeMake(320 / 4, 390 / 5),
		72, this, 
		tablegirddatasource_selector(CCTableGridBasicTest::tableviewDataSource));
	pTable->setColumns(4);
	pTable->setRows(5);
	pTable->setAutoRelocate(true);
	pTable->setPosition(ccp(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	return true;
}

CCTableGridCell* CCTableGridBasicTest::tableviewDataSource(CCTableGrid* pTable, CCTableGridCell* pCell, unsigned int idx)
{
	CCButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CCTableGridCell();
		pCell->autorelease();

		pButton = CCButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(ccp(320 / 4 / 2, 390 / 5 / 2));
		pButton->getTextTTF()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pCell->getChildByTag(1);
	}

	if( idx != CC_INVALID_INDEX )
	{
		pButton->setVisible(true);

		char buff[64];
		sprintf(buff, "%u", idx);
		pButton->getTextTTF()->setString(buff);
		pButton->setUserTag(idx);
	}
	else
	{
		pButton->setVisible(false);
	}

	return pCell;
}

//////////////////////////////////////////////////////

bool CCTableGridBackPackTest::init()
{
	CCTableGridTestSceneBase::init();
	setTitle("CCTableGridBackPackTest");
	setDescription("backpack test, long click item and drag into circle for remove");

	for(int i = 0 ; i < 72; i++)
	{
		char buff[64];
		sprintf(buff, "%d", i);
		m_vData.push_back(buff);
	}

	CCSprite* pBg = CCSprite::create("background2.png");
	pBg->setPosition(ccp(480, 320));
	m_pLayout->addChild(pBg);

	pTable = CCTableGrid::create(
		CCSizeMake(320, 390),
		CCSizeMake(320 / 4, 390 / 5),
		m_vData.size(), this, 
		tablegirddatasource_selector(CCTableGridBackPackTest::tableviewDataSource));
	pTable->setColumns(4);
	pTable->setRows(5);
	pTable->setAutoRelocate(true);
	pTable->setPosition(ccp(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	m_pSelectedSprite = CCSprite::create("icon.png");
	m_pSelectedSprite->setOpacity(170);
	m_pSelectedSprite->setZOrder(1);
	m_pSelectedSprite->setVisible(false);
	m_pLayout->addChild(m_pSelectedSprite);

	m_pLayout->setTouchMovedAfterLongClickSelector(this, afterlongclick_selector(CCTableGridBackPackTest::onLayoutTouchMovedAfterLongClick));
	m_pLayout->setTouchEndedAfterLongClickSelector(this, afterlongclick_selector(CCTableGridBackPackTest::onLayoutTouchEndedAfterLongClick));
	m_pLayout->setTouchCancelledAfterLongClickSelector(this, afterlongclick_selector(CCTableGridBackPackTest::onLayoutTouchEndedAfterLongClick));

	m_pToggleImage = CCToggle::create("circle1.png", "circle2.png");
	m_pToggleImage->setPosition(ccp(200, 320));
	m_pLayout->addChild(m_pToggleImage);

	return true;
}

CCTableGridCell* CCTableGridBackPackTest::tableviewDataSource(CCTableGrid* pTable, CCTableGridCell* pCell, unsigned int idx)
{
	CCButton* pIconButton = NULL;

	if(!pCell)
	{
		pCell = new CCTableGridCell();
		pCell->autorelease();

		CC9Sprite* pBg = CC9Sprite::create("sprite9_btn1.png");
		pBg->setContentSize(CCSize(70, 70));
		pBg->setPosition(ccp(320 / 4 / 2, 390 / 5 / 2));
		pCell->addChild(pBg);

		pIconButton = CCButton::create("icon.png");
		pIconButton->setLongClickSelector(this, longclick_selector(CCTableGridBackPackTest::onItemLongClick));
		pIconButton->getTextTTF()->setFontSize(25);
		pIconButton->setPosition(ccp(320 / 4 / 2, 390 / 5 / 2));
		pIconButton->setTextOffset(ccp(-15, -15));
		pIconButton->setTag(1);
		pCell->addChild(pIconButton);
	}
	else
	{
		pIconButton = (CCButton*) pCell->getChildByTag(1);
	}

	if( idx != CC_INVALID_INDEX )
	{
		pIconButton->setVisible(true);

		pIconButton->getTextTTF()->setString(m_vData[idx].c_str());
		pIconButton->setUserTag(idx);
	}
	else
	{
		pIconButton->setVisible(false);
	}

	return pCell;
}

bool CCTableGridBackPackTest::onItemLongClick(CCObject* pSender)
{
	CCButton* pIconButton = (CCButton*) pSender;
	pIconButton->setVisible(false);

	CCPoint tPoint = pIconButton->getParent()->convertToWorldSpace(pIconButton->getPosition());

	m_pSelectedSprite->setVisible(true);
	m_pSelectedSprite->setPosition(tPoint);

	return true;
}

void CCTableGridBackPackTest::onLayoutTouchMovedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration)
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

void CCTableGridBackPackTest::onLayoutTouchEndedAfterLongClick(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CCButton* pIconButton = (CCButton*) pSender;
	
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
