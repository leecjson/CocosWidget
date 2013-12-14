#include "MenuScene.h"
#include "testwidget/ButtonTest/ButtonTest.h"
#include "testwidget/ToggleViewTest/ToggleViewTest.h"
#include "testwidget/ScrollViewTest/ScrollViewTest.h"
#include "testwidget/TableViewTest/TableViewTest.h"
#include "testwidget/GridPageViewTest/GridPageViewTest.h"
#include "testwidget/GridViewTest/GridViewTest.h"
#include "testwidget/LabelTest/LabelTest.h"
#include "testwidget/PanelTest/PanelTest.h"
#include "testwidget/PageViewTest/PageViewTest.h"
#include "testwidget/ListViewTest/ListViewTest.h"
#include "testwidget/CheckBoxTest/CheckBoxTest.h"
#include "testwidget/ControlViewTest/ControlViewTest.h"
#include "testwidget/ProgressBarTest/ProgressBarTest.h"
#include "testwidget/SliderTest/SliderTest.h"

#define MENU_ITEM_ID_BUTTON 0
#define MENU_ITEM_ID_TOGGLE 1
#define MENU_ITEM_ID_TEXT 2
#define MENU_ITEM_ID_SCROLL 3
#define MENU_ITEM_ID_TABLE 4
#define MENU_ITEM_ID_GRIDPAGE 5
#define MENU_ITEM_ID_GRID 6
#define MENU_ITEM_ID_PANEL 7
#define MENU_ITEM_ID_PAGE 8
#define MENU_ITEM_ID_LISTVIEW 9
#define MENU_ITEM_ID_CHECKBOX 10
#define MENU_ITEM_ID_CONTROLVIEW 11
#define MENU_ITEM_ID_PROGRESSBAR 12
#define MENU_ITEM_ID_SLIDER 13

MenuScene::MenuScene()
: m_pMenuTableView(NULL)
{

}

MenuScene::~MenuScene()
{

}

bool MenuScene::init()
{
	CCScene::init();

	m_vMenuItems.push_back("Button Test");
	m_vMenuItems.push_back("ToggleView Test");
	m_vMenuItems.push_back("Label Test");
	m_vMenuItems.push_back("ScrollView Test");
	m_vMenuItems.push_back("TableView Test");
	m_vMenuItems.push_back("PageGridView Test");
	m_vMenuItems.push_back("GridView Test");
	m_vMenuItems.push_back("Panel Test");
	m_vMenuItems.push_back("PageView Test");
	m_vMenuItems.push_back("ListView Test");
	m_vMenuItems.push_back("CheckBox Test");
	m_vMenuItems.push_back("ControlView Test");
	m_vMenuItems.push_back("ProgressBar Test");
	m_vMenuItems.push_back("Slider Test");

	CWidgetLayout* pLayout = CWidgetLayout::create();
	pLayout->setMultiTouchEnabled(false);
	addChild(pLayout);

	m_pMenuTableView = CTableView::create(CCSize(700, 640));
	m_pMenuTableView->setCountOfCell(m_vMenuItems.size());
	m_pMenuTableView->setSizeOfCell(CCSize(700, 100));
	m_pMenuTableView->setBounceable(true);
	m_pMenuTableView->setDataSourceAdapter(
		this, ccw_datasource_adapter_selector(MenuScene::menuTableDataSource));
	m_pMenuTableView->setDirection(eScrollViewDirectionVertical);
	m_pMenuTableView->setPosition(CCPoint(480, 320));
	pLayout->addChild(m_pMenuTableView);
	m_pMenuTableView->reloadData();

	
	return true;
}

CCObject* MenuScene::menuTableDataSource(CCObject* pConvertCell, unsigned int idx)
{
	CTableViewCell* pCell = (CTableViewCell*) pConvertCell;
	CLabel* pText = NULL;

	if( !pCell )
	{
		pCell = new CTableViewCell();
		pCell->autorelease();

		pText = CLabel::create();
		pText->setFontSize(40.0f);
		pText->setPosition(CCPoint(350, 50));
		pText->setTouchEnabled(true);
		pText->setOnTouchBeganListener(this, ccw_touchbegan_selector(MenuScene::onTextTouchDown));
		pText->setOnTouchEndedListener(this, ccw_touchevent_selector(MenuScene::onTextTouchEnd));
		pText->setOnTouchCancelledListener(this, ccw_touchevent_selector(MenuScene::onTextTouchCancelled));
		pText->setOnClickListener(this, ccw_click_selector(MenuScene::onTextClick));
		pText->setTag(1);
		pCell->addChild(pText);
	}
	else
	{
		pText = (CLabel*) pCell->getChildByTag(1);
	}

	pText->setUserTag(idx);
	pText->setString(m_vMenuItems[idx].c_str());

	return pCell;
}

CWidgetTouchModel MenuScene::onTextTouchDown(CCObject* pSender, CCTouch* pTouch)
{
	CLabel* pText = (CLabel*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.3f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);
	return eWidgetTouchTransient;
}

