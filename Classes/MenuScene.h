#ifndef __MENUSCENE_H__
#define __MENUSCENE_H__

#include "cocoswidget/cocos-widget.h"
using namespace cocos2d;
using namespace cocos2d::cocoswidget;
#include <vector>
using namespace std;

class MenuScene : public CCScene
{
public:
	MenuScene();
	virtual ~MenuScene();
	virtual bool init();

private:
	CCTable* m_pMenuTableView;
	CCTableCell* menuTableDataSource(CCTable* pTable, unsigned int idx);
	CCWidgetTouchModel onTextTouchDown(CCObject* pSender, CCTouch* pTouch);
	bool onTextTouchEnd(CCObject* pSender, CCTouch* pTouch, float fDuration);
	bool onTextTouchCancelled(CCObject* pSender, CCTouch* pTouch, float fDuration);
	void onTextClick(CCObject* pSender);

private:
	std::vector<string> m_vMenuItems;
};

class BaseTestScene : public CCScene
{
public:
	BaseTestScene();
	virtual bool init();

protected:
	CCWidgetLayout* m_pLayout;
	CCButton* m_pNextBtn;
	CCButton* m_pBackBtn;
	CCButton* m_pRefBtn;
	CCTextTTF* m_pTitleText;
	CCTextTTF* m_pDescriptionText;
	CCTextTTF* m_pMenuText;

protected:
	virtual void setDescription(const char* str);
	virtual void setTitle(const char* str);
	virtual void onNextBtnClick(CCObject* pSender){};
	virtual void onBackBtnClick(CCObject* pSender){};
	virtual void onRefBtnClick(CCObject* pSender){};
	virtual void onMenuBtnClick(CCObject* pSender);
};


#endif //__MENUSCENE_H__