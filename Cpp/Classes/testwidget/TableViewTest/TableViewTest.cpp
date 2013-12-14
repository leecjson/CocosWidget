#include "TableViewTest.h"

void CTableViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCTableViewTestScene();
}

void CTableViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCTableViewTestScene();
}

void CTableViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCTableViewTestScene();
}

//////////////////////////////////////////////////////

bool CTableViewBasicTest::init()
{
	CTableViewTestSceneBase::init();
	setTitle("CTableViewBasicTest");
	setDescription("TableView basic test");

	CTableView* pTable = CTableView::create(
		CCSize(74.0f * 5, 70.0f),
		CCSize(74.0f, 70.0f),
		50, this, 
		ccw_datasource_adapter_selector(CTableViewBasicTest::tableviewDataSource));
	pTable->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	return true;
}

CCObject* CTableViewBasicTest::tableviewDataSource(CCObject* pConvertView, unsigned int idx)
{
	CTableViewCell* pCell = (CTableViewCell*)pConvertView;
	CButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CTableViewCell();
		pCell->autorelease();

		pButton = CButton::createWith9Sprite(CCSizeMake(70, 70), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(CCPoint(74.0f / 2, 70.0f / 2));
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

bool CTableViewBindingDataAndVertical::init()
{
	CTableViewTestSceneBase::init();
	setTitle("CTableViewBindingDataAndVertical");
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

	CTableView* pTable = CTableView::create(
		CCSize(150.0f, 54.0f * 5),
		CCSize(150.0f, 54.0f),
		m_vDatas.size(), this, 
		ccw_datasource_adapter_selector(CTableViewBindingDataAndVertical::tableviewDataSource));
	pTable->setDirection(eScrollViewDirectionVertical);
	pTable->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	pText = CLabel::create();
	pText->setAnchorPoint(CCPoint(0, 0.5));
	pText->setPosition(CCPoint(200, 320));
	pText->setFontSize(35.0f);
	pText->setString("click button");
	m_pLayout->addChild(pText);

	return true;
}

CCObject* CTableViewBindingDataAndVertical::tableviewDataSource(CCObject* pConvertView, unsigned int idx)
{
	CTableViewCell* pCell = (CTableViewCell*)pConvertView;
	CButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CTableViewCell();
		pCell->autorelease();

		pButton = CButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setOnClickListener(this, ccw_click_selector(CTableViewBindingDataAndVertical::onClick));
		pButton->setPosition(CCPoint(150.0f / 2, 54.0f / 2));
		pButton->getLabel()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pCell->getChildByTag(1);
	}

	pButton->getLabel()->setString(m_vDatas[idx].c_str());
	pButton->setUserTag(idx);

	return pCell;
}

void CTableViewBindingDataAndVertical::onClick(CCObject* pSender)
{
	CButton* pButton = (CButton*) pSender;
	pText->setString(m_vDatas[pButton->getUserTag()].c_str());
}

//////////////////////////////////////////////////////

bool CTableViewReloadTest::init()
{
	CTableViewTestSceneBase::init();
	setTitle("CTableViewReloadTest");
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

	pTable = CTableView::create(
		CCSize(150.0f, 54.0f * 5),
		CCSize(150.0f, 54.0f),
		m_vDatas.size(), this, 
		ccw_datasource_adapter_selector(CTableViewReloadTest::tableviewDataSource));
	pTable->setDirection(eScrollViewDirectionVertical);
	pTable->setAutoRelocate(true);
	pTable->setPosition(CCPoint(480, 320));
	m_pLayout->addChild(pTable);
	pTable->reloadData();

	CButton* pButton = CButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setOnClickListener(this, ccw_click_selector(CTableViewReloadTest::onClick));
	pButton->setPosition(CCPoint(200, 320));
	pButton->getLabel()->setFontSize(25.0f);
	pButton->getLabel()->setString("reloadData");
	m_pLayout->addChild(pButton);

	return true;
}

CCObject* CTableViewReloadTest::tableviewDataSource(CCObject* pConvertView, unsigned int idx)
{
	CTableViewCell* pCell = (CTableViewCell*) pConvertView;
	CButton* pButton = NULL;

	if(!pCell)
	{
		pCell = new CTableViewCell();
		pCell->autorelease();

		pButton = CButton::createWith9Sprite(CCSizeMake(150, 50), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setPosition(CCPoint(150.0f / 2, 54.0f / 2));
		pButton->getLabel()->setFontSize(25.0f);
		pButton->setTag(1);
		pCell->addChild(pButton);
	}
	else
	{
		pButton = (CButton*) pCell->getChildByTag(1);
	}

	pButton->getLabel()->setString(m_vDatas[idx].c_str());
	pButton->setUserTag(idx);

	return pCell;
}

void CTableViewReloadTest::onClick(CCObject* pSender)
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