bool MenuScene::onTextTouchEnd(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	onTextTouchCancelled(pSender, pTouch, fDuration);
	return true;
}

bool MenuScene::onTextTouchCancelled(CCObject* pSender, CCTouch* pTouch, float fDuration)
{
	CLabel* pText = (CLabel*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);
	return true;
}

void MenuScene::onTextClick(CCObject* pSender)
{
	CLabel* pText = (CLabel*) pSender;

	switch( pText->getUserTag() )
	{
	case MENU_ITEM_ID_BUTTON:
		{
			pushCButtonTestScene();
		}
		break;
	case MENU_ITEM_ID_TOGGLE:
		{
			pushCToggleViewTestScene();
		}
		break;
	case MENU_ITEM_ID_TEXT:
		{
			pushCLabelTestScene();
		}
		break;
	case MENU_ITEM_ID_SCROLL:
		{
			pushCScrollViewTestScene();
		}
		break;
	case MENU_ITEM_ID_TABLE:
		{
			pushCTableViewTestScene();
		}
		break;
	case MENU_ITEM_ID_GRIDPAGE:
		{
			pushCGridPageViewTestScene();
		}
		break;
	case MENU_ITEM_ID_GRID:
		{
			pushCGridViewTestScene();
		}
		break;
	case MENU_ITEM_ID_PANEL:
		{
			pushCPanelTestScene();
		}
		break;
	case MENU_ITEM_ID_PAGE:
		{
			pushCPageViewTestScene();
		}
		break;
	case MENU_ITEM_ID_LISTVIEW:
		{
			pushCListViewTestScene();
		}
		break;
	case MENU_ITEM_ID_CHECKBOX:
		{
			pushCCheckBoxTestScene();
		}
		break;
	case MENU_ITEM_ID_CONTROLVIEW:
		{
			pushCControlViewTestScene();
		}
		break;
	case MENU_ITEM_ID_PROGRESSBAR:
		{
			pushCProgressBarTestScene();
		}
		break;
	case MENU_ITEM_ID_SLIDER:
		{
			pushCSliderTestScene();
		}
		break;
	default:
		break;
	}
}




BaseTestScene::BaseTestScene()
: m_pLayout(NULL)
, m_pNextBtn(NULL)
, m_pBackBtn(NULL)
, m_pTitleText(NULL)
, m_pMenuText(NULL)
, m_pDescriptionText(NULL)
{

}

bool BaseTestScene::init()
{
	CCScene::init();
	setPosition(CCPointZero);

	m_pLayout = CWidgetLayout::create();
	m_pLayout->setMultiTouchEnabled(true);
	addChild(m_pLayout);

	m_pNextBtn = CButton::create("next1.png", "next2.png");
	m_pNextBtn->setOnClickListener(this, ccw_click_selector(BaseTestScene::onNextBtnClick));
	m_pNextBtn->setPosition(CCPoint(630, 55));
	m_pLayout->addChild(m_pNextBtn);

	m_pBackBtn = CButton::create("back1.png", "back2.png");
	m_pBackBtn->setOnClickListener(this, ccw_click_selector(BaseTestScene::onBackBtnClick));
	m_pBackBtn->setPosition(CCPoint(330, 55));
	m_pLayout->addChild(m_pBackBtn);

	m_pRefBtn = CButton::create("again1.png", "again2.png");
	m_pRefBtn->setOnClickListener(this, ccw_click_selector(BaseTestScene::onRefBtnClick));
	m_pRefBtn->setPosition(CCPoint(480, 55));
	m_pLayout->addChild(m_pRefBtn);

	m_pTitleText = CLabel::create();
	m_pTitleText->setFontSize(45.0f);
	m_pTitleText->setPosition(CCPoint(480, 600));
	m_pLayout->addChild(m_pTitleText);

	m_pDescriptionText  = CLabel::create();
	m_pDescriptionText->setHorizontalAlignment(kCCTextAlignmentCenter);
	m_pDescriptionText->setAnchorPoint(CCPoint(0.5f, 1.0f));
	m_pDescriptionText->setFontSize(30.0f);
	m_pDescriptionText->setPosition(CCPoint(480, 570));
	m_pLayout->addChild(m_pDescriptionText);

	m_pMenuText = CLabel::create("Back", "", 45.0f);
	m_pMenuText->setPosition(CCPoint(893, 35));
	m_pMenuText->setTouchEnabled(true);
	m_pMenuText->setOnClickListener(this, ccw_click_selector(BaseTestScene::onMenuBtnClick));
	m_pLayout->addChild(m_pMenuText);

	return true;
}

void BaseTestScene::setDescription(const char* str)
{
	m_pDescriptionText->setString(str);
}

void BaseTestScene::setTitle(const char* str)
{
	m_pTitleText->setString(str);	
}

void BaseTestScene::onMenuBtnClick(CCObject* pSender)
{
	CCDirector::sharedDirector()->popScene();
}
