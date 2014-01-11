#include "ExpandableListViewTest.h"

void CExpandableListViewTestSceneBase::onNextBtnClick(CCObject* pSender)
{
	nextCExpandableListViewTestScene();
}

void CExpandableListViewTestSceneBase::onBackBtnClick(CCObject* pSender)
{
	backCExpandableListViewTestScene();
}

void CExpandableListViewTestSceneBase::onRefBtnClick(CCObject* pSender)
{
	refCExpandableListViewTestScene();
}

//////////////////////////////////////////////////////

bool CExpandableListViewBasicTest::init()
{
	CExpandableListViewTestSceneBase::init();
	setTitle("CExpandableListViewBasicTest");
	setDescription("click item to expand");
	
	pListView = CExpandableListView::create(CCSize(320, 390));
	pListView->setBackgroundImage("background2.png");
	pListView->setPosition(CCPoint(480, 320));
	m_pWindow->addChild(pListView);

	for( int i = 0; i < 10; i++ )
	{
		CExpandableNode* pExpandableNode = CExpandableNode::create();
		pExpandableNode->setContentSize(CCSize(320, 50));
		pListView->insertExpandableNodeAtLast(pExpandableNode);

		CImageViewScale9* pExpandableNodeBg = CImageViewScale9::create(CCSize(320, 45), "expandnodebg.png");
		pExpandableNodeBg->setPosition(CCPoint(320/2, 50/2));
		pExpandableNode->addChild(pExpandableNodeBg);

		CButton* pColBtn = CButton::createWith9Sprite(CCSize(35, 35), "sprite9_btn1.png", "sprite9_btn2.png");
		pColBtn->setPosition(ccp(320 - 30, 50 / 2));
		pColBtn->setText("-");
		pColBtn->setUserTag(i);
		pColBtn->setOnClickListener(this, ccw_click_selector(CExpandableListViewBasicTest::onClick));
		pExpandableNode->addChild(pColBtn);

		char buff[64] = {0};
		sprintf(buff, "ExpandableNode : %d", i);
		CLabel* pTitleLabel = CLabel::create(buff, "", 28);
		pTitleLabel->setPosition(CCPoint(10, 50/2));
		pTitleLabel->setAnchorPoint(CCPoint(0, 0.5));
		pExpandableNode->addChild(pTitleLabel);


		sprintf(buff, "Label %d - 1", i);
		pExpandableNode->insertItemNodeAtLast(CLabel::create(buff, "", 30));
		sprintf(buff, "Label %d - 2", i);
		pExpandableNode->insertItemNodeAtLast(CLabel::create(buff, "", 30));
		sprintf(buff, "Label %d - 3", i);
		pExpandableNode->insertItemNodeAtLast(CLabel::create(buff, "", 30));
		
		CButton* pButton = CButton::createWith9Sprite(CCSize(150, 38), "sprite9_btn1.png", "sprite9_btn2.png");
		pButton->setOnClickListener(this, ccw_click_selector(CExpandableListViewBasicTest::onClick));
		pButton->initText("collapse", "", 28);
		pButton->setUserTag(i);
		pButton->setPosition(CCPoint(100, 40/2));
		CLayout* pBtnLayout = CLayout::create(CCSize(320, 40));
		pBtnLayout->addChild(pButton);
		pExpandableNode->insertItemNodeAtLast(pBtnLayout);
	}

	pListView->reloadData();
	

	return true;
}

void CExpandableListViewBasicTest::onClick(CCObject* pSender)
{
	CButton* pButton = (CButton*) pSender;

	pListView->collapse(pButton->getUserTag());
	pListView->reloadData();
}


//////////////////////////////////////////////////////

