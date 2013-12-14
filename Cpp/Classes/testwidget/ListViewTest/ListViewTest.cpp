#include "ListViewTest.h"

void CListViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCListViewTestScene();
}

void CListViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCListViewTestScene();
}

void CListViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCListViewTestScene();
}

//////////////////////////////////////////////////////

bool CListViewBasicTest::init()
{
	CListViewTestSceneBase::init();
	setTitle("CListViewBasicTest");
	setDescription("ListView Test");

	//test data
	tagItem tag1 = { CCSize(480, 10), ccWHITE };
	tagItem tag2 = { CCSize(480, 20), ccRED };
	tagItem tag3 = { CCSize(480, 30), ccGREEN };
	tagItem tag4 = { CCSize(100, 40), ccORANGE };
	tagItem tag5 = { CCSize(480, 50), ccMAGENTA };
	tagItem tag6 = { CCSize(400, 60), ccBLUE };
	tagItem tag7 = { CCSize(300, 80), ccRED };
	tagItem tag8 = { CCSize(480, 30), ccGRAY };
	tagItem tag9 = { CCSize(480, 40), ccYELLOW };
	m_lDatas.push_back(tag1);
	m_lDatas.push_back(tag2);
	m_lDatas.push_back(tag3);
	m_lDatas.push_back(tag4);
	m_lDatas.push_back(tag5);
	m_lDatas.push_back(tag6);
	m_lDatas.push_back(tag7);
	m_lDatas.push_back(tag8);
	m_lDatas.push_back(tag9);
	//<<

	m_pListView = CListView::create(CCSize(480, 320));
	m_pListView->setBackgroundImage("background.png");
	m_pListView->setPosition(CCPoint(480, 320));
	m_pListView->setDirection(eScrollViewDirectionVertical);
	m_pLayout->addChild(m_pListView);

	CButton* pButton = CButton::createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(150, 320));
	pButton->setOnClickListener(this, ccw_click_selector(CListViewBasicTest::onClick));
	pButton->getLabel()->initWithString("Add", "", 30);
	m_pLayout->addChild(pButton);

	return true;
}

void CListViewBasicTest::onClick(CCObject* pSender)
{
	if( !m_lDatas.empty() )
	{
		tagItem& tItem = m_lDatas.front();
		CCNode* pNode = CCNode::create();
		pNode->setContentSize(tItem.tSize);
		CPanelColor* pPanel = CPanelColor::create(ccc4(tItem.tColor.r,
			tItem.tColor.g,
			tItem.tColor.b,
			255));
		pPanel->ignoreAnchorPointForPosition(false);
		pPanel->setAnchorPoint(CCPoint(0.5f, 0.5f));
		pPanel->setContentSize(CCSize(tItem.tSize.width - 4, tItem.tSize.height - 2));
		pPanel->setPosition(CCPoint(tItem.tSize.width/2, tItem.tSize.height/2));
		pNode->addChild(pPanel);
		m_pListView->insertNodeAtLast(pNode);
		m_lDatas.pop_front();
	}
}

//////////////////////////////////////////////////////

bool CListViewOperateTest::init()
{
	CListViewTestSceneBase::init();
	setTitle("CListViewOperateTest");
	setDescription("Add or Remove operate");

	m_pListView = CListView::create(CCSize(480, 320));
	m_pListView->setBackgroundImage("background.png");
	m_pListView->setPosition(CCPoint(480, 320));
	m_pListView->setDirection(eScrollViewDirectionVertical);
	m_pLayout->addChild(m_pListView);

	CButton* pButton = CButton::createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton->setPosition(CCPoint(150, 450));
	pButton->setUserTag(1);
	pButton->setOnClickListener(this, ccw_click_selector(CListViewOperateTest::onClick));
	pButton->getLabel()->initWithString("Add Last", "", 30);
	m_pLayout->addChild(pButton);

	CButton* pButton2 = CButton::createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton2->setPosition(CCPoint(150, 380));
	pButton2->setUserTag(2);
	pButton2->setOnClickListener(this, ccw_click_selector(CListViewOperateTest::onClick));
	pButton2->getLabel()->initWithString("Add Front", "", 30);
	m_pLayout->addChild(pButton2);

	CButton* pButton3 = CButton::createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton3->setPosition(CCPoint(150, 310));
	pButton3->setUserTag(3);
	pButton3->setOnClickListener(this, ccw_click_selector(CListViewOperateTest::onClick));
	pButton3->getLabel()->initWithString("Remove Last", "", 30);
	m_pLayout->addChild(pButton3);

	CButton* pButton4 = CButton::createWith9Sprite(CCSize(150, 50),
		"sprite9_btn1.png", "sprite9_btn2.png");
	pButton4->setPosition(CCPoint(150, 240));
	pButton4->setUserTag(4);
	pButton4->setOnClickListener(this, ccw_click_selector(CListViewOperateTest::onClick));
	pButton4->getLabel()->initWithString("Remove Front", "", 30);
	m_pLayout->addChild(pButton4);

	return true;
}

static int last_add_idx = 0;

void CListViewOperateTest::onClick(CCObject* pSender)
{
	CButton* pButton = (CButton*) pSender;
	switch(pButton->getUserTag())
	{
	case 1:
		{
			CPanel* pPanel = CPanel::create();
			pPanel->setContentSize(CCSize(480, 30));

			CPanelColor* pColor = CPanelColor::create(ccc4(128, 0, 0, 255));
			pColor->setContentSize(CCSize(480 - 4, 30 - 2));
			pColor->setPosition(CCPoint(480 /2, 30 /2));
			pPanel->addChild(pColor);

			CButton* pButton =  CButton::createWith9Sprite(CCSize(150, 25),
				"sprite9_btn1.png", "sprite9_btn2.png");
			pButton->setPosition(CCPoint(480 /2, 30 /2));
			char str[64] = {0};
			sprintf(str, "%d", last_add_idx);
			pButton->getLabel()->initWithString(str, "", 20);
			pPanel->addChild(pButton);
			last_add_idx++;

			m_pListView->insertNodeAtLast(pPanel);
		}
		break;
	case 2:
		{
			CPanel* pPanel = CPanel::create();
			pPanel->setContentSize(CCSize(480, 30));

			CPanelColor* pColor = CPanelColor::create(ccc4(0, 128, 0, 255));
			pColor->setContentSize(CCSize(480 - 4, 30 - 2));
			pColor->setPosition(CCPoint(480 /2, 30 /2));
			pPanel->addChild(pColor);

			CButton* pButton =  CButton::createWith9Sprite(CCSize(150, 25),
				"sprite9_btn1.png", "sprite9_btn2.png");
			pButton->setPosition(CCPoint(480 /2, 30 /2));
			char str[64] = {0};
			sprintf(str, "%d", last_add_idx);
			pButton->getLabel()->initWithString(str, "", 20);
			pPanel->addChild(pButton);
			last_add_idx++;

			m_pListView->insertNodeAtFront(pPanel);
		}
		break;
	case 3:
		{
			m_pListView->removeLastNode();
		}
		break;
	case 4:
		{
			m_pListView->removeFrontNode();
		}
		break;
	default:
		break;
	}
}