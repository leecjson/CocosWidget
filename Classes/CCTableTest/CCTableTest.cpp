#include "CCTableTest.h"

void CCTableTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCCTableTestScene();
}

void CCTableTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCCTableTestScene();
}

void CCTableTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCCTableTestScene();
}

//////////////////////////////////////////////////////

bool CCTableBasicTest::init()
{
	CCTableTestSceneBase::init();
	setTitle("CCTableBasicTest");
	setDescription("TableView basic test");

	CCTable* pTable = CCTable::create(
		CCSize(74.0f * 5, 70.0f),
		CCSize(74.0f, 70.0f),
		50, this, 
		tabledatasource_selector(CCTableBasicTest::tableviewDataSource));
	pTable->setPosition(ccp(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	return true;
}

CCTableCell* CCTableBasicTest::tableviewDataSource(CCTable* pTable, unsigned int idx)
{
	CCTableCell* pCell = pTable->dequeueCell();
	CCButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CCTableCell();
		pCell->autorelease();

		pButton = CCButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(ccp(74.0f / 2, 70.0f / 2));
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

bool CCTableBindingDataAndVertical::init()
{
	CCTableTestSceneBase::init();
	setTitle("CCTableBindingDataAndVertical");
	setDescription("binding data with vector<string>");

	m_vDatas.push_back("A");
	m_vDatas.push_back("B");
	m_vDatas.push_back("C");
	m_vDatas.push_back("D");
	m_vDatas.push_back("E");
	m_vDatas.push_back("F");
	m_vDatas.push_back("G");
	m_vDatas.push_back("H");
	m_vDatas.push_back("I");
	m_vDatas.push_back("J");
	m_vDatas.push_back("K");
	m_vDatas.push_back("L");
	m_vDatas.push_back("M");
	m_vDatas.push_back("N");
	m_vDatas.push_back("O");
	m_vDatas.push_back("P");
	m_vDatas.push_back("Q");
	m_vDatas.push_back("R");
	m_vDatas.push_back("S");
	m_vDatas.push_back("T");
	m_vDatas.push_back("U");
	m_vDatas.push_back("V");
	m_vDatas.push_back("W");
	m_vDatas.push_back("X");
	m_vDatas.push_back("Y");
	m_vDatas.push_back("Z");

	CCTable* pTable = CCTable::create(
		CCSize(150.0f, 54.0f * 5),
		CCSize(150.0f, 54.0f),
		m_vDatas.size(), this, 
		tabledatasource_selector(CCTableBindingDataAndVertical::tableviewDataSource));
	pTable->setDirection(eScrollDirectionVertical);
	pTable->setPosition(ccp(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	pText = CCTextTTF::create();
	pText->setAnchorPoint(ccp(0, 0.5));
	pText->setPosition(ccp(200, 320));
	pText->setFontSize(35.0f);
	pText->setString("click button");
	m_pLayout->addChild(pText);

	return true;
}

CCTableCell* CCTableBindingDataAndVertical::tableviewDataSource(CCTable* pTable, unsigned int idx)
{
	CCTableCell* pCell = pTable->dequeueCell();
	CCButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CCTableCell();
		pCell->autorelease();

		pButton = CCButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setClickSelector(this, click_selector(CCTableBindingDataAndVertical::onClick));
		pButton->setPosition(ccp(150.0f / 2, 54.0f / 2));
		pButton->getTextTTF()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pCell->getChildByTag(1);
	}

	pButton->getTextTTF()->setString(m_vDatas[idx].c_str());
	pButton->setUserTag(idx);

	return pCell;
}

void CCTableBindingDataAndVertical::onClick(CCObject* pSender)
{
	CCButton* pButton = (CCButton*) pSender;
	pText->setString(m_vDatas[pButton->getUserTag()].c_str());
}

//////////////////////////////////////////////////////

bool CCTableReloadTest::init()
{
	CCTableTestSceneBase::init();
	setTitle("CCTableReloadTest");
	setDescription("click button will pop a string into vector and reload\n table with auto relocate");

	m_lDataQueue.push_back("B");
	m_lDataQueue.push_back("C");
	m_lDataQueue.push_back("D");
	m_lDataQueue.push_back("E");
	m_lDataQueue.push_back("F");
	m_lDataQueue.push_back("G");
	m_lDataQueue.push_back("H");
	m_lDataQueue.push_back("I");
	m_lDataQueue.push_back("J");
	m_lDataQueue.push_back("K");
	m_lDataQueue.push_back("L");
	m_lDataQueue.push_back("M");
	m_lDataQueue.push_back("N");
	m_lDataQueue.push_back("O");
	m_lDataQueue.push_back("P");
	m_lDataQueue.push_back("Q");
	m_lDataQueue.push_back("R");
	m_lDataQueue.push_back("S");
	m_lDataQueue.push_back("T");
	m_lDataQueue.push_back("U");
	m_lDataQueue.push_back("V");
	m_lDataQueue.push_back("W");
	m_lDataQueue.push_back("X");
	m_lDataQueue.push_back("Y");
	m_lDataQueue.push_back("Z");

	m_vDatas.push_back("A");

	pTable = CCTable::create(
		CCSize(150.0f, 54.0f * 5),
		CCSize(150.0f, 54.0f),
		m_vDatas.size(), this, 
		tabledatasource_selector(CCTableReloadTest::tableviewDataSource));
	pTable->setDirection(eScrollDirectionVertical);
	pTable->setAutoRelocate(true);
	pTable->setPosition(ccp(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	CCButton* pButton = CCButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setClickSelector(this, click_selector(CCTableReloadTest::onClick));
	pButton->setPosition(ccp(200, 320));
	pButton->getTextTTF()->setFontSize(25.0f);
	pButton->getTextTTF()->setString("reloadData");
	m_pLayout->addChild(pButton);

	return true;
}

CCTableCell* CCTableReloadTest::tableviewDataSource(CCTable* pTable, unsigned int idx)
{
	CCTableCell* pCell = pTable->dequeueCell();
	CCButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CCTableCell();
		pCell->autorelease();

		pButton = CCButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(ccp(150.0f / 2, 54.0f / 2));
		pButton->getTextTTF()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CCButton*) pCell->getChildByTag(1);
	}

	pButton->getTextTTF()->setString(m_vDatas[idx].c_str());
	pButton->setUserTag(idx);

	return pCell;
}

void CCTableReloadTest::onClick(CCObject* pSender)
{
	if( m_lDataQueue.empty() )
	{
		return;
	}

	m_vDatas.push_back(m_lDataQueue.front());
	m_lDataQueue.pop_front();

	pTable->setCountOfCell(m_vDatas.size());
	pTable->reloadData();
	pTable->setContentOffset(pTable->getMaxOffset());
}