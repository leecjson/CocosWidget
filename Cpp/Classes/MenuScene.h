#ifndef __MENUSCENE_H__
#define __MENUSCENE_H__

#include "cocos2d.h"
#include "../../CocosWidget/cocos-widget.h"
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
	CTableView* m_pMenuTableView;
	CCObject* menuTableDataSource(CCObject* pConvertCell, unsigned int idx);
	CWidgetTouchModel onTextTouchDown(CCObject* pSender, CCTouch* pTouch);
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
	CWidgetWindow* m_pWindow;
	CButton* m_pNextBtn;
	CButton* m_pBackBtn;
	CButton* m_pRefBtn;
	CLabel* m_pTitleText;
	CLabel* m_pDescriptionText;
	CLabel* m_pMenuText;

protected:
	virtual void setDescription(const char* str);
	virtual void setTitle(const char* str);
	virtual void onNextBtnClick(CCObject* pSender){};
	virtual void onBackBtnClick(CCObject* pSender){};
	virtual void onRefBtnClick(CCObject* pSender){};
	virtual void onMenuBtnClick(CCObject* pSender);
};


#endif //__MENUSCENE_H__