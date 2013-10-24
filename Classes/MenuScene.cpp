#include "MenuScene.h"
#include "CCButtonTest/CCButtonTest.h"
#include "CCToggleTest/CCToggleTest.h"
#include "CCScrollTest/CCScrollTest.h"
#include "CCTableTest/CCTableTest.h"
#include "CCTableGridTest/CCTableGridTest.h"
#include "CCGridTest/CCGridTest.h"
#include "CCTextTest/CCTextTest.h"
#include "CCPanelTest/CCPanelTest.h"
#include "CCPageTest/CCPageTest.h"

#define MENU_ITEM_ID_BUTTON 0
#define MENU_ITEM_ID_TOGGLE 1
#define MENU_ITEM_ID_TEXT 2
#define MENU_ITEM_ID_SCROLL 3
#define MENU_ITEM_ID_TABLE 4
#define MENU_ITEM_ID_TABLEGRID 5
#define MENU_ITEM_ID_GRID 6
#define MENU_ITEM_ID_PANEL 7
#define MENU_ITEM_ID_PAGE 8

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

	m_vMenuItems.push_back("CCButton Test");
	m_vMenuItems.push_back("CCToggle Test");
	m_vMenuItems.push_back("CCText Test");
	m_vMenuItems.push_back("CCScroll Test");
	m_vMenuItems.push_back("CCTable Test");
	m_vMenuItems.push_back("CCTableGrid Test");
	m_vMenuItems.push_back("CCGrid Test");
	m_vMenuItems.push_back("CCPanel Test");
	m_vMenuItems.push_back("CCPage Test");

	CCWidgetLayout* pLayout = CCWidgetLayout::create();
	addChild(pLayout);

	m_pMenuTableView = CCTable::create(CCSize(700, 640));
	m_pMenuTableView->setCountOfCell(m_vMenuItems.size());
	m_pMenuTableView->setSizeOfCell(CCSize(700, 100));
	m_pMenuTableView->setBounceable(true);
	m_pMenuTableView->setDataSourceSelector(this, tabledatasource_selector(MenuScene::menuTableDataSource));
	m_pMenuTableView->setDirection(eScrollDirectionVertical);
	m_pMenuTableView->setPosition(ccp(480, 320));
	pLayout->addChild(m_pMenuTableView);
	m_pMenuTableView->reloadData();

	
	return true;
}

CCTableCell* MenuScene::menuTableDataSource(CCTable* pTable, unsigned int idx)
{
	CCTableCell* pCell = pTable->dequeueCell();
	CCTextTTF* pText = NULL;

	if( !pCell )
	{
		pCell = new CCTableCell();
		pCell->autorelease();

		pText = CCTextTTF::create();
		pText->setFontSize(40.0f);
		pText->setPosition(ccp(350, 50));
		pText->setTouchEnabled(true);
		pText->setTouchBeganSelector(this, touchbegan_selector(MenuScene::onTextTouchDown));
		pText->setTouchEndedSelector(this, touch_selector(MenuScene::onTextTouchEnd));
		pText->setTouchCancelledSelector(this, touch_selector(MenuScene::onTextTouchCancelled));
		pText->setClickSelector(this, click_selector(MenuScene::onTextClick));
		pText->setTag(1);
		pCell->addChild(pText);
	}
	else
	{
		pText = (CCTextTTF*) pCell->getChildByTag(1);
	}

	pText->setUserTag(idx);
	pText->setString(m_vMenuItems[idx].c_str());

	return pCell;
}

CCWidgetTouchModel MenuScene::onTextTouchDown(CCObject* pSender, CCTouch* pTouch)
{
	CCTextTTF* pText = (CCTextTTF*) pSender;
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
	CCTextTTF* pText = (CCTextTTF*) pSender;
	pText->stopActionByTag(1);
	CCScaleTo* pScaleTo = CCScaleTo::create(0.1f, 1.0f);
	pScaleTo->setTag(1);
	pText->runAction(pScaleTo);
	return true;
}

void MenuScene::onTextClick(CCObject* pSender)
{
	CCTextTTF* pText = (CCTextTTF*) pSender;

	switch( pText->getUserTag() )
	{
	case MENU_ITEM_ID_BUTTON:
		{
			pushCCButtonTestScene();
		}
		break;
	case MENU_ITEM_ID_TOGGLE:
		{
			pushCCToggleTestScene();
		}
		break;
	case MENU_ITEM_ID_TEXT:
		{
			pushCCTextTestScene();
		}
		break;
	case MENU_ITEM_ID_SCROLL:
		{
			pushCCScrollTestScene();
		}
		break;
	case MENU_ITEM_ID_TABLE:
		{
			pushCCTableTestScene();
		}
		break;
	case MENU_ITEM_ID_TABLEGRID:
		{
			pushCCTableGridTestScene();
		}
		break;
	case MENU_ITEM_ID_GRID:
		{
			pushCCGridTestScene();
		}
		break;
	case MENU_ITEM_ID_PANEL:
		{
			pushCCPanelTestScene();
		}
		break;
	case MENU_ITEM_ID_PAGE:
		{
			pushCCPageTestScene();
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

	m_pLayout = CCWidgetLayout::create();
	addChild(m_pLayout);

	m_pNextBtn = CCButton::create("next1.png", "next2.png");
	m_pNextBtn->setClickSelector(this, click_selector(BaseTestScene::onNextBtnClick));
	m_pNextBtn->setPosition(ccp(630, 55));
	m_pLayout->addChild(m_pNextBtn);

	m_pBackBtn = CCButton::create("back1.png", "back2.png");
	m_pBackBtn->setClickSelector(this, click_selector(BaseTestScene::onBackBtnClick));
	m_pBackBtn->setPosition(ccp(330, 55));
	m_pLayout->addChild(m_pBackBtn);

	m_pRefBtn = CCButton::create("again1.png", "again2.png");
	m_pRefBtn->setClickSelector(this, click_selector(BaseTestScene::onRefBtnClick));
	m_pRefBtn->setPosition(ccp(480, 55));
	m_pLayout->addChild(m_pRefBtn);

	m_pTitleText = CCTextTTF::create();
	m_pTitleText->setFontSize(45.0f);
	m_pTitleText->setPosition(ccp(480, 600));
	m_pLayout->addChild(m_pTitleText);

	m_pDescriptionText  = CCTextTTF::create();
	m_pDescriptionText->setHorizontalAlignment(kCCTextAlignmentCenter);
	m_pDescriptionText->setAnchorPoint(ccp(0.5f, 1.0f));
	m_pDescriptionText->setFontSize(30.0f);
	m_pDescriptionText->setPosition(ccp(480, 570));
	m_pLayout->addChild(m_pDescriptionText);

	m_pMenuText = CCTextTTF::create("Back", "", 45.0f);
	m_pMenuText->setPosition(ccp(893, 35));
	m_pMenuText->setTouchEnabled(true);
	m_pMenuText->setClickSelector(this, click_selector(BaseTestScene::onMenuBtnClick));
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
