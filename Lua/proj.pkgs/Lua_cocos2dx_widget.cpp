/*
** Lua binding: Lua_cocos2dx_widget
** Generated automatically by tolua++-1.0.92 on 01/15/14 01:08:37.
*/

/****************************************************************************
Copyright (c) 2014 Lijunlin - Jason lee

Created by Lijunlin - Jason lee on 2014

jason.lee.c@foxmail.com
http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include "WidgetMacros.h"

#if USING_LUA
extern "C" {
#include "tolua_fix.h"
}

#include "lua_cocos2dx_widget.h"
#include "cocos-widget.h"
#include <map>
#include <string>
#include "cocos2d.h"
#include "CCLuaEngine.h"

using namespace cocos2d;
using namespace cocos2d::cocoswidget;

/* Exported function */
TOLUA_API int  tolua_Lua_cocos2dx_widget_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CExpandableNode (lua_State* tolua_S)
{
 CExpandableNode* self = (CExpandableNode*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPageView (lua_State* tolua_S)
{
 CPageView* self = (CPageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageViewPage (lua_State* tolua_S)
{
 CGridPageViewPage* self = (CGridPageViewPage*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridViewCell (lua_State* tolua_S)
{
 CGridViewCell* self = (CGridViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageView (lua_State* tolua_S)
{
 CGridPageView* self = (CGridPageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CScale9Sprite (lua_State* tolua_S)
{
 CScale9Sprite* self = (CScale9Sprite*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabel (lua_State* tolua_S)
{
 CLabel* self = (CLabel*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CPageViewCell (lua_State* tolua_S)
{
 CPageViewCell* self = (CPageViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CSlider (lua_State* tolua_S)
{
 CSlider* self = (CSlider*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CProgressBar (lua_State* tolua_S)
{
 CProgressBar* self = (CProgressBar*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridPageViewCell (lua_State* tolua_S)
{
 CGridPageViewCell* self = (CGridPageViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabelBMFont (lua_State* tolua_S)
{
 CLabelBMFont* self = (CLabelBMFont*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGradientView (lua_State* tolua_S)
{
 CGradientView* self = (CGradientView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CWidgetWindow (lua_State* tolua_S)
{
 CWidgetWindow* self = (CWidgetWindow*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CControlView (lua_State* tolua_S)
{
 CControlView* self = (CControlView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCheckBox (lua_State* tolua_S)
{
 CCheckBox* self = (CCheckBox*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_GLubyte (lua_State* tolua_S)
{
 GLubyte* self = (GLubyte*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CGridView (lua_State* tolua_S)
{
 CGridView* self = (CGridView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CTableView (lua_State* tolua_S)
{
 CTableView* self = (CTableView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CScrollView (lua_State* tolua_S)
{
 CScrollView* self = (CScrollView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CColorView (lua_State* tolua_S)
{
 CColorView* self = (CColorView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CImageViewScale9 (lua_State* tolua_S)
{
 CImageViewScale9* self = (CImageViewScale9*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CTextRich (lua_State* tolua_S)
{
 CTextRich* self = (CTextRich*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CToggleView (lua_State* tolua_S)
{
 CToggleView* self = (CToggleView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CButton (lua_State* tolua_S)
{
 CButton* self = (CButton*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLayout (lua_State* tolua_S)
{
 CLayout* self = (CLayout*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CTableViewCell (lua_State* tolua_S)
{
 CTableViewCell* self = (CTableViewCell*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CExpandableListView (lua_State* tolua_S)
{
 CExpandableListView* self = (CExpandableListView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CImageView (lua_State* tolua_S)
{
 CImageView* self = (CImageView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CLabelAtlas (lua_State* tolua_S)
{
 CLabelAtlas* self = (CLabelAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CListView (lua_State* tolua_S)
{
 CListView* self = (CListView*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CLayoutableProtocol");
 tolua_usertype(tolua_S,"CLabel");
 tolua_usertype(tolua_S,"CPageViewCell");
 tolua_usertype(tolua_S,"CLongClickableProtocol");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CWidgetWindow");
 tolua_usertype(tolua_S,"GLubyte");
 tolua_usertype(tolua_S,"CCSpriteBatchNode");
 tolua_usertype(tolua_S,"CTableView");
 tolua_usertype(tolua_S,"CColorView");
 tolua_usertype(tolua_S,"GLbyte");
 tolua_usertype(tolua_S,"CTableViewCell");
 tolua_usertype(tolua_S,"CProgressBar");
 tolua_usertype(tolua_S,"CListView");
 tolua_usertype(tolua_S,"CGridPageViewPage");
 tolua_usertype(tolua_S,"CGridPageView");
 tolua_usertype(tolua_S,"CExpandableListView");
 tolua_usertype(tolua_S,"CControlView");
 tolua_usertype(tolua_S,"CCLabelTTF");
 tolua_usertype(tolua_S,"CScrollView");
 tolua_usertype(tolua_S,"CWidget");
 tolua_usertype(tolua_S,"CCTouchDelegate");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"CValueChangeableProtocol");
 tolua_usertype(tolua_S,"CScrollableProtocol");
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"CPageView");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"CCheckableProtocol");
 tolua_usertype(tolua_S,"CExpandableNode");
 tolua_usertype(tolua_S,"CCTextAlignment");
 tolua_usertype(tolua_S,"CClickableProtocol");
 tolua_usertype(tolua_S,"CCheckBox");
 tolua_usertype(tolua_S,"CCNodeRGBA");
 tolua_usertype(tolua_S,"CCBlendProtocol");
 tolua_usertype(tolua_S,"cocos2d::ccColor3B");
 tolua_usertype(tolua_S,"CCLabelAtlas");
 tolua_usertype(tolua_S,"CImageViewScale9");
 tolua_usertype(tolua_S,"CButton");
 
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"CScrollViewContainer");
 tolua_usertype(tolua_S,"CGradientView");
 tolua_usertype(tolua_S,"CGridViewCell");
 tolua_usertype(tolua_S,"CToggleView");
 tolua_usertype(tolua_S,"CLabelBMFont");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"CGridPageViewCell");
 tolua_usertype(tolua_S,"ccColor4B");
 tolua_usertype(tolua_S,"CCVerticalTextAlignment");
 tolua_usertype(tolua_S,"CTextRich");
 tolua_usertype(tolua_S,"CCArray");
 tolua_usertype(tolua_S,"CSlider");
 tolua_usertype(tolua_S,"CTextRichClickableProtocol");
 tolua_usertype(tolua_S,"CGridView");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"CCLabelBMFont");
 tolua_usertype(tolua_S,"CLabelAtlas");
 tolua_usertype(tolua_S,"CProgressEndedProtocol");
 tolua_usertype(tolua_S,"ccColor3B");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CControlableProtocol");
 tolua_usertype(tolua_S,"CLayout");
 tolua_usertype(tolua_S,"CPageChangeableProtocol");
 tolua_usertype(tolua_S,"CImageView");
 tolua_usertype(tolua_S,"CCSpriteFrame");
 tolua_usertype(tolua_S,"CScale9Sprite");
 tolua_usertype(tolua_S,"CDataSourceAdapterProtocol");
}

/* method: new of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_new00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetWindow* tolua_ret = (CWidgetWindow*)  Mtolua_new((CWidgetWindow)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CWidgetWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_new00_local
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetWindow* tolua_ret = (CWidgetWindow*)  Mtolua_new((CWidgetWindow)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CWidgetWindow");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_delete00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_init00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_create00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CWidgetWindow* tolua_ret = (CWidgetWindow*)  CWidgetWindow::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CWidgetWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchPriority of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_getTouchPriority00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_getTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTouchPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchPriority of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchPriority00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  int nTouchPriority = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchPriority'", NULL);
#endif
  {
   self->setTouchPriority(nTouchPriority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findWidgetById of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_findWidgetById00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_findWidgetById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findWidgetById'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->findWidgetById(id);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findWidgetById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMultiTouchEnabled of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_isMultiTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_isMultiTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CWidgetWindow* self = (const CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMultiTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMultiTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMultiTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMultiTouchEnabled of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setMultiTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setMultiTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiTouchEnabled'", NULL);
#endif
  {
   self->setMultiTouchEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setModalable of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setModalable00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setModalable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  bool bModalable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setModalable'", NULL);
#endif
  {
   self->setModalable(bModalable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setModalable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isModalable of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_isModalable00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_isModalable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CWidgetWindow* self = (const CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isModalable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isModalable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isModalable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchMovedAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchMovedAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedAfterLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchEndedAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchEndedAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedAfterLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchCancelledAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchCancelledAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledAfterLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchMovedAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchMovedAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedAfterLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchEndedAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchEndedAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedAfterLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledAfterLongClickScriptHandler of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchCancelledAfterLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchCancelledAfterLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CWidgetWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledAfterLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledAfterLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledAfterLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTouchDelegate__ of class  CWidgetWindow */
#ifndef TOLUA_DISABLE_tolua_get_CWidgetWindow___CCTouchDelegate__
static int tolua_get_CWidgetWindow___CCTouchDelegate__(lua_State* tolua_S)
{
  CWidgetWindow* self = (CWidgetWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTouchDelegate__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTouchDelegate*>(self), "CCTouchDelegate");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTouchDelegate*)self), "CCTouchDelegate");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_new00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  Mtolua_new((CScale9Sprite)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_new00_local
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  Mtolua_new((CScale9Sprite)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_delete00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setContentSize00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_init00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithBatchNode of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteBatchNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteBatchNode* batchnode = ((CCSpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  bool rotated = ((bool)  tolua_toboolean(tolua_S,4,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithBatchNode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithBatchNode(batchnode,rect,rotated,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithBatchNode of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteBatchNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteBatchNode* batchnode = ((CCSpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithBatchNode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithBatchNode(batchnode,rect,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(file,rect,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_create00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,4,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::create(file,rect,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(file,rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_create01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::create(file,rect);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile02
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(capInsets,file);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_create02
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::create(capInsets,file);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile03
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(file);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_create03
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::create(file);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSpriteFrame of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSpriteFrame'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSpriteFrame(spriteFrame,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithSpriteFrame(spriteFrame,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSpriteFrame of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSpriteFrame'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSpriteFrame(spriteFrame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithSpriteFrame(spriteFrame);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSpriteFrameName of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSpriteFrameName'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSpriteFrameName(spriteFrameName,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithSpriteFrameName(spriteFrameName,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSpriteFrameName of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSpriteFrameName'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSpriteFrameName(spriteFrameName);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithSpriteFrameName(spriteFrameName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: resizableSpriteWithCapInsets of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_resizableSpriteWithCapInsets00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_resizableSpriteWithCapInsets00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resizableSpriteWithCapInsets'", NULL);
#endif
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  self->resizableSpriteWithCapInsets(capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resizableSpriteWithCapInsets'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_create04
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_create04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_create03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setTexture00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTexture of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTexture(pTexture);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithTexture of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithTexture'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithTexture(pTexture,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithTexture(pTexture);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture01
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CScale9Sprite* tolua_ret = (CScale9Sprite*)  CScale9Sprite::createWithTexture(pTexture,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScale9Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacityModifyRGB of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacityModifyRGB00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacityModifyRGB'", NULL);
#endif
  {
   self->setOpacityModifyRGB(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOpacityModifyRGB of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_isOpacityModifyRGB00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_isOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacity00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_getOpacity00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setColor00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_getColor00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateWithBatchNode of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_updateWithBatchNode00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_updateWithBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteBatchNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteBatchNode* batchnode = ((CCSpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  bool rotated = ((bool)  tolua_toboolean(tolua_S,4,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateWithBatchNode'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->updateWithBatchNode(batchnode,rect,rotated,capInsets);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateWithBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpriteFrame of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_setSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_setSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpriteFrame'", NULL);
#endif
  {
   self->setSpriteFrame(spriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateDisplayedOpacity of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedOpacity00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  GLubyte parentOpacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateDisplayedOpacity'", NULL);
#endif
  {
   self->updateDisplayedOpacity(parentOpacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateDisplayedOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateDisplayedColor of class  CScale9Sprite */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedColor00
static int tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScale9Sprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const cocos2d::ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScale9Sprite* self = (CScale9Sprite*)  tolua_tousertype(tolua_S,1,0);
  const cocos2d::ccColor3B* parentColor = ((const cocos2d::ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateDisplayedColor'", NULL);
#endif
  {
   self->updateDisplayedColor(*parentColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateDisplayedColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_new00
static int tolua_Lua_cocos2dx_widget_CControlView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CControlView* tolua_ret = (CControlView*)  Mtolua_new((CControlView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CControlView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_new00_local
static int tolua_Lua_cocos2dx_widget_CControlView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CControlView* tolua_ret = (CControlView*)  Mtolua_new((CControlView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CControlView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_delete00
static int tolua_Lua_cocos2dx_widget_CControlView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_init00
static int tolua_Lua_cocos2dx_widget_CControlView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_initWithFile00
static int tolua_Lua_cocos2dx_widget_CControlView_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* pBaseBoard = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pJoystick = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(pBaseBoard,pJoystick);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_create00
static int tolua_Lua_cocos2dx_widget_CControlView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CControlView* tolua_ret = (CControlView*)  CControlView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CControlView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_create01
static int tolua_Lua_cocos2dx_widget_CControlView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pBaseBoard = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pJoystick = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CControlView* tolua_ret = (CControlView*)  CControlView::create(pBaseBoard,pJoystick);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CControlView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CControlView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setContentSize00
static int tolua_Lua_cocos2dx_widget_CControlView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tContentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setRadius00
static int tolua_Lua_cocos2dx_widget_CControlView_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  float fRadius = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'", NULL);
#endif
  {
   self->setRadius(fRadius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRadius of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_getRadius00
static int tolua_Lua_cocos2dx_widget_CControlView_getRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CControlView* self = (const CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelocateWithAnimation of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setRelocateWithAnimation00
static int tolua_Lua_cocos2dx_widget_CControlView_setRelocateWithAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  bool bAni = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelocateWithAnimation'", NULL);
#endif
  {
   self->setRelocateWithAnimation(bAni);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelocateWithAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRelocateWithAnimation of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_isRelocateWithAnimation00
static int tolua_Lua_cocos2dx_widget_CControlView_isRelocateWithAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CControlView* self = (const CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRelocateWithAnimation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRelocateWithAnimation();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRelocateWithAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBaseBoardImage of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardImage00
static int tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBaseBoardImage'", NULL);
#endif
  {
   self->setBaseBoardImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBaseBoardImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystickImage of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setJoystickImage00
static int tolua_Lua_cocos2dx_widget_CControlView_setJoystickImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystickImage'", NULL);
#endif
  {
   self->setJoystickImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystickImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBaseBoardSpriteFrame of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBaseBoardSpriteFrame'", NULL);
#endif
  {
   self->setBaseBoardSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBaseBoardSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystickSpriteFrame of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystickSpriteFrame'", NULL);
#endif
  {
   self->setJoystickSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystickSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBaseBoardTexture of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardTexture00
static int tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBaseBoardTexture'", NULL);
#endif
  {
   self->setBaseBoardTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBaseBoardTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystickTexture of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setJoystickTexture00
static int tolua_Lua_cocos2dx_widget_CControlView_setJoystickTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystickTexture'", NULL);
#endif
  {
   self->setJoystickTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystickTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBaseBoardSpriteFrameName of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBaseBoardSpriteFrameName'", NULL);
#endif
  {
   self->setBaseBoardSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBaseBoardSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystickSpriteFrameName of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystickSpriteFrameName'", NULL);
#endif
  {
   self->setJoystickSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystickSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnControlScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setOnControlScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_setOnControlScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnControlScriptHandler'", NULL);
#endif
  {
   self->setOnControlScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnControlScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnControlScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_removeOnControlScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_removeOnControlScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnControlScriptHandler'", NULL);
#endif
  {
   self->removeOnControlScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnControlScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_getUserTag00
static int tolua_Lua_cocos2dx_widget_CControlView_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CControlView* self = (const CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setUserTag00
static int tolua_Lua_cocos2dx_widget_CControlView_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_getId00
static int tolua_Lua_cocos2dx_widget_CControlView_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setId00
static int tolua_Lua_cocos2dx_widget_CControlView_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_getDescription00
static int tolua_Lua_cocos2dx_widget_CControlView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setDescription00
static int tolua_Lua_cocos2dx_widget_CControlView_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_isEnabled00
static int tolua_Lua_cocos2dx_widget_CControlView_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setEnabled00
static int tolua_Lua_cocos2dx_widget_CControlView_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CControlView_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CControlView_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CControlView_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CControlView_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CControlView_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CControlView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_get_CControlView___CWidget__
static int tolua_get_CControlView___CWidget__(lua_State* tolua_S)
{
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CControlableProtocol__ of class  CControlView */
#ifndef TOLUA_DISABLE_tolua_get_CControlView___CControlableProtocol__
static int tolua_get_CControlView___CControlableProtocol__(lua_State* tolua_S)
{
  CControlView* self = (CControlView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CControlableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CControlableProtocol*>(self), "CControlableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CControlableProtocol*)self), "CControlableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_new00
static int tolua_Lua_cocos2dx_widget_CLayout_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLayout* tolua_ret = (CLayout*)  Mtolua_new((CLayout)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_new00_local
static int tolua_Lua_cocos2dx_widget_CLayout_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLayout* tolua_ret = (CLayout*)  Mtolua_new((CLayout)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLayout");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_delete00
static int tolua_Lua_cocos2dx_widget_CLayout_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_init00
static int tolua_Lua_cocos2dx_widget_CLayout_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_create00
static int tolua_Lua_cocos2dx_widget_CLayout_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLayout* tolua_ret = (CLayout*)  CLayout::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLayout");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_create01
static int tolua_Lua_cocos2dx_widget_CLayout_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CLayout* tolua_ret = (CLayout*)  CLayout::create(*tContentSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLayout");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLayout_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setContentSize00
static int tolua_Lua_cocos2dx_widget_CLayout_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tContentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: findWidgetById of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_findWidgetById00
static int tolua_Lua_cocos2dx_widget_CLayout_findWidgetById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'findWidgetById'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->findWidgetById(id);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'findWidgetById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundImage of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'", NULL);
#endif
  {
   self->setBackgroundImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundTexture of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundTexture00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundTexture'", NULL);
#endif
  {
   self->setBackgroundTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrame of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrame'", NULL);
#endif
  {
   self->setBackgroundSpriteFrame(pSpriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameName of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* pFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameName'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameName(pFrameName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundImage of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_getBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CLayout_getBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CLayout* self = (const CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundImage'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getBackgroundImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundImage of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundImage'", NULL);
#endif
  {
   self->removeBackgroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundColor of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundColor00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tColor = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColor'", NULL);
#endif
  {
   self->setBackgroundColor(*tColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundColor of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundColor00
static int tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundColor'", NULL);
#endif
  {
   self->removeBackgroundColor();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundGradient of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundGradient00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundGradient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundGradient'", NULL);
#endif
  {
   self->setBackgroundGradient(*tStart,*tEnd,*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundGradient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundGradient of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundGradient00
static int tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundGradient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundGradient'", NULL);
#endif
  {
   self->removeBackgroundGradient();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundGradient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundOpacity of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setBackgroundOpacity00
static int tolua_Lua_cocos2dx_widget_CLayout_setBackgroundOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLbyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  GLbyte opacity = *((GLbyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundOpacity'", NULL);
#endif
  {
   self->setBackgroundOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_getUserTag00
static int tolua_Lua_cocos2dx_widget_CLayout_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CLayout* self = (const CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setUserTag00
static int tolua_Lua_cocos2dx_widget_CLayout_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_getId00
static int tolua_Lua_cocos2dx_widget_CLayout_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setId00
static int tolua_Lua_cocos2dx_widget_CLayout_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_getDescription00
static int tolua_Lua_cocos2dx_widget_CLayout_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setDescription00
static int tolua_Lua_cocos2dx_widget_CLayout_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_isEnabled00
static int tolua_Lua_cocos2dx_widget_CLayout_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setEnabled00
static int tolua_Lua_cocos2dx_widget_CLayout_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLayout_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLayout_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CLayout_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CLayout_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CLayout_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLayout",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_get_CLayout___CWidget__
static int tolua_get_CLayout___CWidget__(lua_State* tolua_S)
{
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLayoutableProtocol__ of class  CLayout */
#ifndef TOLUA_DISABLE_tolua_get_CLayout___CLayoutableProtocol__
static int tolua_get_CLayout___CLayoutableProtocol__(lua_State* tolua_S)
{
  CLayout* self = (CLayout*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLayoutableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLayoutableProtocol*>(self), "CLayoutableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLayoutableProtocol*)self), "CLayoutableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_new00
static int tolua_Lua_cocos2dx_widget_CColorView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CColorView* tolua_ret = (CColorView*)  Mtolua_new((CColorView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CColorView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_new00_local
static int tolua_Lua_cocos2dx_widget_CColorView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CColorView* tolua_ret = (CColorView*)  Mtolua_new((CColorView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CColorView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_delete00
static int tolua_Lua_cocos2dx_widget_CColorView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_init00
static int tolua_Lua_cocos2dx_widget_CColorView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithColor of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_initWithColor00
static int tolua_Lua_cocos2dx_widget_CColorView_initWithColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* color = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithColor(*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_create00
static int tolua_Lua_cocos2dx_widget_CColorView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CColorView* tolua_ret = (CColorView*)  CColorView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CColorView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_create01
static int tolua_Lua_cocos2dx_widget_CColorView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const ccColor4B* color = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   CColorView* tolua_ret = (CColorView*)  CColorView::create(*color);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CColorView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CColorView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setContentSize00
static int tolua_Lua_cocos2dx_widget_CColorView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setColor00
static int tolua_Lua_cocos2dx_widget_CColorView_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOpacity00
static int tolua_Lua_cocos2dx_widget_CColorView_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeOpacityEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setCascadeOpacityEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_setCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeOpacityEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeOpacityEnabled'", NULL);
#endif
  {
   self->setCascadeOpacityEnabled(cascadeOpacityEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeColorEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setCascadeColorEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_setCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  bool cascadeColorEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeColorEnabled'", NULL);
#endif
  {
   self->setCascadeColorEnabled(cascadeColorEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getOpacity00
static int tolua_Lua_cocos2dx_widget_CColorView_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayedOpacity of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getDisplayedOpacity00
static int tolua_Lua_cocos2dx_widget_CColorView_getDisplayedOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayedOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getDisplayedOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayedOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getColor00
static int tolua_Lua_cocos2dx_widget_CColorView_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayedColor of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getDisplayedColor00
static int tolua_Lua_cocos2dx_widget_CColorView_getDisplayedColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayedColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getDisplayedColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayedColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeColorEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_isCascadeColorEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_isCascadeColorEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeColorEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeColorEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeColorEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCascadeOpacityEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_isCascadeOpacityEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_isCascadeOpacityEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCascadeOpacityEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCascadeOpacityEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCascadeOpacityEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getUserTag00
static int tolua_Lua_cocos2dx_widget_CColorView_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CColorView* self = (const CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setUserTag00
static int tolua_Lua_cocos2dx_widget_CColorView_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getId00
static int tolua_Lua_cocos2dx_widget_CColorView_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setId00
static int tolua_Lua_cocos2dx_widget_CColorView_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_getDescription00
static int tolua_Lua_cocos2dx_widget_CColorView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setDescription00
static int tolua_Lua_cocos2dx_widget_CColorView_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_isEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CColorView_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CColorView_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CColorView_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CColorView_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CColorView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_get_CColorView___CWidget__
static int tolua_get_CColorView___CWidget__(lua_State* tolua_S)
{
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCBlendProtocol__ of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_get_CColorView___CCBlendProtocol__
static int tolua_get_CColorView___CCBlendProtocol__(lua_State* tolua_S)
{
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCBlendProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCBlendProtocol*>(self), "CCBlendProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCBlendProtocol*)self), "CCBlendProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_get_CColorView___CClickableProtocol__
static int tolua_get_CColorView___CClickableProtocol__(lua_State* tolua_S)
{
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CColorView */
#ifndef TOLUA_DISABLE_tolua_get_CColorView___CLongClickableProtocol__
static int tolua_get_CColorView___CLongClickableProtocol__(lua_State* tolua_S)
{
  CColorView* self = (CColorView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_new00
static int tolua_Lua_cocos2dx_widget_CGradientView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGradientView* tolua_ret = (CGradientView*)  Mtolua_new((CGradientView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGradientView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_new00_local
static int tolua_Lua_cocos2dx_widget_CGradientView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGradientView* tolua_ret = (CGradientView*)  Mtolua_new((CGradientView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGradientView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_delete00
static int tolua_Lua_cocos2dx_widget_CGradientView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_init00
static int tolua_Lua_cocos2dx_widget_CGradientView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_initWithColor00
static int tolua_Lua_cocos2dx_widget_CGradientView_initWithColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithColor(*tStart,*tEnd);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_initWithColor01
static int tolua_Lua_cocos2dx_widget_CGradientView_initWithColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithColor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithColor(*tStart,*tEnd,*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CGradientView_initWithColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_create00
static int tolua_Lua_cocos2dx_widget_CGradientView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGradientView* tolua_ret = (CGradientView*)  CGradientView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGradientView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_create01
static int tolua_Lua_cocos2dx_widget_CGradientView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  {
   CGradientView* tolua_ret = (CGradientView*)  CGradientView::create(*tStart,*tEnd);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGradientView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CGradientView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_create02
static int tolua_Lua_cocos2dx_widget_CGradientView_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
  {
   CGradientView* tolua_ret = (CGradientView*)  CGradientView::create(*tStart,*tEnd,*v);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGradientView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CGradientView_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setStartColor00
static int tolua_Lua_cocos2dx_widget_CGradientView_setStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* tColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartColor'", NULL);
#endif
  {
   self->setStartColor(*tColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_getStartColor00
static int tolua_Lua_cocos2dx_widget_CGradientView_getStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getStartColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setEndColor00
static int tolua_Lua_cocos2dx_widget_CGradientView_setEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* tColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndColor'", NULL);
#endif
  {
   self->setEndColor(*tColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndColor of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_getEndColor00
static int tolua_Lua_cocos2dx_widget_CGradientView_getEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getEndColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartOpacity of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setStartOpacity00
static int tolua_Lua_cocos2dx_widget_CGradientView_setStartOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  GLubyte cOpacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartOpacity'", NULL);
#endif
  {
   self->setStartOpacity(cOpacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartOpacity of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_getStartOpacity00
static int tolua_Lua_cocos2dx_widget_CGradientView_getStartOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getStartOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndOpacity of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setEndOpacity00
static int tolua_Lua_cocos2dx_widget_CGradientView_setEndOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLubyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  GLubyte cOpacity = *((GLubyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndOpacity'", NULL);
#endif
  {
   self->setEndOpacity(cOpacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndOpacity of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_getEndOpacity00
static int tolua_Lua_cocos2dx_widget_CGradientView_getEndOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getEndOpacity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((GLubyte)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(GLubyte));
     tolua_pushusertype(tolua_S,tolua_obj,"GLubyte");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVector of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setVector00
static int tolua_Lua_cocos2dx_widget_CGradientView_setVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* tPoint = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVector'", NULL);
#endif
  {
   self->setVector(*tPoint);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVector of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_getVector00
static int tolua_Lua_cocos2dx_widget_CGradientView_getVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVector'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getVector();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCompressedInterpolation of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_setCompressedInterpolation00
static int tolua_Lua_cocos2dx_widget_CGradientView_setCompressedInterpolation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
  bool bCompressedInterpolation = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCompressedInterpolation'", NULL);
#endif
  {
   self->setCompressedInterpolation(bCompressedInterpolation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCompressedInterpolation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isCompressedInterpolation of class  CGradientView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGradientView_isCompressedInterpolation00
static int tolua_Lua_cocos2dx_widget_CGradientView_isCompressedInterpolation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGradientView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGradientView* self = (CGradientView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isCompressedInterpolation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isCompressedInterpolation();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isCompressedInterpolation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CScrollViewContainer */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00
static int tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollViewContainer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollViewContainer* self = (CScrollViewContainer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_new00
static int tolua_Lua_cocos2dx_widget_CScrollView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollView* tolua_ret = (CScrollView*)  Mtolua_new((CScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_new00_local
static int tolua_Lua_cocos2dx_widget_CScrollView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CScrollView* tolua_ret = (CScrollView*)  Mtolua_new((CScrollView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScrollView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_delete00
static int tolua_Lua_cocos2dx_widget_CScrollView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_init00
static int tolua_Lua_cocos2dx_widget_CScrollView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_create00
static int tolua_Lua_cocos2dx_widget_CScrollView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CScrollView* tolua_ret = (CScrollView*)  CScrollView::create(*contentSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScrollView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSize'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSize(*tSize);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContainerSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCSize tSize = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContainerSize'", NULL);
#endif
  {
   self->setContainerSize(tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainerSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainerSize'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getContainerSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getDirection00
static int tolua_Lua_cocos2dx_widget_CScrollView_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CScrollViewDirection tolua_ret = (CScrollViewDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDirection00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CScrollViewDirection eDirection = ((CScrollViewDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContainer of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContainer00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContainer'", NULL);
#endif
  {
   CScrollViewContainer* tolua_ret = (CScrollViewContainer*)  self->getContainer();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CScrollViewContainer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*contentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getContentOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBounceable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bBounceable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBounceable'", NULL);
#endif
  {
   self->setBounceable(bBounceable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBounceable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBounceable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBounceable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBounceable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeaccelerateable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bDeaccelerateable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeaccelerateable'", NULL);
#endif
  {
   self->setDeaccelerateable(bDeaccelerateable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeaccelerateable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDeaccelerateable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDeaccelerateable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDeaccelerateable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDeaccelerateable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDragable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setDragable00
static int tolua_Lua_cocos2dx_widget_CScrollView_setDragable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  bool bDragable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDragable'", NULL);
#endif
  {
   self->setDragable(bDragable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDragable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDragable of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isDragable00
static int tolua_Lua_cocos2dx_widget_CScrollView_isDragable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDragable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDragable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDragable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchMoved of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00
static int tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchMoved();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopContainerAnimation of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00
static int tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopContainerAnimation'", NULL);
#endif
  {
   self->stopContainerAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopContainerAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getMaxOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CScrollView* self = (const CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinOffset'", NULL);
#endif
  {
   const CCPoint& tolua_ret = (const CCPoint&)  self->getMinOffset();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTop of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTop'", NULL);
#endif
  {
   self->setContentOffsetToTop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTopInDuration of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  float fDuration = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTopInDuration'", NULL);
#endif
  {
   self->setContentOffsetToTopInDuration(fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTopInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToTopEaseIn of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  float fDuration = ((float)  tolua_tonumber(tolua_S,2,0));
  float fRate = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToTopEaseIn'", NULL);
#endif
  {
   self->setContentOffsetToTopEaseIn(fDuration,fRate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToTopEaseIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToBottom of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToBottom'", NULL);
#endif
  {
   self->setContentOffsetToBottom();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToBottom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToRight of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToRight'", NULL);
#endif
  {
   self->setContentOffsetToRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetToLeft of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetToLeft'", NULL);
#endif
  {
   self->setContentOffsetToLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetToLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: relocateContainer of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00
static int tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'relocateContainer'", NULL);
#endif
  {
   self->relocateContainer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'relocateContainer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffset of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffset'", NULL);
#endif
  {
   self->setContentOffset(tOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetInDuration of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetInDuration'", NULL);
#endif
  {
   self->setContentOffsetInDuration(tOffset,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetInDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentOffsetEaseIn of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00
static int tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  CCPoint tOffset = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
  float fRate = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentOffsetEaseIn'", NULL);
#endif
  {
   self->setContentOffsetEaseIn(tOffset,fDuration,fRate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentOffsetEaseIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnScrollingScriptHandler of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_setOnScrollingScriptHandler00
static int tolua_Lua_cocos2dx_widget_CScrollView_setOnScrollingScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnScrollingScriptHandler'", NULL);
#endif
  {
   self->setOnScrollingScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnScrollingScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnScrollingScriptHandler of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CScrollView_removeOnScrollingScriptHandler00
static int tolua_Lua_cocos2dx_widget_CScrollView_removeOnScrollingScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CScrollView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnScrollingScriptHandler'", NULL);
#endif
  {
   self->removeOnScrollingScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnScrollingScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CScrollableProtocol__ of class  CScrollView */
#ifndef TOLUA_DISABLE_tolua_get_CScrollView___CScrollableProtocol__
static int tolua_get_CScrollView___CScrollableProtocol__(lua_State* tolua_S)
{
  CScrollView* self = (CScrollView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CScrollableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CScrollableProtocol*>(self), "CScrollableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CScrollableProtocol*)self), "CScrollableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_new00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  Mtolua_new((CTableViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  Mtolua_new((CTableViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdx of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdx'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIdx();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIdx of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIdx'", NULL);
#endif
  {
   self->setIdx(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CTableViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableViewCell_reset00
static int tolua_Lua_cocos2dx_widget_CTableViewCell_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableViewCell* self = (CTableViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_new00
static int tolua_Lua_cocos2dx_widget_CTableView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableView* tolua_ret = (CTableView*)  Mtolua_new((CTableView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_new00_local
static int tolua_Lua_cocos2dx_widget_CTableView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTableView* tolua_ret = (CTableView*)  Mtolua_new((CTableView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_delete00
static int tolua_Lua_cocos2dx_widget_CTableView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_create00
static int tolua_Lua_cocos2dx_widget_CTableView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CTableView* tolua_ret = (CTableView*)  CTableView::create(*tViewSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoRelocate of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoRelocate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoRelocate();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocate of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  bool bAuto = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocate'", NULL);
#endif
  {
   self->setAutoRelocate(bAuto);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoRelocateSpeed of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00
static int tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTableView* self = (const CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoRelocateSpeed'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAutoRelocateSpeed();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoRelocateSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocateSpeed of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00
static int tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  float fSpeed = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocateSpeed'", NULL);
#endif
  {
   self->setAutoRelocateSpeed(fSpeed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocateSpeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCells of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_getCells00
static int tolua_Lua_cocos2dx_widget_CTableView_getCells00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCells'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getCells();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCells'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cellAtIndex of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00
static int tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cellAtIndex'", NULL);
#endif
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  self->cellAtIndex(idx);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dequeueCell of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00
static int tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dequeueCell'", NULL);
#endif
  {
   CTableViewCell* tolua_ret = (CTableViewCell*)  self->dequeueCell();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTableViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dequeueCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_reloadData00
static int tolua_Lua_cocos2dx_widget_CTableView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDataSourceAdapterScriptHandler of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_setDataSourceAdapterScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTableView_setDataSourceAdapterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDataSourceAdapterScriptHandler'", NULL);
#endif
  {
   self->setDataSourceAdapterScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDataSourceAdapterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeDataSourceAdapterScriptHandler of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTableView_removeDataSourceAdapterScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTableView_removeDataSourceAdapterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTableView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeDataSourceAdapterScriptHandler'", NULL);
#endif
  {
   self->removeDataSourceAdapterScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeDataSourceAdapterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CDataSourceAdapterProtocol__ of class  CTableView */
#ifndef TOLUA_DISABLE_tolua_get_CTableView___CDataSourceAdapterProtocol__
static int tolua_get_CTableView___CDataSourceAdapterProtocol__(lua_State* tolua_S)
{
  CTableView* self = (CTableView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CDataSourceAdapterProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CDataSourceAdapterProtocol*>(self), "CDataSourceAdapterProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CDataSourceAdapterProtocol*)self), "CDataSourceAdapterProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewPage* tolua_ret = (CGridPageViewPage*)  Mtolua_new((CGridPageViewPage)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageViewPage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewPage* tolua_ret = (CGridPageViewPage*)  Mtolua_new((CGridPageViewPage)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageViewPage");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageViewPage */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageViewPage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageViewPage* self = (CGridPageViewPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewCell* tolua_ret = (CGridPageViewCell*)  Mtolua_new((CGridPageViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageViewCell* tolua_ret = (CGridPageViewCell*)  Mtolua_new((CGridPageViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageViewCell* self = (CGridPageViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_new00
static int tolua_Lua_cocos2dx_widget_CGridPageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageView* tolua_ret = (CGridPageView*)  Mtolua_new((CGridPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_new00_local
static int tolua_Lua_cocos2dx_widget_CGridPageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridPageView* tolua_ret = (CGridPageView*)  Mtolua_new((CGridPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_delete00
static int tolua_Lua_cocos2dx_widget_CGridPageView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_create00
static int tolua_Lua_cocos2dx_widget_CGridPageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CGridPageView* tolua_ret = (CGridPageView*)  CGridPageView::create(*tViewSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRows of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setRows00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uRows = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRows'", NULL);
#endif
  {
   self->setRows(uRows);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRows of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getRows00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRows'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRows();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColumns of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uColumns = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumns'", NULL);
#endif
  {
   self->setColumns(uColumns);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColumns of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00
static int tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridPageView* self = (const CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumns'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getColumns();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00
static int tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnPageChangedScriptHandler of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_setOnPageChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CGridPageView_setOnPageChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnPageChangedScriptHandler'", NULL);
#endif
  {
   self->setOnPageChangedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnPageChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnPageChangedScriptHandler of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridPageView_removeOnPageChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CGridPageView_removeOnPageChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnPageChangedScriptHandler'", NULL);
#endif
  {
   self->removeOnPageChangedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnPageChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CPageChangeableProtocol__ of class  CGridPageView */
#ifndef TOLUA_DISABLE_tolua_get_CGridPageView___CPageChangeableProtocol__
static int tolua_get_CGridPageView___CPageChangeableProtocol__(lua_State* tolua_S)
{
  CGridPageView* self = (CGridPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CPageChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CPageChangeableProtocol*>(self), "CPageChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CPageChangeableProtocol*)self), "CPageChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageViewCell_new00
static int tolua_Lua_cocos2dx_widget_CPageViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageViewCell* tolua_ret = (CPageViewCell*)  Mtolua_new((CPageViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CPageViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPageViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageViewCell* tolua_ret = (CPageViewCell*)  Mtolua_new((CPageViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CPageViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_new00
static int tolua_Lua_cocos2dx_widget_CPageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageView* tolua_ret = (CPageView*)  Mtolua_new((CPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_new00_local
static int tolua_Lua_cocos2dx_widget_CPageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CPageView* tolua_ret = (CPageView*)  Mtolua_new((CPageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CPageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_create00
static int tolua_Lua_cocos2dx_widget_CPageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tPageSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CPageView* tolua_ret = (CPageView*)  CPageView::create(*tPageSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CPageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnPageChangedScriptHandler of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_setOnPageChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CPageView_setOnPageChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPageView* self = (CPageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnPageChangedScriptHandler'", NULL);
#endif
  {
   self->setOnPageChangedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnPageChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnPageChangedScriptHandler of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CPageView_removeOnPageChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CPageView_removeOnPageChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CPageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CPageView* self = (CPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnPageChangedScriptHandler'", NULL);
#endif
  {
   self->removeOnPageChangedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnPageChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CPageChangeableProtocol__ of class  CPageView */
#ifndef TOLUA_DISABLE_tolua_get_CPageView___CPageChangeableProtocol__
static int tolua_get_CPageView___CPageChangeableProtocol__(lua_State* tolua_S)
{
  CPageView* self = (CPageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CPageChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CPageChangeableProtocol*>(self), "CPageChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CPageChangeableProtocol*)self), "CPageChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_new00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  Mtolua_new((CGridViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local
static int tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  Mtolua_new((CGridViewCell)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridViewCell");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_delete00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIdx of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridViewCell* self = (const CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIdx'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getIdx();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIdx of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uIdx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIdx'", NULL);
#endif
  {
   self->setIdx(uIdx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIdx'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRow of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridViewCell* self = (const CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRow'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRow();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRow of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uRow = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRow'", NULL);
#endif
  {
   self->setRow(uRow);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  CGridViewCell */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridViewCell_reset00
static int tolua_Lua_cocos2dx_widget_CGridViewCell_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridViewCell",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridViewCell* self = (CGridViewCell*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_new00
static int tolua_Lua_cocos2dx_widget_CGridView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridView* tolua_ret = (CGridView*)  Mtolua_new((CGridView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_new00_local
static int tolua_Lua_cocos2dx_widget_CGridView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CGridView* tolua_ret = (CGridView*)  Mtolua_new((CGridView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_delete00
static int tolua_Lua_cocos2dx_widget_CGridView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_create00
static int tolua_Lua_cocos2dx_widget_CGridView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tViewSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CGridView* tolua_ret = (CGridView*)  CGridView::create(*tViewSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCountOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uCellsCount = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCountOfCell'", NULL);
#endif
  {
   self->setCountOfCell(uCellsCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCountOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCountOfCell'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCountOfCell();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCountOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSizeOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tCellsSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSizeOfCell'", NULL);
#endif
  {
   self->setSizeOfCell(*tCellsSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSizeOfCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00
static int tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSizeOfCell'", NULL);
#endif
  {
   const CCSize& tolua_ret = (const CCSize&)  self->getSizeOfCell();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSizeOfCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColumns of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setColumns00
static int tolua_Lua_cocos2dx_widget_CGridView_setColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uColumns = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColumns'", NULL);
#endif
  {
   self->setColumns(uColumns);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColumns of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getColumns00
static int tolua_Lua_cocos2dx_widget_CGridView_getColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColumns'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getColumns();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRows of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getRows00
static int tolua_Lua_cocos2dx_widget_CGridView_getRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRows'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRows();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoRelocate of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CGridView* self = (const CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoRelocate'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoRelocate();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoRelocate of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00
static int tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  bool bAuto = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoRelocate'", NULL);
#endif
  {
   self->setAutoRelocate(bAuto);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoRelocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCells of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_getCells00
static int tolua_Lua_cocos2dx_widget_CGridView_getCells00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCells'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getCells();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCells'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cellAtIndex of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00
static int tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cellAtIndex'", NULL);
#endif
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  self->cellAtIndex(idx);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cellAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dequeueCell of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00
static int tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dequeueCell'", NULL);
#endif
  {
   CGridViewCell* tolua_ret = (CGridViewCell*)  self->dequeueCell();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CGridViewCell");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dequeueCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_reloadData00
static int tolua_Lua_cocos2dx_widget_CGridView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDataSourceAdapterScriptHandler of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_setDataSourceAdapterScriptHandler00
static int tolua_Lua_cocos2dx_widget_CGridView_setDataSourceAdapterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDataSourceAdapterScriptHandler'", NULL);
#endif
  {
   self->setDataSourceAdapterScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDataSourceAdapterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeDataSourceAdapterScriptHandler of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CGridView_removeDataSourceAdapterScriptHandler00
static int tolua_Lua_cocos2dx_widget_CGridView_removeDataSourceAdapterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CGridView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeDataSourceAdapterScriptHandler'", NULL);
#endif
  {
   self->removeDataSourceAdapterScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeDataSourceAdapterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CDataSourceAdapterProtocol__ of class  CGridView */
#ifndef TOLUA_DISABLE_tolua_get_CGridView___CDataSourceAdapterProtocol__
static int tolua_get_CGridView___CDataSourceAdapterProtocol__(lua_State* tolua_S)
{
  CGridView* self = (CGridView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CDataSourceAdapterProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CDataSourceAdapterProtocol*>(self), "CDataSourceAdapterProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CDataSourceAdapterProtocol*)self), "CDataSourceAdapterProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_new00
static int tolua_Lua_cocos2dx_widget_CListView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CListView* tolua_ret = (CListView*)  Mtolua_new((CListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_new00_local
static int tolua_Lua_cocos2dx_widget_CListView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CListView* tolua_ret = (CListView*)  Mtolua_new((CListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CListView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_delete00
static int tolua_Lua_cocos2dx_widget_CListView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_create00
static int tolua_Lua_cocos2dx_widget_CListView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CListView* tolua_ret = (CListView*)  CListView::create(*contentSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNodeAtLast of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00
static int tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNodeAtLast'", NULL);
#endif
  {
   self->insertNodeAtLast(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNodeAtLast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNodeAtFront of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00
static int tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNodeAtFront'", NULL);
#endif
  {
   self->insertNodeAtFront(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNodeAtFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNode00
static int tolua_Lua_cocos2dx_widget_CListView_insertNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCNode* pTarget = ((CCNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNode'", NULL);
#endif
  {
   self->insertNode(pNode,pTarget);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_insertNode01
static int tolua_Lua_cocos2dx_widget_CListView_insertNode01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertNode'", NULL);
#endif
  {
   self->insertNode(pNode,idx);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CListView_insertNode00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNodeAtIndex of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeNodeAtIndex00
static int tolua_Lua_cocos2dx_widget_CListView_removeNodeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNodeAtIndex'", NULL);
#endif
  {
   self->removeNodeAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNodeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeNode'", NULL);
#endif
  {
   self->removeNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFrontNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFrontNode'", NULL);
#endif
  {
   self->removeFrontNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFrontNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLastNode of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeLastNode00
static int tolua_Lua_cocos2dx_widget_CListView_removeLastNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLastNode'", NULL);
#endif
  {
   self->removeLastNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLastNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllNodes of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00
static int tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllNodes'", NULL);
#endif
  {
   self->removeAllNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodes of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_getNodes00
static int tolua_Lua_cocos2dx_widget_CListView_getNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodes'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getNodes();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeAtIndex of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_getNodeAtIndex00
static int tolua_Lua_cocos2dx_widget_CListView_getNodeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeAtIndex'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNodeAtIndex(idx);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeCount of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_getNodeCount00
static int tolua_Lua_cocos2dx_widget_CListView_getNodeCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CListView* self = (const CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getNodeCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CListView_reloadData00
static int tolua_Lua_cocos2dx_widget_CListView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CListView* self = (CListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_new00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CExpandableNode* tolua_ret = (CExpandableNode*)  Mtolua_new((CExpandableNode)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_new00_local
static int tolua_Lua_cocos2dx_widget_CExpandableNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CExpandableNode* tolua_ret = (CExpandableNode*)  Mtolua_new((CExpandableNode)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_delete00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_create00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CExpandableNode* tolua_ret = (CExpandableNode*)  CExpandableNode::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemNodeAtLast of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtLast00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtLast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemNodeAtLast'", NULL);
#endif
  {
   self->insertItemNodeAtLast(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItemNodeAtLast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertItemNodeAtFront of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtFront00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertItemNodeAtFront'", NULL);
#endif
  {
   self->insertItemNodeAtFront(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertItemNodeAtFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeItemNode of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNode00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeItemNode'", NULL);
#endif
  {
   self->removeItemNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeItemNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeItemNodeAtIndex of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNodeAtIndex00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNodeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeItemNodeAtIndex'", NULL);
#endif
  {
   self->removeItemNodeAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeItemNodeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllItemNodes of class  CExpandableNode */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableNode_removeAllItemNodes00
static int tolua_Lua_cocos2dx_widget_CExpandableNode_removeAllItemNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableNode* self = (CExpandableNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllItemNodes'", NULL);
#endif
  {
   self->removeAllItemNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllItemNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_new00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CExpandableListView* tolua_ret = (CExpandableListView*)  Mtolua_new((CExpandableListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_new00_local
static int tolua_Lua_cocos2dx_widget_CExpandableListView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CExpandableListView* tolua_ret = (CExpandableListView*)  Mtolua_new((CExpandableListView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableListView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_delete00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_create00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  {
   CExpandableListView* tolua_ret = (CExpandableListView*)  CExpandableListView::create(*contentSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableListView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: expand of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_expand00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_expand00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'expand'", NULL);
#endif
  {
   self->expand(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expand'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: collapse of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_collapse00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_collapse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'collapse'", NULL);
#endif
  {
   self->collapse(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'collapse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertExpandableNodeAtLast of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtLast00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtLast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  CExpandableNode* pNode = ((CExpandableNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertExpandableNodeAtLast'", NULL);
#endif
  {
   self->insertExpandableNodeAtLast(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertExpandableNodeAtLast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertExpandableNodeAtFront of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtFront00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  CExpandableNode* pNode = ((CExpandableNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertExpandableNodeAtFront'", NULL);
#endif
  {
   self->insertExpandableNodeAtFront(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertExpandableNodeAtFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeExpandableNode of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNode00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CExpandableNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  CExpandableNode* pNode = ((CExpandableNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeExpandableNode'", NULL);
#endif
  {
   self->removeExpandableNode(pNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeExpandableNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeExpandableNodeAtIndex of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNodeAtIndex00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNodeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeExpandableNodeAtIndex'", NULL);
#endif
  {
   self->removeExpandableNodeAtIndex(idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeExpandableNodeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLastExpandableNode of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_removeLastExpandableNode00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_removeLastExpandableNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLastExpandableNode'", NULL);
#endif
  {
   self->removeLastExpandableNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLastExpandableNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFrontExpandableNode of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_removeFrontExpandableNode00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_removeFrontExpandableNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFrontExpandableNode'", NULL);
#endif
  {
   self->removeFrontExpandableNode();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFrontExpandableNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllExpandableNodes of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_removeAllExpandableNodes00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_removeAllExpandableNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllExpandableNodes'", NULL);
#endif
  {
   self->removeAllExpandableNodes();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllExpandableNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExpandableNodes of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodes00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExpandableNodes'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getExpandableNodes();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExpandableNodes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExpandableNodeCount of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeCount00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExpandableNodeCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getExpandableNodeCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExpandableNodeCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExpandableNodeAtIndex of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeAtIndex00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
  unsigned int idx = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExpandableNodeAtIndex'", NULL);
#endif
  {
   CExpandableNode* tolua_ret = (CExpandableNode*)  self->getExpandableNodeAtIndex(idx);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CExpandableNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExpandableNodeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CExpandableListView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CExpandableListView_reloadData00
static int tolua_Lua_cocos2dx_widget_CExpandableListView_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CExpandableListView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CExpandableListView* self = (CExpandableListView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_new00
static int tolua_Lua_cocos2dx_widget_CButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  Mtolua_new((CButton)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_new00_local
static int tolua_Lua_cocos2dx_widget_CButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  Mtolua_new((CButton)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CButton");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_delete00
static int tolua_Lua_cocos2dx_widget_CButton_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_init00
static int tolua_Lua_cocos2dx_widget_CButton_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWith9Sprite of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,0));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWith9Sprite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_initWithFile00
static int tolua_Lua_cocos2dx_widget_CButton_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(pNormal,pSelected,pDisabled);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_create00
static int tolua_Lua_cocos2dx_widget_CButton_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CButton* tolua_ret = (CButton*)  CButton::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_create01
static int tolua_Lua_cocos2dx_widget_CButton_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  {
   CButton* tolua_ret = (CButton*)  CButton::create(pNormal,pSelected,pDisabled);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CButton");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CButton_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWith9Sprite of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  {
   CButton* tolua_ret = (CButton*)  CButton::createWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setContentSize00
static int tolua_Lua_cocos2dx_widget_CButton_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* contentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*contentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLabelOffset of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00
static int tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* tOffset = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLabelOffset'", NULL);
#endif
  {
   self->setLabelOffset(*tOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLabelOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setText00
static int tolua_Lua_cocos2dx_widget_CButton_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(pText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getText00
static int tolua_Lua_cocos2dx_widget_CButton_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextFontName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setTextFontName00
static int tolua_Lua_cocos2dx_widget_CButton_setTextFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pTextFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextFontName'", NULL);
#endif
  {
   self->setTextFontName(pTextFontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextFontName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getTextFontName00
static int tolua_Lua_cocos2dx_widget_CButton_getTextFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTextFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextFontSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setTextFontSize00
static int tolua_Lua_cocos2dx_widget_CButton_setTextFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  float fTextFontSize = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextFontSize'", NULL);
#endif
  {
   self->setTextFontSize(fTextFontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextFontSize of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getTextFontSize00
static int tolua_Lua_cocos2dx_widget_CButton_getTextFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextFontSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTextFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextColor of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setTextColor00
static int tolua_Lua_cocos2dx_widget_CButton_setTextColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextColor'", NULL);
#endif
  {
   self->setTextColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextColor of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getTextColor00
static int tolua_Lua_cocos2dx_widget_CButton_getTextColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getTextColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initText of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_initText00
static int tolua_Lua_cocos2dx_widget_CButton_initText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pText = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initText'", NULL);
#endif
  {
   self->initText(pText,pFontName,fFontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLabel of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getLabel00
static int tolua_Lua_cocos2dx_widget_CButton_getLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLabel'", NULL);
#endif
  {
   CLabel* tolua_ret = (CLabel*)  self->getLabel();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isScale9Enabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00
static int tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isScale9Enabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isScale9Enabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale9Enabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00
static int tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale9Enabled'", NULL);
#endif
  {
   self->setScale9Enabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale9Enabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeTextSizeEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeTextSizeEnabled'", NULL);
#endif
  {
   self->setCascadeTextSizeEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCascadeTextSizeEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCascadeTextSizeEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled01
static int tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
  const CCSize* tPadding = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCascadeTextSizeEnabled'", NULL);
#endif
  {
   self->setCascadeTextSizeEnabled(bEnabled,*tPadding);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalImage00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalImage'", NULL);
#endif
  {
   self->setNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedImage'", NULL);
#endif
  {
   self->setSelectedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledImage'", NULL);
#endif
  {
   self->setDisabledImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTexture'", NULL);
#endif
  {
   self->setNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedTexture'", NULL);
#endif
  {
   self->setSelectedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledTexture of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledTexture'", NULL);
#endif
  {
   self->setDisabledTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrameName'", NULL);
#endif
  {
   self->setNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedSpriteFrameName'", NULL);
#endif
  {
   self->setSelectedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSpriteFrameName of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrame'", NULL);
#endif
  {
   self->setNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedSpriteFrame'", NULL);
#endif
  {
   self->setSelectedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSpriteFrame of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSpriteFrame'", NULL);
#endif
  {
   self->setDisabledSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNormalImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getNormalImage00
static int tolua_Lua_cocos2dx_widget_CButton_getNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNormalImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00
static int tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getSelectedImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledImage of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00
static int tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledImage'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getDisabledImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getUserTag00
static int tolua_Lua_cocos2dx_widget_CButton_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CButton* self = (const CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setUserTag00
static int tolua_Lua_cocos2dx_widget_CButton_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getId00
static int tolua_Lua_cocos2dx_widget_CButton_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setId00
static int tolua_Lua_cocos2dx_widget_CButton_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_getDescription00
static int tolua_Lua_cocos2dx_widget_CButton_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setDescription00
static int tolua_Lua_cocos2dx_widget_CButton_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_isEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CButton_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CButton_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CButton_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CButton_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CButton */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CButton_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CButton_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CWidget__
static int tolua_get_CButton___CWidget__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CClickableProtocol__
static int tolua_get_CButton___CClickableProtocol__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CButton */
#ifndef TOLUA_DISABLE_tolua_get_CButton___CLongClickableProtocol__
static int tolua_get_CButton___CLongClickableProtocol__(lua_State* tolua_S)
{
  CButton* self = (CButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_new00
static int tolua_Lua_cocos2dx_widget_CToggleView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  Mtolua_new((CToggleView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_new00_local
static int tolua_Lua_cocos2dx_widget_CToggleView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  Mtolua_new((CToggleView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CToggleView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_delete00
static int tolua_Lua_cocos2dx_widget_CToggleView_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_create00
static int tolua_Lua_cocos2dx_widget_CToggleView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_create01
static int tolua_Lua_cocos2dx_widget_CToggleView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::create(pNormal,pSelected,pDisabled);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CToggleView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWith9Sprite of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00
static int tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CToggleView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* pNormal = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* pSelected = ((const char*)  tolua_tostring(tolua_S,4,NULL));
  const char* pDisabled = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  {
   CToggleView* tolua_ret = (CToggleView*)  CToggleView::createWith9Sprite(*tSize,pNormal,pSelected,pDisabled);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CToggleView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWith9Sprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00
static int tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChecked of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setChecked00
static int tolua_Lua_cocos2dx_widget_CToggleView_setChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  bool bChecked = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChecked'", NULL);
#endif
  {
   self->setChecked(bChecked);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isChecked of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_isChecked00
static int tolua_Lua_cocos2dx_widget_CToggleView_isChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CToggleView* self = (const CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChecked'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isChecked();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExclusion of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setExclusion00
static int tolua_Lua_cocos2dx_widget_CToggleView_setExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  int nExclusion = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExclusion'", NULL);
#endif
  {
   self->setExclusion(nExclusion);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExclusion of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_getExclusion00
static int tolua_Lua_cocos2dx_widget_CToggleView_getExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CToggleView* self = (const CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExclusion'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getExclusion();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnCheckScriptHandler of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_setOnCheckScriptHandler00
static int tolua_Lua_cocos2dx_widget_CToggleView_setOnCheckScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnCheckScriptHandler'", NULL);
#endif
  {
   self->setOnCheckScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnCheckScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeCheckScriptHandler of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CToggleView_removeCheckScriptHandler00
static int tolua_Lua_cocos2dx_widget_CToggleView_removeCheckScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CToggleView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeCheckScriptHandler'", NULL);
#endif
  {
   self->removeCheckScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeCheckScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCheckableProtocol__ of class  CToggleView */
#ifndef TOLUA_DISABLE_tolua_get_CToggleView___CCheckableProtocol__
static int tolua_get_CToggleView___CCheckableProtocol__(lua_State* tolua_S)
{
  CToggleView* self = (CToggleView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCheckableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCheckableProtocol*>(self), "CCheckableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCheckableProtocol*)self), "CCheckableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_new00
static int tolua_Lua_cocos2dx_widget_CCheckBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  Mtolua_new((CCheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_new00_local
static int tolua_Lua_cocos2dx_widget_CCheckBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  Mtolua_new((CCheckBox)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCheckBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_delete00
static int tolua_Lua_cocos2dx_widget_CCheckBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_init00
static int tolua_Lua_cocos2dx_widget_CCheckBox_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_create00
static int tolua_Lua_cocos2dx_widget_CCheckBox_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCheckBox* tolua_ret = (CCheckBox*)  CCheckBox::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCheckBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tContentSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tContentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalImage'", NULL);
#endif
  {
   self->setNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressImage'", NULL);
#endif
  {
   self->setNormalPressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedImage'", NULL);
#endif
  {
   self->setCheckedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressImage'", NULL);
#endif
  {
   self->setCheckedPressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalImage'", NULL);
#endif
  {
   self->setDisabledNormalImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedImage of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedImage'", NULL);
#endif
  {
   self->setDisabledCheckedImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrame'", NULL);
#endif
  {
   self->setNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressSpriteFrame'", NULL);
#endif
  {
   self->setNormalPressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedSpriteFrame'", NULL);
#endif
  {
   self->setCheckedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressSpriteFrame'", NULL);
#endif
  {
   self->setCheckedPressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalSpriteFrame'", NULL);
#endif
  {
   self->setDisabledNormalSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedSpriteFrame of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedSpriteFrame'", NULL);
#endif
  {
   self->setDisabledCheckedSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalTexture'", NULL);
#endif
  {
   self->setNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressTexture'", NULL);
#endif
  {
   self->setNormalPressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedTexture'", NULL);
#endif
  {
   self->setCheckedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressTexture'", NULL);
#endif
  {
   self->setCheckedPressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalTexture'", NULL);
#endif
  {
   self->setDisabledNormalTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedTexture of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedTexture'", NULL);
#endif
  {
   self->setDisabledCheckedTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSpriteFrameName'", NULL);
#endif
  {
   self->setNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalPressSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalPressSpriteFrameName'", NULL);
#endif
  {
   self->setNormalPressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalPressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedSpriteFrameName'", NULL);
#endif
  {
   self->setCheckedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCheckedPressSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCheckedPressSpriteFrameName'", NULL);
#endif
  {
   self->setCheckedPressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCheckedPressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledNormalSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledNormalSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledNormalSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledNormalSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledCheckedSpriteFrameName of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledCheckedSpriteFrameName'", NULL);
#endif
  {
   self->setDisabledCheckedSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledCheckedSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChecked of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool bChecked = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChecked'", NULL);
#endif
  {
   self->setChecked(bChecked);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isChecked of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_isChecked00
static int tolua_Lua_cocos2dx_widget_CCheckBox_isChecked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCheckBox* self = (const CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isChecked'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isChecked();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isChecked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExclusion of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setExclusion00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  int nExclusion = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExclusion'", NULL);
#endif
  {
   self->setExclusion(nExclusion);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getExclusion of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_getExclusion00
static int tolua_Lua_cocos2dx_widget_CCheckBox_getExclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCheckBox* self = (const CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getExclusion'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getExclusion();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getExclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnCheckScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnCheckScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnCheckScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnCheckScriptHandler'", NULL);
#endif
  {
   self->setOnCheckScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnCheckScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeCheckScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeCheckScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeCheckScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeCheckScriptHandler'", NULL);
#endif
  {
   self->removeCheckScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeCheckScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_getUserTag00
static int tolua_Lua_cocos2dx_widget_CCheckBox_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCheckBox* self = (const CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setUserTag00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_getId00
static int tolua_Lua_cocos2dx_widget_CCheckBox_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setId00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_getDescription00
static int tolua_Lua_cocos2dx_widget_CCheckBox_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setDescription00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_isEnabled00
static int tolua_Lua_cocos2dx_widget_CCheckBox_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CCheckBox_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CCheckBox_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCheckBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CWidget__
static int tolua_get_CCheckBox___CWidget__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCheckableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CCheckableProtocol__
static int tolua_get_CCheckBox___CCheckableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCheckableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCheckableProtocol*>(self), "CCheckableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CCheckableProtocol*)self), "CCheckableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CClickableProtocol__
static int tolua_get_CCheckBox___CClickableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CCheckBox */
#ifndef TOLUA_DISABLE_tolua_get_CCheckBox___CLongClickableProtocol__
static int tolua_get_CCheckBox___CLongClickableProtocol__(lua_State* tolua_S)
{
  CCheckBox* self = (CCheckBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_new00
static int tolua_Lua_cocos2dx_widget_CImageView_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  Mtolua_new((CImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_new00_local
static int tolua_Lua_cocos2dx_widget_CImageView_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  Mtolua_new((CImageView)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_init00
static int tolua_Lua_cocos2dx_widget_CImageView_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create00
static int tolua_Lua_cocos2dx_widget_CImageView_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create01
static int tolua_Lua_cocos2dx_widget_CImageView_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create(pszFileName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_create02
static int tolua_Lua_cocos2dx_widget_CImageView_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::create(pszFileName,*rect);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithTexture(pTexture);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01
static int tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithTexture(pTexture,*rect);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithSpriteFrame(pSpriteFrame);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszSpriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageView* tolua_ret = (CImageView*)  CImageView::createWithSpriteFrameName(pszSpriteFrameName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_getUserTag00
static int tolua_Lua_cocos2dx_widget_CImageView_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CImageView* self = (const CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setUserTag00
static int tolua_Lua_cocos2dx_widget_CImageView_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_getId00
static int tolua_Lua_cocos2dx_widget_CImageView_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setId00
static int tolua_Lua_cocos2dx_widget_CImageView_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_getDescription00
static int tolua_Lua_cocos2dx_widget_CImageView_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setDescription00
static int tolua_Lua_cocos2dx_widget_CImageView_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_isEnabled00
static int tolua_Lua_cocos2dx_widget_CImageView_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setEnabled00
static int tolua_Lua_cocos2dx_widget_CImageView_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CImageView_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CImageView_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CImageView_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CImageView_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CImageView_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageView",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CWidget__
static int tolua_get_CImageView___CWidget__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CClickableProtocol__
static int tolua_get_CImageView___CClickableProtocol__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CImageView */
#ifndef TOLUA_DISABLE_tolua_get_CImageView___CLongClickableProtocol__
static int tolua_get_CImageView___CLongClickableProtocol__(lua_State* tolua_S)
{
  CImageView* self = (CImageView*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_new00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  Mtolua_new((CImageViewScale9)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  Mtolua_new((CImageViewScale9)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_init00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* size = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(*size,file);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,4,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file,rect,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create02
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file,rect);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create03
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(capInsets,file);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create04
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create(file);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrame(spriteFrame,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrame of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSpriteFrame* spriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrame(spriteFrame);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrameName(spriteFrameName,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithSpriteFrameName of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* spriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithSpriteFrameName(spriteFrameName);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithTexture(pTexture);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createWithTexture of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect capInsets = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::createWithTexture(pTexture,capInsets);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_create05
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_create05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CImageViewScale9* tolua_ret = (CImageViewScale9*)  CImageViewScale9::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CImageViewScale9");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CImageViewScale9_create04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_getUserTag00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CImageViewScale9* self = (const CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setUserTag00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_getId00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setId00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_getDescription00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setDescription00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_isEnabled00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setEnabled00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CImageViewScale9",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CWidget__
static int tolua_get_CImageViewScale9___CWidget__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CClickableProtocol__
static int tolua_get_CImageViewScale9___CClickableProtocol__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CImageViewScale9 */
#ifndef TOLUA_DISABLE_tolua_get_CImageViewScale9___CLongClickableProtocol__
static int tolua_get_CImageViewScale9___CLongClickableProtocol__(lua_State* tolua_S)
{
  CImageViewScale9* self = (CImageViewScale9*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_new00
static int tolua_Lua_cocos2dx_widget_CLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  Mtolua_new((CLabel)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_new00_local
static int tolua_Lua_cocos2dx_widget_CLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  Mtolua_new((CLabel)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_delete00
static int tolua_Lua_cocos2dx_widget_CLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_init00
static int tolua_Lua_cocos2dx_widget_CLabel_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create00
static int tolua_Lua_cocos2dx_widget_CLabel_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create01
static int tolua_Lua_cocos2dx_widget_CLabel_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create02
static int tolua_Lua_cocos2dx_widget_CLabel_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  const CCSize* tDimensions = ((const CCSize*)  tolua_tousertype(tolua_S,5,0));
  CCTextAlignment hAlignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,6,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize,*tDimensions,hAlignment);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_create03
static int tolua_Lua_cocos2dx_widget_CLabel_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCTextAlignment",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"CCVerticalTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  const CCSize* tDimensions = ((const CCSize*)  tolua_tousertype(tolua_S,5,0));
  CCTextAlignment hAlignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,6,0));
  CCVerticalTextAlignment vAlignment = *((CCVerticalTextAlignment*)  tolua_tousertype(tolua_S,7,0));
  {
   CLabel* tolua_ret = (CLabel*)  CLabel::create(pString,pFontName,fFontSize,*tDimensions,hAlignment,vAlignment);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabel_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_getUserTag00
static int tolua_Lua_cocos2dx_widget_CLabel_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CLabel* self = (const CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setUserTag00
static int tolua_Lua_cocos2dx_widget_CLabel_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_getId00
static int tolua_Lua_cocos2dx_widget_CLabel_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setId00
static int tolua_Lua_cocos2dx_widget_CLabel_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_getDescription00
static int tolua_Lua_cocos2dx_widget_CLabel_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setDescription00
static int tolua_Lua_cocos2dx_widget_CLabel_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_isEnabled00
static int tolua_Lua_cocos2dx_widget_CLabel_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setEnabled00
static int tolua_Lua_cocos2dx_widget_CLabel_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabel_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabel_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CLabel_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CLabel_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CLabel_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CWidget__
static int tolua_get_CLabel___CWidget__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CClickableProtocol__
static int tolua_get_CLabel___CClickableProtocol__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabel */
#ifndef TOLUA_DISABLE_tolua_get_CLabel___CLongClickableProtocol__
static int tolua_get_CLabel___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabel* self = (CLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_new00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  Mtolua_new((CLabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  Mtolua_new((CLabelAtlas)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_init00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_create00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  unsigned int itemWidth = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int itemHeight = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  unsigned int startCharMap = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  CLabelAtlas::create(pString,charMapFile,itemWidth,itemHeight,startCharMap);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_create01
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CLabelAtlas* tolua_ret = (CLabelAtlas*)  CLabelAtlas::create(pString,fntFile);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelAtlas");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelAtlas_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_getUserTag00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CLabelAtlas* self = (const CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setUserTag00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_getId00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setId00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_getDescription00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setDescription00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_isEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CWidget__
static int tolua_get_CLabelAtlas___CWidget__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CClickableProtocol__
static int tolua_get_CLabelAtlas___CClickableProtocol__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_get_CLabelAtlas___CLongClickableProtocol__
static int tolua_get_CLabelAtlas___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabelAtlas* self = (CLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_new00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  Mtolua_new((CLabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  Mtolua_new((CLabelBMFont)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_init00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCTextAlignment",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,5,0));
  CCPoint imageOffset = *((CCPoint*)  tolua_tousertype(tolua_S,6,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width,alignment,imageOffset);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create01
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCTextAlignment",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  CCTextAlignment alignment = *((CCTextAlignment*)  tolua_tousertype(tolua_S,5,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width,alignment);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create02
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile,width);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create03
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create(pString,fntFile);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_create04
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_create04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CLabelBMFont* tolua_ret = (CLabelBMFont*)  CLabelBMFont::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CLabelBMFont");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CLabelBMFont_create03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnClickScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnClickScriptHandler'", NULL);
#endif
  {
   self->setOnClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnClickScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnClickScriptHandler'", NULL);
#endif
  {
   self->removeOnClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnLongClickScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnLongClickScriptHandler'", NULL);
#endif
  {
   self->setOnLongClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnLongClickScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnLongClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnLongClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnLongClickScriptHandler'", NULL);
#endif
  {
   self->removeOnLongClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnLongClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_getUserTag00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CLabelBMFont* self = (const CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setUserTag00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_getId00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setId00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_getDescription00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setDescription00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_isEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CWidget__
static int tolua_get_CLabelBMFont___CWidget__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CClickableProtocol__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CClickableProtocol__
static int tolua_get_CLabelBMFont___CClickableProtocol__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CClickableProtocol*>(self), "CClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CClickableProtocol*)self), "CClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CLongClickableProtocol__ of class  CLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CLabelBMFont___CLongClickableProtocol__
static int tolua_get_CLabelBMFont___CLongClickableProtocol__(lua_State* tolua_S)
{
  CLabelBMFont* self = (CLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CLongClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CLongClickableProtocol*>(self), "CLongClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CLongClickableProtocol*)self), "CLongClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_new00
static int tolua_Lua_cocos2dx_widget_CProgressBar_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  Mtolua_new((CProgressBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_new00_local
static int tolua_Lua_cocos2dx_widget_CProgressBar_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  Mtolua_new((CProgressBar)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CProgressBar");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_delete00
static int tolua_Lua_cocos2dx_widget_CProgressBar_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_init00
static int tolua_Lua_cocos2dx_widget_CProgressBar_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithFile of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00
static int tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithFile(pProgress);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_create00
static int tolua_Lua_cocos2dx_widget_CProgressBar_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CProgressBar* tolua_ret = (CProgressBar*)  CProgressBar::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_create01
static int tolua_Lua_cocos2dx_widget_CProgressBar_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CProgressBar* tolua_ret = (CProgressBar*)  CProgressBar::create(pProgress);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CProgressBar");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CProgressBar_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValue'", NULL);
#endif
  {
   self->setValue(nValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nMaxValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxValue'", NULL);
#endif
  {
   self->setMaxValue(nMaxValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nMinValue = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinValue'", NULL);
#endif
  {
   self->setMinValue(nMinValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinValue of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMinValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CProgressBarDirection eDirection = ((CProgressBarDirection) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(eDirection);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   CProgressBarDirection tolua_ret = (CProgressBarDirection)  self->getDirection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startProgress of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00
static int tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nValue = ((int)  tolua_tonumber(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startProgress'", NULL);
#endif
  {
   self->startProgress(nValue,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startProgress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startProgressFromTo of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00
static int tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  int nFromValue = ((int)  tolua_tonumber(tolua_S,2,0));
  int nToValue = ((int)  tolua_tonumber(tolua_S,3,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startProgressFromTo'", NULL);
#endif
  {
   self->startProgressFromTo(nFromValue,nToValue,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startProgressFromTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopProgress of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00
static int tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopProgress'", NULL);
#endif
  {
   self->stopProgress();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopProgress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercentage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercentage'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPercentage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercentage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isProgressEnded of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00
static int tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isProgressEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isProgressEnded();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isProgressEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressImage'", NULL);
#endif
  {
   self->setProgressImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressTexture of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressTexture'", NULL);
#endif
  {
   self->setProgressTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressSpriteFrame of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressSpriteFrame'", NULL);
#endif
  {
   self->setProgressSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProgressSpriteFrameName of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProgressSpriteFrameName'", NULL);
#endif
  {
   self->setProgressSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProgressSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundImage'", NULL);
#endif
  {
   self->setBackgroundImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundTexture of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundTexture'", NULL);
#endif
  {
   self->setBackgroundTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrame of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrame'", NULL);
#endif
  {
   self->setBackgroundSpriteFrame(pSpriteFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSpriteFrameName of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const char* pFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSpriteFrameName'", NULL);
#endif
  {
   self->setBackgroundSpriteFrameName(pFrameName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CProgressBar* self = (const CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundImage'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getBackgroundImage();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundImage of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundImage'", NULL);
#endif
  {
   self->removeBackgroundImage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundColor of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundColor00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tColor = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundColor'", NULL);
#endif
  {
   self->setBackgroundColor(*tColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundColor of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundColor00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundColor'", NULL);
#endif
  {
   self->removeBackgroundColor();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundGradient of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundGradient00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundGradient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  const ccColor4B* tStart = ((const ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  const ccColor4B* tEnd = ((const ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundGradient'", NULL);
#endif
  {
   self->setBackgroundGradient(*tStart,*tEnd,*v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundGradient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBackgroundGradient of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundGradient00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundGradient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBackgroundGradient'", NULL);
#endif
  {
   self->removeBackgroundGradient();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBackgroundGradient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundOpacity of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundOpacity00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLbyte",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  GLbyte opacity = *((GLbyte*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundOpacity'", NULL);
#endif
  {
   self->setBackgroundOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnValueChangedScriptHandler of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setOnValueChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setOnValueChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnValueChangedScriptHandler'", NULL);
#endif
  {
   self->setOnValueChangedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnValueChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnValueChangedScriptHandler of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeOnValueChangedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeOnValueChangedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnValueChangedScriptHandler'", NULL);
#endif
  {
   self->removeOnValueChangedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnValueChangedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnProgressEndedScriptHandler of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_setOnProgressEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CProgressBar_setOnProgressEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnProgressEndedScriptHandler'", NULL);
#endif
  {
   self->setOnProgressEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnProgressEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnProgressEndedScriptHandler of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CProgressBar_removeOnProgressEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CProgressBar_removeOnProgressEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CProgressBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnProgressEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnProgressEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnProgressEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CProgressEndedProtocol__ of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_get_CProgressBar___CProgressEndedProtocol__
static int tolua_get_CProgressBar___CProgressEndedProtocol__(lua_State* tolua_S)
{
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CProgressEndedProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CProgressEndedProtocol*>(self), "CProgressEndedProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CProgressEndedProtocol*)self), "CProgressEndedProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CValueChangeableProtocol__ of class  CProgressBar */
#ifndef TOLUA_DISABLE_tolua_get_CProgressBar___CValueChangeableProtocol__
static int tolua_get_CProgressBar___CValueChangeableProtocol__(lua_State* tolua_S)
{
  CProgressBar* self = (CProgressBar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CValueChangeableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CValueChangeableProtocol*>(self), "CValueChangeableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CValueChangeableProtocol*)self), "CValueChangeableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_new00
static int tolua_Lua_cocos2dx_widget_CSlider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  Mtolua_new((CSlider)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CSlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_new00_local
static int tolua_Lua_cocos2dx_widget_CSlider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  Mtolua_new((CSlider)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CSlider");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_delete00
static int tolua_Lua_cocos2dx_widget_CSlider_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithSlider of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00
static int tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pSlider = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithSlider'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithSlider(pSlider,pProgress);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithSlider'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_create00
static int tolua_Lua_cocos2dx_widget_CSlider_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSlider* tolua_ret = (CSlider*)  CSlider::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CSlider");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_create01
static int tolua_Lua_cocos2dx_widget_CSlider_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pSlider = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pProgress = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CSlider* tolua_ret = (CSlider*)  CSlider::create(pSlider,pProgress);
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CSlider");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CSlider_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setContentSize00
static int tolua_Lua_cocos2dx_widget_CSlider_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const CCSize* tSize = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(*tSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderImage of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pFile = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderImage'", NULL);
#endif
  {
   self->setSliderImage(pFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderTexture of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderTexture'", NULL);
#endif
  {
   self->setSliderTexture(pTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderSpriteFrame of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderSpriteFrame'", NULL);
#endif
  {
   self->setSliderSpriteFrame(pFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSliderSpriteFrameName of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00
static int tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* pSpriteName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSliderSpriteFrameName'", NULL);
#endif
  {
   self->setSliderSpriteFrameName(pSpriteName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSliderSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_getUserTag00
static int tolua_Lua_cocos2dx_widget_CSlider_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CSlider* self = (const CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setUserTag00
static int tolua_Lua_cocos2dx_widget_CSlider_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_getId00
static int tolua_Lua_cocos2dx_widget_CSlider_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setId00
static int tolua_Lua_cocos2dx_widget_CSlider_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_getDescription00
static int tolua_Lua_cocos2dx_widget_CSlider_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setDescription00
static int tolua_Lua_cocos2dx_widget_CSlider_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_isEnabled00
static int tolua_Lua_cocos2dx_widget_CSlider_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setEnabled00
static int tolua_Lua_cocos2dx_widget_CSlider_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CSlider_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CSlider_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CSlider_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CSlider_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CSlider_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSlider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CSlider */
#ifndef TOLUA_DISABLE_tolua_get_CSlider___CWidget__
static int tolua_get_CSlider___CWidget__(lua_State* tolua_S)
{
  CSlider* self = (CSlider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_new00
static int tolua_Lua_cocos2dx_widget_CTextRich_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTextRich* tolua_ret = (CTextRich*)  Mtolua_new((CTextRich)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTextRich");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_new00_local
static int tolua_Lua_cocos2dx_widget_CTextRich_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTextRich* tolua_ret = (CTextRich*)  Mtolua_new((CTextRich)());
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTextRich");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_delete00
static int tolua_Lua_cocos2dx_widget_CTextRich_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_init00
static int tolua_Lua_cocos2dx_widget_CTextRich_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_create00
static int tolua_Lua_cocos2dx_widget_CTextRich_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CTextRich* tolua_ret = (CTextRich*)  CTextRich::create();
    int nID = (tolua_ret) ? (int)tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CTextRich");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontName of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getFontName00
static int tolua_Lua_cocos2dx_widget_CTextRich_getFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setFontName00
static int tolua_Lua_cocos2dx_widget_CTextRich_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(pFontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontSize of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getFontSize00
static int tolua_Lua_cocos2dx_widget_CTextRich_getFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTextRich* self = (const CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setFontSize00
static int tolua_Lua_cocos2dx_widget_CTextRich_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  float fFontSize = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(fFontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxLineLength of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getMaxLineLength00
static int tolua_Lua_cocos2dx_widget_CTextRich_getMaxLineLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTextRich* self = (const CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxLineLength'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getMaxLineLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxLineLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxLineLength of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setMaxLineLength00
static int tolua_Lua_cocos2dx_widget_CTextRich_setMaxLineLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uLen = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxLineLength'", NULL);
#endif
  {
   self->setMaxLineLength(uLen);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxLineLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalSpacing of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getVerticalSpacing00
static int tolua_Lua_cocos2dx_widget_CTextRich_getVerticalSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTextRich* self = (const CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalSpacing'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getVerticalSpacing();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVerticalSpacing of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setVerticalSpacing00
static int tolua_Lua_cocos2dx_widget_CTextRich_setVerticalSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  float fSpacing = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalSpacing'", NULL);
#endif
  {
   self->setVerticalSpacing(fSpacing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertElement of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_insertElement00
static int tolua_Lua_cocos2dx_widget_CTextRich_insertElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,NULL));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertElement'", NULL);
#endif
  {
   self->insertElement(pString,pFontName,fFontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertElement of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_insertElement01
static int tolua_Lua_cocos2dx_widget_CTextRich_insertElement01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isstring(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  const char* pString = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* pFontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fFontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  const ccColor3B* tColor = ((const ccColor3B*)  tolua_tousertype(tolua_S,5,0));
  const char* pDescription = ((const char*)  tolua_tostring(tolua_S,6,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertElement'", NULL);
#endif
  {
   self->insertElement(pString,pFontName,fFontSize,*tColor,pDescription);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CTextRich_insertElement00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertElement of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_insertElement02
static int tolua_Lua_cocos2dx_widget_CTextRich_insertElement02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isstring(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  CCNode* pNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int uLen = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const char* pDescription = ((const char*)  tolua_tostring(tolua_S,4,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertElement'", NULL);
#endif
  {
   self->insertElement(pNode,uLen,pDescription);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Lua_cocos2dx_widget_CTextRich_insertElement01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllElements of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeAllElements00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeAllElements00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllElements'", NULL);
#endif
  {
   self->removeAllElements();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllElements'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadData of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_reloadData00
static int tolua_Lua_cocos2dx_widget_CTextRich_reloadData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reloadData'", NULL);
#endif
  {
   self->reloadData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTextRichClickScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setOnTextRichClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_setOnTextRichClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTextRichClickScriptHandler'", NULL);
#endif
  {
   self->setOnTextRichClickScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTextRichClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTextRichClickScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeOnTextRichClickScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeOnTextRichClickScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTextRichClickScriptHandler'", NULL);
#endif
  {
   self->removeOnTextRichClickScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTextRichClickScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserTag of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getUserTag00
static int tolua_Lua_cocos2dx_widget_CTextRich_getUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CTextRich* self = (const CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getUserTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserTag of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setUserTag00
static int tolua_Lua_cocos2dx_widget_CTextRich_setUserTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  int nTag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserTag'", NULL);
#endif
  {
   self->setUserTag(nTag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getId00
static int tolua_Lua_cocos2dx_widget_CTextRich_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getId();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setId of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setId00
static int tolua_Lua_cocos2dx_widget_CTextRich_setId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  const char* id = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setId'", NULL);
#endif
  {
   self->setId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDescription of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_getDescription00
static int tolua_Lua_cocos2dx_widget_CTextRich_getDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDescription'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getDescription();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setDescription00
static int tolua_Lua_cocos2dx_widget_CTextRich_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'", NULL);
#endif
  {
   self->setDescription(description);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_isEnabled00
static int tolua_Lua_cocos2dx_widget_CTextRich_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setEnabled00
static int tolua_Lua_cocos2dx_widget_CTextRich_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  bool bEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(bEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_isTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CTextRich_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setTouchEnabled00
static int tolua_Lua_cocos2dx_widget_CTextRich_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  bool bTouchEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(bTouchEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouchCascade of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_interruptTouchCascade00
static int tolua_Lua_cocos2dx_widget_CTextRich_interruptTouchCascade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouchCascade'", NULL);
#endif
  {
   self->interruptTouchCascade(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouchCascade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: interruptTouch of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_interruptTouch00
static int tolua_Lua_cocos2dx_widget_CTextRich_interruptTouch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* pTouch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  float fDuration = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'interruptTouch'", NULL);
#endif
  {
   self->interruptTouch(pTouch,fDuration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'interruptTouch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchInterrupted of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_isTouchInterrupted00
static int tolua_Lua_cocos2dx_widget_CTextRich_isTouchInterrupted00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchInterrupted'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchInterrupted();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchInterrupted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchBeganScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->setOnTouchBeganScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchMovedScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchMovedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchEndedScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->setOnTouchEndedScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOnTouchCancelledScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nHandler = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->setOnTouchCancelledScriptHandler(nHandler);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchBeganScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchBeganScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchBeganScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchBeganScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchBeganScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchBeganScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchMovedScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchMovedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchMovedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchMovedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchMovedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchMovedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchEndedScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchEndedScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchEndedScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchEndedScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchEndedScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchEndedScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeOnTouchCancelledScriptHandler of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchCancelledScriptHandler00
static int tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchCancelledScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CTextRich",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeOnTouchCancelledScriptHandler'", NULL);
#endif
  {
   self->removeOnTouchCancelledScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeOnTouchCancelledScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CWidget__ of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_get_CTextRich___CWidget__
static int tolua_get_CTextRich___CWidget__(lua_State* tolua_S)
{
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CWidget__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CWidget*>(self), "CWidget");
#else
   tolua_pushusertype(tolua_S,(void*)((CWidget*)self), "CWidget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CTextRichClickableProtocol__ of class  CTextRich */
#ifndef TOLUA_DISABLE_tolua_get_CTextRich___CTextRichClickableProtocol__
static int tolua_get_CTextRich___CTextRichClickableProtocol__(lua_State* tolua_S)
{
  CTextRich* self = (CTextRich*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CTextRichClickableProtocol__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CTextRichClickableProtocol*>(self), "CTextRichClickableProtocol");
#else
   tolua_pushusertype(tolua_S,(void*)((CTextRichClickableProtocol*)self), "CTextRichClickableProtocol");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Lua_cocos2dx_widget_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"eWidgetTouchNone",eWidgetTouchNone);
  tolua_constant(tolua_S,"eWidgetTouchTransient",eWidgetTouchTransient);
  tolua_constant(tolua_S,"eWidgetTouchSustained",eWidgetTouchSustained);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CWidgetWindow","CWidgetWindow","CCNodeRGBA",tolua_collect_CWidgetWindow);
  #else
  tolua_cclass(tolua_S,"CWidgetWindow","CWidgetWindow","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CWidgetWindow");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CWidgetWindow_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CWidgetWindow_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CWidgetWindow_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CWidgetWindow_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CWidgetWindow_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CWidgetWindow_create00);
   tolua_function(tolua_S,"getTouchPriority",tolua_Lua_cocos2dx_widget_CWidgetWindow_getTouchPriority00);
   tolua_function(tolua_S,"setTouchPriority",tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchPriority00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetWindow_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetWindow_setTouchEnabled00);
   tolua_function(tolua_S,"findWidgetById",tolua_Lua_cocos2dx_widget_CWidgetWindow_findWidgetById00);
   tolua_function(tolua_S,"isMultiTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetWindow_isMultiTouchEnabled00);
   tolua_function(tolua_S,"setMultiTouchEnabled",tolua_Lua_cocos2dx_widget_CWidgetWindow_setMultiTouchEnabled00);
   tolua_function(tolua_S,"setModalable",tolua_Lua_cocos2dx_widget_CWidgetWindow_setModalable00);
   tolua_function(tolua_S,"isModalable",tolua_Lua_cocos2dx_widget_CWidgetWindow_isModalable00);
   tolua_function(tolua_S,"setOnTouchMovedAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchMovedAfterLongClickScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchEndedAfterLongClickScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_setOnTouchCancelledAfterLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchMovedAfterLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchEndedAfterLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledAfterLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CWidgetWindow_removeOnTouchCancelledAfterLongClickScriptHandler00);
   tolua_variable(tolua_S,"__CCTouchDelegate__",tolua_get_CWidgetWindow___CCTouchDelegate__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CScale9Sprite","CScale9Sprite","CCNodeRGBA",tolua_collect_CScale9Sprite);
  #else
  tolua_cclass(tolua_S,"CScale9Sprite","CScale9Sprite","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CScale9Sprite");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CScale9Sprite_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CScale9Sprite_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CScale9Sprite_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CScale9Sprite_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CScale9Sprite_setContentSize00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CScale9Sprite_init00);
   tolua_function(tolua_S,"initWithBatchNode",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode00);
   tolua_function(tolua_S,"initWithBatchNode",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithBatchNode01);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScale9Sprite_create00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScale9Sprite_create01);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScale9Sprite_create02);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithFile03);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScale9Sprite_create03);
   tolua_function(tolua_S,"initWithSpriteFrame",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame00);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame00);
   tolua_function(tolua_S,"initWithSpriteFrame",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrame01);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrame01);
   tolua_function(tolua_S,"initWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName00);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName00);
   tolua_function(tolua_S,"initWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithSpriteFrameName01);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithSpriteFrameName01);
   tolua_function(tolua_S,"resizableSpriteWithCapInsets",tolua_Lua_cocos2dx_widget_CScale9Sprite_resizableSpriteWithCapInsets00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScale9Sprite_create04);
   tolua_function(tolua_S,"setTexture",tolua_Lua_cocos2dx_widget_CScale9Sprite_setTexture00);
   tolua_function(tolua_S,"initWithTexture",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture00);
   tolua_function(tolua_S,"initWithTexture",tolua_Lua_cocos2dx_widget_CScale9Sprite_initWithTexture01);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture00);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CScale9Sprite_createWithTexture01);
   tolua_function(tolua_S,"setOpacityModifyRGB",tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacityModifyRGB00);
   tolua_function(tolua_S,"isOpacityModifyRGB",tolua_Lua_cocos2dx_widget_CScale9Sprite_isOpacityModifyRGB00);
   tolua_function(tolua_S,"setOpacity",tolua_Lua_cocos2dx_widget_CScale9Sprite_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Lua_cocos2dx_widget_CScale9Sprite_getOpacity00);
   tolua_function(tolua_S,"setColor",tolua_Lua_cocos2dx_widget_CScale9Sprite_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Lua_cocos2dx_widget_CScale9Sprite_getColor00);
   tolua_function(tolua_S,"updateWithBatchNode",tolua_Lua_cocos2dx_widget_CScale9Sprite_updateWithBatchNode00);
   tolua_function(tolua_S,"setSpriteFrame",tolua_Lua_cocos2dx_widget_CScale9Sprite_setSpriteFrame00);
   tolua_function(tolua_S,"updateDisplayedOpacity",tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedOpacity00);
   tolua_function(tolua_S,"updateDisplayedColor",tolua_Lua_cocos2dx_widget_CScale9Sprite_updateDisplayedColor00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CControlView","CControlView","CCNodeRGBA",tolua_collect_CControlView);
  #else
  tolua_cclass(tolua_S,"CControlView","CControlView","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CControlView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CControlView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CControlView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CControlView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CControlView_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CControlView_init00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CControlView_initWithFile00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CControlView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CControlView_create01);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CControlView_setContentSize00);
   tolua_function(tolua_S,"setRadius",tolua_Lua_cocos2dx_widget_CControlView_setRadius00);
   tolua_function(tolua_S,"getRadius",tolua_Lua_cocos2dx_widget_CControlView_getRadius00);
   tolua_function(tolua_S,"setRelocateWithAnimation",tolua_Lua_cocos2dx_widget_CControlView_setRelocateWithAnimation00);
   tolua_function(tolua_S,"isRelocateWithAnimation",tolua_Lua_cocos2dx_widget_CControlView_isRelocateWithAnimation00);
   tolua_function(tolua_S,"setBaseBoardImage",tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardImage00);
   tolua_function(tolua_S,"setJoystickImage",tolua_Lua_cocos2dx_widget_CControlView_setJoystickImage00);
   tolua_function(tolua_S,"setBaseBoardSpriteFrame",tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrame00);
   tolua_function(tolua_S,"setJoystickSpriteFrame",tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrame00);
   tolua_function(tolua_S,"setBaseBoardTexture",tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardTexture00);
   tolua_function(tolua_S,"setJoystickTexture",tolua_Lua_cocos2dx_widget_CControlView_setJoystickTexture00);
   tolua_function(tolua_S,"setBaseBoardSpriteFrameName",tolua_Lua_cocos2dx_widget_CControlView_setBaseBoardSpriteFrameName00);
   tolua_function(tolua_S,"setJoystickSpriteFrameName",tolua_Lua_cocos2dx_widget_CControlView_setJoystickSpriteFrameName00);
   tolua_function(tolua_S,"setOnControlScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_setOnControlScriptHandler00);
   tolua_function(tolua_S,"removeOnControlScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_removeOnControlScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CControlView_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CControlView_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CControlView_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CControlView_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CControlView_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CControlView_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CControlView_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CControlView_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CControlView_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CControlView_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CControlView_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CControlView_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CControlView_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CControlView_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CControlView___CWidget__,NULL);
   tolua_variable(tolua_S,"__CControlableProtocol__",tolua_get_CControlView___CControlableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLayout","CLayout","CCNodeRGBA",tolua_collect_CLayout);
  #else
  tolua_cclass(tolua_S,"CLayout","CLayout","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLayout");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLayout_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLayout_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLayout_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLayout_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CLayout_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLayout_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLayout_create01);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CLayout_setContentSize00);
   tolua_function(tolua_S,"findWidgetById",tolua_Lua_cocos2dx_widget_CLayout_findWidgetById00);
   tolua_function(tolua_S,"setBackgroundImage",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundTexture",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundTexture00);
   tolua_function(tolua_S,"setBackgroundSpriteFrame",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrame00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameName",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundSpriteFrameName00);
   tolua_function(tolua_S,"getBackgroundImage",tolua_Lua_cocos2dx_widget_CLayout_getBackgroundImage00);
   tolua_function(tolua_S,"removeBackgroundImage",tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundColor",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundColor00);
   tolua_function(tolua_S,"removeBackgroundColor",tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundColor00);
   tolua_function(tolua_S,"setBackgroundGradient",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundGradient00);
   tolua_function(tolua_S,"removeBackgroundGradient",tolua_Lua_cocos2dx_widget_CLayout_removeBackgroundGradient00);
   tolua_function(tolua_S,"setBackgroundOpacity",tolua_Lua_cocos2dx_widget_CLayout_setBackgroundOpacity00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CLayout_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CLayout_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CLayout_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CLayout_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CLayout_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CLayout_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CLayout_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CLayout_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CLayout_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CLayout_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CLayout_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CLayout_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CLayout_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLayout_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLayout___CWidget__,NULL);
   tolua_variable(tolua_S,"__CLayoutableProtocol__",tolua_get_CLayout___CLayoutableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CColorView","CColorView","CCNodeRGBA",tolua_collect_CColorView);
  #else
  tolua_cclass(tolua_S,"CColorView","CColorView","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CColorView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CColorView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CColorView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CColorView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CColorView_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CColorView_init00);
   tolua_function(tolua_S,"initWithColor",tolua_Lua_cocos2dx_widget_CColorView_initWithColor00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CColorView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CColorView_create01);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CColorView_setContentSize00);
   tolua_function(tolua_S,"setColor",tolua_Lua_cocos2dx_widget_CColorView_setColor00);
   tolua_function(tolua_S,"setOpacity",tolua_Lua_cocos2dx_widget_CColorView_setOpacity00);
   tolua_function(tolua_S,"setCascadeOpacityEnabled",tolua_Lua_cocos2dx_widget_CColorView_setCascadeOpacityEnabled00);
   tolua_function(tolua_S,"setCascadeColorEnabled",tolua_Lua_cocos2dx_widget_CColorView_setCascadeColorEnabled00);
   tolua_function(tolua_S,"getOpacity",tolua_Lua_cocos2dx_widget_CColorView_getOpacity00);
   tolua_function(tolua_S,"getDisplayedOpacity",tolua_Lua_cocos2dx_widget_CColorView_getDisplayedOpacity00);
   tolua_function(tolua_S,"getColor",tolua_Lua_cocos2dx_widget_CColorView_getColor00);
   tolua_function(tolua_S,"getDisplayedColor",tolua_Lua_cocos2dx_widget_CColorView_getDisplayedColor00);
   tolua_function(tolua_S,"isCascadeColorEnabled",tolua_Lua_cocos2dx_widget_CColorView_isCascadeColorEnabled00);
   tolua_function(tolua_S,"isCascadeOpacityEnabled",tolua_Lua_cocos2dx_widget_CColorView_isCascadeOpacityEnabled00);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CColorView_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CColorView_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CColorView_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CColorView_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CColorView_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CColorView_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CColorView_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CColorView_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CColorView_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CColorView_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CColorView_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CColorView_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CColorView_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CColorView_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CColorView___CWidget__,NULL);
   tolua_variable(tolua_S,"__CCBlendProtocol__",tolua_get_CColorView___CCBlendProtocol__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CColorView___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CColorView___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGradientView","CGradientView","CColorView",tolua_collect_CGradientView);
  #else
  tolua_cclass(tolua_S,"CGradientView","CGradientView","CColorView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGradientView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGradientView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGradientView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGradientView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGradientView_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CGradientView_init00);
   tolua_function(tolua_S,"initWithColor",tolua_Lua_cocos2dx_widget_CGradientView_initWithColor00);
   tolua_function(tolua_S,"initWithColor",tolua_Lua_cocos2dx_widget_CGradientView_initWithColor01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGradientView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGradientView_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGradientView_create02);
   tolua_function(tolua_S,"setStartColor",tolua_Lua_cocos2dx_widget_CGradientView_setStartColor00);
   tolua_function(tolua_S,"getStartColor",tolua_Lua_cocos2dx_widget_CGradientView_getStartColor00);
   tolua_function(tolua_S,"setEndColor",tolua_Lua_cocos2dx_widget_CGradientView_setEndColor00);
   tolua_function(tolua_S,"getEndColor",tolua_Lua_cocos2dx_widget_CGradientView_getEndColor00);
   tolua_function(tolua_S,"setStartOpacity",tolua_Lua_cocos2dx_widget_CGradientView_setStartOpacity00);
   tolua_function(tolua_S,"getStartOpacity",tolua_Lua_cocos2dx_widget_CGradientView_getStartOpacity00);
   tolua_function(tolua_S,"setEndOpacity",tolua_Lua_cocos2dx_widget_CGradientView_setEndOpacity00);
   tolua_function(tolua_S,"getEndOpacity",tolua_Lua_cocos2dx_widget_CGradientView_getEndOpacity00);
   tolua_function(tolua_S,"setVector",tolua_Lua_cocos2dx_widget_CGradientView_setVector00);
   tolua_function(tolua_S,"getVector",tolua_Lua_cocos2dx_widget_CGradientView_getVector00);
   tolua_function(tolua_S,"setCompressedInterpolation",tolua_Lua_cocos2dx_widget_CGradientView_setCompressedInterpolation00);
   tolua_function(tolua_S,"isCompressedInterpolation",tolua_Lua_cocos2dx_widget_CGradientView_isCompressedInterpolation00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eScrollViewDirectionHorizontal",eScrollViewDirectionHorizontal);
  tolua_constant(tolua_S,"eScrollViewDirectionVertical",eScrollViewDirectionVertical);
  tolua_constant(tolua_S,"eScrollViewDirectionBoth",eScrollViewDirectionBoth);
  tolua_cclass(tolua_S,"CScrollViewContainer","CScrollViewContainer","CLayout",NULL);
  tolua_beginmodule(tolua_S,"CScrollViewContainer");
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CScrollViewContainer_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CScrollView","CScrollView","CLayout",tolua_collect_CScrollView);
  #else
  tolua_cclass(tolua_S,"CScrollView","CScrollView","CLayout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CScrollView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CScrollView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CScrollView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CScrollView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CScrollView_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CScrollView_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CScrollView_create00);
   tolua_function(tolua_S,"initWithSize",tolua_Lua_cocos2dx_widget_CScrollView_initWithSize00);
   tolua_function(tolua_S,"setContainerSize",tolua_Lua_cocos2dx_widget_CScrollView_setContainerSize00);
   tolua_function(tolua_S,"getContainerSize",tolua_Lua_cocos2dx_widget_CScrollView_getContainerSize00);
   tolua_function(tolua_S,"getDirection",tolua_Lua_cocos2dx_widget_CScrollView_getDirection00);
   tolua_function(tolua_S,"setDirection",tolua_Lua_cocos2dx_widget_CScrollView_setDirection00);
   tolua_function(tolua_S,"getContainer",tolua_Lua_cocos2dx_widget_CScrollView_getContainer00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CScrollView_setContentSize00);
   tolua_function(tolua_S,"getContentOffset",tolua_Lua_cocos2dx_widget_CScrollView_getContentOffset00);
   tolua_function(tolua_S,"setBounceable",tolua_Lua_cocos2dx_widget_CScrollView_setBounceable00);
   tolua_function(tolua_S,"isBounceable",tolua_Lua_cocos2dx_widget_CScrollView_isBounceable00);
   tolua_function(tolua_S,"setDeaccelerateable",tolua_Lua_cocos2dx_widget_CScrollView_setDeaccelerateable00);
   tolua_function(tolua_S,"isDeaccelerateable",tolua_Lua_cocos2dx_widget_CScrollView_isDeaccelerateable00);
   tolua_function(tolua_S,"setDragable",tolua_Lua_cocos2dx_widget_CScrollView_setDragable00);
   tolua_function(tolua_S,"isDragable",tolua_Lua_cocos2dx_widget_CScrollView_isDragable00);
   tolua_function(tolua_S,"isTouchMoved",tolua_Lua_cocos2dx_widget_CScrollView_isTouchMoved00);
   tolua_function(tolua_S,"stopContainerAnimation",tolua_Lua_cocos2dx_widget_CScrollView_stopContainerAnimation00);
   tolua_function(tolua_S,"getMaxOffset",tolua_Lua_cocos2dx_widget_CScrollView_getMaxOffset00);
   tolua_function(tolua_S,"getMinOffset",tolua_Lua_cocos2dx_widget_CScrollView_getMinOffset00);
   tolua_function(tolua_S,"setContentOffsetToTop",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTop00);
   tolua_function(tolua_S,"setContentOffsetToTopInDuration",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopInDuration00);
   tolua_function(tolua_S,"setContentOffsetToTopEaseIn",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToTopEaseIn00);
   tolua_function(tolua_S,"setContentOffsetToBottom",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToBottom00);
   tolua_function(tolua_S,"setContentOffsetToRight",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToRight00);
   tolua_function(tolua_S,"setContentOffsetToLeft",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetToLeft00);
   tolua_function(tolua_S,"relocateContainer",tolua_Lua_cocos2dx_widget_CScrollView_relocateContainer00);
   tolua_function(tolua_S,"setContentOffset",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffset00);
   tolua_function(tolua_S,"setContentOffsetInDuration",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetInDuration00);
   tolua_function(tolua_S,"setContentOffsetEaseIn",tolua_Lua_cocos2dx_widget_CScrollView_setContentOffsetEaseIn00);
   tolua_function(tolua_S,"setOnScrollingScriptHandler",tolua_Lua_cocos2dx_widget_CScrollView_setOnScrollingScriptHandler00);
   tolua_function(tolua_S,"removeOnScrollingScriptHandler",tolua_Lua_cocos2dx_widget_CScrollView_removeOnScrollingScriptHandler00);
   tolua_variable(tolua_S,"__CScrollableProtocol__",tolua_get_CScrollView___CScrollableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTableViewCell","CTableViewCell","CLayout",tolua_collect_CTableViewCell);
  #else
  tolua_cclass(tolua_S,"CTableViewCell","CTableViewCell","CLayout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTableViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CTableViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CTableViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CTableViewCell_delete00);
   tolua_function(tolua_S,"getIdx",tolua_Lua_cocos2dx_widget_CTableViewCell_getIdx00);
   tolua_function(tolua_S,"setIdx",tolua_Lua_cocos2dx_widget_CTableViewCell_setIdx00);
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CTableViewCell_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTableView","CTableView","CScrollView",tolua_collect_CTableView);
  #else
  tolua_cclass(tolua_S,"CTableView","CTableView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTableView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CTableView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CTableView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CTableView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CTableView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CTableView_create00);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CTableView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CTableView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CTableView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CTableView_getSizeOfCell00);
   tolua_function(tolua_S,"isAutoRelocate",tolua_Lua_cocos2dx_widget_CTableView_isAutoRelocate00);
   tolua_function(tolua_S,"setAutoRelocate",tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocate00);
   tolua_function(tolua_S,"getAutoRelocateSpeed",tolua_Lua_cocos2dx_widget_CTableView_getAutoRelocateSpeed00);
   tolua_function(tolua_S,"setAutoRelocateSpeed",tolua_Lua_cocos2dx_widget_CTableView_setAutoRelocateSpeed00);
   tolua_function(tolua_S,"getCells",tolua_Lua_cocos2dx_widget_CTableView_getCells00);
   tolua_function(tolua_S,"cellAtIndex",tolua_Lua_cocos2dx_widget_CTableView_cellAtIndex00);
   tolua_function(tolua_S,"dequeueCell",tolua_Lua_cocos2dx_widget_CTableView_dequeueCell00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CTableView_reloadData00);
   tolua_function(tolua_S,"setDataSourceAdapterScriptHandler",tolua_Lua_cocos2dx_widget_CTableView_setDataSourceAdapterScriptHandler00);
   tolua_function(tolua_S,"removeDataSourceAdapterScriptHandler",tolua_Lua_cocos2dx_widget_CTableView_removeDataSourceAdapterScriptHandler00);
   tolua_variable(tolua_S,"__CDataSourceAdapterProtocol__",tolua_get_CTableView___CDataSourceAdapterProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageViewPage","CGridPageViewPage","CTableViewCell",tolua_collect_CGridPageViewPage);
  #else
  tolua_cclass(tolua_S,"CGridPageViewPage","CGridPageViewPage","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageViewPage");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageViewPage_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageViewPage_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageViewCell","CGridPageViewCell","CTableViewCell",tolua_collect_CGridPageViewCell);
  #else
  tolua_cclass(tolua_S,"CGridPageViewCell","CGridPageViewCell","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageViewCell_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridPageView","CGridPageView","CTableView",tolua_collect_CGridPageView);
  #else
  tolua_cclass(tolua_S,"CGridPageView","CGridPageView","CTableView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridPageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridPageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridPageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridPageView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridPageView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridPageView_create00);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CGridPageView_getSizeOfCell00);
   tolua_function(tolua_S,"setRows",tolua_Lua_cocos2dx_widget_CGridPageView_setRows00);
   tolua_function(tolua_S,"getRows",tolua_Lua_cocos2dx_widget_CGridPageView_getRows00);
   tolua_function(tolua_S,"setColumns",tolua_Lua_cocos2dx_widget_CGridPageView_setColumns00);
   tolua_function(tolua_S,"getColumns",tolua_Lua_cocos2dx_widget_CGridPageView_getColumns00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CGridPageView_reloadData00);
   tolua_function(tolua_S,"setOnPageChangedScriptHandler",tolua_Lua_cocos2dx_widget_CGridPageView_setOnPageChangedScriptHandler00);
   tolua_function(tolua_S,"removeOnPageChangedScriptHandler",tolua_Lua_cocos2dx_widget_CGridPageView_removeOnPageChangedScriptHandler00);
   tolua_variable(tolua_S,"__CPageChangeableProtocol__",tolua_get_CGridPageView___CPageChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPageViewCell","CPageViewCell","CTableViewCell",tolua_collect_CPageViewCell);
  #else
  tolua_cclass(tolua_S,"CPageViewCell","CPageViewCell","CTableViewCell",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPageViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPageViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPageViewCell_new00_local);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CPageView","CPageView","CTableView",tolua_collect_CPageView);
  #else
  tolua_cclass(tolua_S,"CPageView","CPageView","CTableView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CPageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CPageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CPageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CPageView_new00_local);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CPageView_create00);
   tolua_function(tolua_S,"setOnPageChangedScriptHandler",tolua_Lua_cocos2dx_widget_CPageView_setOnPageChangedScriptHandler00);
   tolua_function(tolua_S,"removeOnPageChangedScriptHandler",tolua_Lua_cocos2dx_widget_CPageView_removeOnPageChangedScriptHandler00);
   tolua_variable(tolua_S,"__CPageChangeableProtocol__",tolua_get_CPageView___CPageChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridViewCell","CGridViewCell","CLayout",tolua_collect_CGridViewCell);
  #else
  tolua_cclass(tolua_S,"CGridViewCell","CGridViewCell","CLayout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridViewCell");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridViewCell_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridViewCell_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridViewCell_delete00);
   tolua_function(tolua_S,"getIdx",tolua_Lua_cocos2dx_widget_CGridViewCell_getIdx00);
   tolua_function(tolua_S,"setIdx",tolua_Lua_cocos2dx_widget_CGridViewCell_setIdx00);
   tolua_function(tolua_S,"getRow",tolua_Lua_cocos2dx_widget_CGridViewCell_getRow00);
   tolua_function(tolua_S,"setRow",tolua_Lua_cocos2dx_widget_CGridViewCell_setRow00);
   tolua_function(tolua_S,"reset",tolua_Lua_cocos2dx_widget_CGridViewCell_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CGridView","CGridView","CScrollView",tolua_collect_CGridView);
  #else
  tolua_cclass(tolua_S,"CGridView","CGridView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CGridView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CGridView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CGridView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CGridView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CGridView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CGridView_create00);
   tolua_function(tolua_S,"setCountOfCell",tolua_Lua_cocos2dx_widget_CGridView_setCountOfCell00);
   tolua_function(tolua_S,"getCountOfCell",tolua_Lua_cocos2dx_widget_CGridView_getCountOfCell00);
   tolua_function(tolua_S,"setSizeOfCell",tolua_Lua_cocos2dx_widget_CGridView_setSizeOfCell00);
   tolua_function(tolua_S,"getSizeOfCell",tolua_Lua_cocos2dx_widget_CGridView_getSizeOfCell00);
   tolua_function(tolua_S,"setColumns",tolua_Lua_cocos2dx_widget_CGridView_setColumns00);
   tolua_function(tolua_S,"getColumns",tolua_Lua_cocos2dx_widget_CGridView_getColumns00);
   tolua_function(tolua_S,"getRows",tolua_Lua_cocos2dx_widget_CGridView_getRows00);
   tolua_function(tolua_S,"isAutoRelocate",tolua_Lua_cocos2dx_widget_CGridView_isAutoRelocate00);
   tolua_function(tolua_S,"setAutoRelocate",tolua_Lua_cocos2dx_widget_CGridView_setAutoRelocate00);
   tolua_function(tolua_S,"getCells",tolua_Lua_cocos2dx_widget_CGridView_getCells00);
   tolua_function(tolua_S,"cellAtIndex",tolua_Lua_cocos2dx_widget_CGridView_cellAtIndex00);
   tolua_function(tolua_S,"dequeueCell",tolua_Lua_cocos2dx_widget_CGridView_dequeueCell00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CGridView_reloadData00);
   tolua_function(tolua_S,"setDataSourceAdapterScriptHandler",tolua_Lua_cocos2dx_widget_CGridView_setDataSourceAdapterScriptHandler00);
   tolua_function(tolua_S,"removeDataSourceAdapterScriptHandler",tolua_Lua_cocos2dx_widget_CGridView_removeDataSourceAdapterScriptHandler00);
   tolua_variable(tolua_S,"__CDataSourceAdapterProtocol__",tolua_get_CGridView___CDataSourceAdapterProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CListView","CListView","CScrollView",tolua_collect_CListView);
  #else
  tolua_cclass(tolua_S,"CListView","CListView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CListView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CListView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CListView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CListView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CListView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CListView_create00);
   tolua_function(tolua_S,"insertNodeAtLast",tolua_Lua_cocos2dx_widget_CListView_insertNodeAtLast00);
   tolua_function(tolua_S,"insertNodeAtFront",tolua_Lua_cocos2dx_widget_CListView_insertNodeAtFront00);
   tolua_function(tolua_S,"insertNode",tolua_Lua_cocos2dx_widget_CListView_insertNode00);
   tolua_function(tolua_S,"insertNode",tolua_Lua_cocos2dx_widget_CListView_insertNode01);
   tolua_function(tolua_S,"removeNodeAtIndex",tolua_Lua_cocos2dx_widget_CListView_removeNodeAtIndex00);
   tolua_function(tolua_S,"removeNode",tolua_Lua_cocos2dx_widget_CListView_removeNode00);
   tolua_function(tolua_S,"removeFrontNode",tolua_Lua_cocos2dx_widget_CListView_removeFrontNode00);
   tolua_function(tolua_S,"removeLastNode",tolua_Lua_cocos2dx_widget_CListView_removeLastNode00);
   tolua_function(tolua_S,"removeAllNodes",tolua_Lua_cocos2dx_widget_CListView_removeAllNodes00);
   tolua_function(tolua_S,"getNodes",tolua_Lua_cocos2dx_widget_CListView_getNodes00);
   tolua_function(tolua_S,"getNodeAtIndex",tolua_Lua_cocos2dx_widget_CListView_getNodeAtIndex00);
   tolua_function(tolua_S,"getNodeCount",tolua_Lua_cocos2dx_widget_CListView_getNodeCount00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CListView_reloadData00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CExpandableNode","CExpandableNode","CLayout",tolua_collect_CExpandableNode);
  #else
  tolua_cclass(tolua_S,"CExpandableNode","CExpandableNode","CLayout",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CExpandableNode");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CExpandableNode_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CExpandableNode_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CExpandableNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CExpandableNode_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CExpandableNode_create00);
   tolua_function(tolua_S,"insertItemNodeAtLast",tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtLast00);
   tolua_function(tolua_S,"insertItemNodeAtFront",tolua_Lua_cocos2dx_widget_CExpandableNode_insertItemNodeAtFront00);
   tolua_function(tolua_S,"removeItemNode",tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNode00);
   tolua_function(tolua_S,"removeItemNodeAtIndex",tolua_Lua_cocos2dx_widget_CExpandableNode_removeItemNodeAtIndex00);
   tolua_function(tolua_S,"removeAllItemNodes",tolua_Lua_cocos2dx_widget_CExpandableNode_removeAllItemNodes00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CExpandableListView","CExpandableListView","CScrollView",tolua_collect_CExpandableListView);
  #else
  tolua_cclass(tolua_S,"CExpandableListView","CExpandableListView","CScrollView",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CExpandableListView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CExpandableListView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CExpandableListView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CExpandableListView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CExpandableListView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CExpandableListView_create00);
   tolua_function(tolua_S,"expand",tolua_Lua_cocos2dx_widget_CExpandableListView_expand00);
   tolua_function(tolua_S,"collapse",tolua_Lua_cocos2dx_widget_CExpandableListView_collapse00);
   tolua_function(tolua_S,"insertExpandableNodeAtLast",tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtLast00);
   tolua_function(tolua_S,"insertExpandableNodeAtFront",tolua_Lua_cocos2dx_widget_CExpandableListView_insertExpandableNodeAtFront00);
   tolua_function(tolua_S,"removeExpandableNode",tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNode00);
   tolua_function(tolua_S,"removeExpandableNodeAtIndex",tolua_Lua_cocos2dx_widget_CExpandableListView_removeExpandableNodeAtIndex00);
   tolua_function(tolua_S,"removeLastExpandableNode",tolua_Lua_cocos2dx_widget_CExpandableListView_removeLastExpandableNode00);
   tolua_function(tolua_S,"removeFrontExpandableNode",tolua_Lua_cocos2dx_widget_CExpandableListView_removeFrontExpandableNode00);
   tolua_function(tolua_S,"removeAllExpandableNodes",tolua_Lua_cocos2dx_widget_CExpandableListView_removeAllExpandableNodes00);
   tolua_function(tolua_S,"getExpandableNodes",tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodes00);
   tolua_function(tolua_S,"getExpandableNodeCount",tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeCount00);
   tolua_function(tolua_S,"getExpandableNodeAtIndex",tolua_Lua_cocos2dx_widget_CExpandableListView_getExpandableNodeAtIndex00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CExpandableListView_reloadData00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CButton","CButton","CCNodeRGBA",tolua_collect_CButton);
  #else
  tolua_cclass(tolua_S,"CButton","CButton","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CButton");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CButton_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CButton_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CButton_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CButton_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CButton_init00);
   tolua_function(tolua_S,"initWith9Sprite",tolua_Lua_cocos2dx_widget_CButton_initWith9Sprite00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CButton_initWithFile00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CButton_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CButton_create01);
   tolua_function(tolua_S,"createWith9Sprite",tolua_Lua_cocos2dx_widget_CButton_createWith9Sprite00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CButton_setContentSize00);
   tolua_function(tolua_S,"setLabelOffset",tolua_Lua_cocos2dx_widget_CButton_setLabelOffset00);
   tolua_function(tolua_S,"setText",tolua_Lua_cocos2dx_widget_CButton_setText00);
   tolua_function(tolua_S,"getText",tolua_Lua_cocos2dx_widget_CButton_getText00);
   tolua_function(tolua_S,"setTextFontName",tolua_Lua_cocos2dx_widget_CButton_setTextFontName00);
   tolua_function(tolua_S,"getTextFontName",tolua_Lua_cocos2dx_widget_CButton_getTextFontName00);
   tolua_function(tolua_S,"setTextFontSize",tolua_Lua_cocos2dx_widget_CButton_setTextFontSize00);
   tolua_function(tolua_S,"getTextFontSize",tolua_Lua_cocos2dx_widget_CButton_getTextFontSize00);
   tolua_function(tolua_S,"setTextColor",tolua_Lua_cocos2dx_widget_CButton_setTextColor00);
   tolua_function(tolua_S,"getTextColor",tolua_Lua_cocos2dx_widget_CButton_getTextColor00);
   tolua_function(tolua_S,"initText",tolua_Lua_cocos2dx_widget_CButton_initText00);
   tolua_function(tolua_S,"getLabel",tolua_Lua_cocos2dx_widget_CButton_getLabel00);
   tolua_function(tolua_S,"isScale9Enabled",tolua_Lua_cocos2dx_widget_CButton_isScale9Enabled00);
   tolua_function(tolua_S,"setScale9Enabled",tolua_Lua_cocos2dx_widget_CButton_setScale9Enabled00);
   tolua_function(tolua_S,"setCascadeTextSizeEnabled",tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled00);
   tolua_function(tolua_S,"setCascadeTextSizeEnabled",tolua_Lua_cocos2dx_widget_CButton_setCascadeTextSizeEnabled01);
   tolua_function(tolua_S,"setNormalImage",tolua_Lua_cocos2dx_widget_CButton_setNormalImage00);
   tolua_function(tolua_S,"setSelectedImage",tolua_Lua_cocos2dx_widget_CButton_setSelectedImage00);
   tolua_function(tolua_S,"setDisabledImage",tolua_Lua_cocos2dx_widget_CButton_setDisabledImage00);
   tolua_function(tolua_S,"setNormalTexture",tolua_Lua_cocos2dx_widget_CButton_setNormalTexture00);
   tolua_function(tolua_S,"setSelectedTexture",tolua_Lua_cocos2dx_widget_CButton_setSelectedTexture00);
   tolua_function(tolua_S,"setDisabledTexture",tolua_Lua_cocos2dx_widget_CButton_setDisabledTexture00);
   tolua_function(tolua_S,"setNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrameName00);
   tolua_function(tolua_S,"setSelectedSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledSpriteFrameName",tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrameName00);
   tolua_function(tolua_S,"setNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setNormalSpriteFrame00);
   tolua_function(tolua_S,"setSelectedSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setSelectedSpriteFrame00);
   tolua_function(tolua_S,"setDisabledSpriteFrame",tolua_Lua_cocos2dx_widget_CButton_setDisabledSpriteFrame00);
   tolua_function(tolua_S,"getNormalImage",tolua_Lua_cocos2dx_widget_CButton_getNormalImage00);
   tolua_function(tolua_S,"getSelectedImage",tolua_Lua_cocos2dx_widget_CButton_getSelectedImage00);
   tolua_function(tolua_S,"getDisabledImage",tolua_Lua_cocos2dx_widget_CButton_getDisabledImage00);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CButton_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CButton_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CButton_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CButton_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CButton_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CButton_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CButton_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CButton_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CButton_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CButton_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CButton_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CButton_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CButton_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CButton_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CButton_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CButton___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CButton___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CButton___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CToggleView","CToggleView","CButton",tolua_collect_CToggleView);
  #else
  tolua_cclass(tolua_S,"CToggleView","CToggleView","CButton",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CToggleView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CToggleView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CToggleView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CToggleView_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CToggleView_delete00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CToggleView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CToggleView_create01);
   tolua_function(tolua_S,"createWith9Sprite",tolua_Lua_cocos2dx_widget_CToggleView_createWith9Sprite00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CToggleView_setEnabled00);
   tolua_function(tolua_S,"setChecked",tolua_Lua_cocos2dx_widget_CToggleView_setChecked00);
   tolua_function(tolua_S,"isChecked",tolua_Lua_cocos2dx_widget_CToggleView_isChecked00);
   tolua_function(tolua_S,"setExclusion",tolua_Lua_cocos2dx_widget_CToggleView_setExclusion00);
   tolua_function(tolua_S,"getExclusion",tolua_Lua_cocos2dx_widget_CToggleView_getExclusion00);
   tolua_function(tolua_S,"setOnCheckScriptHandler",tolua_Lua_cocos2dx_widget_CToggleView_setOnCheckScriptHandler00);
   tolua_function(tolua_S,"removeCheckScriptHandler",tolua_Lua_cocos2dx_widget_CToggleView_removeCheckScriptHandler00);
   tolua_variable(tolua_S,"__CCheckableProtocol__",tolua_get_CToggleView___CCheckableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCheckBox","CCheckBox","CCNodeRGBA",tolua_collect_CCheckBox);
  #else
  tolua_cclass(tolua_S,"CCheckBox","CCheckBox","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCheckBox");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CCheckBox_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CCheckBox_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CCheckBox_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CCheckBox_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CCheckBox_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CCheckBox_create00);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CCheckBox_setContentSize00);
   tolua_function(tolua_S,"setNormalImage",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalImage00);
   tolua_function(tolua_S,"setNormalPressImage",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressImage00);
   tolua_function(tolua_S,"setCheckedImage",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedImage00);
   tolua_function(tolua_S,"setCheckedPressImage",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressImage00);
   tolua_function(tolua_S,"setDisabledNormalImage",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalImage00);
   tolua_function(tolua_S,"setDisabledCheckedImage",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedImage00);
   tolua_function(tolua_S,"setNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrame00);
   tolua_function(tolua_S,"setNormalPressSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrame00);
   tolua_function(tolua_S,"setCheckedSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrame00);
   tolua_function(tolua_S,"setCheckedPressSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrame00);
   tolua_function(tolua_S,"setDisabledNormalSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrame00);
   tolua_function(tolua_S,"setDisabledCheckedSpriteFrame",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrame00);
   tolua_function(tolua_S,"setNormalTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalTexture00);
   tolua_function(tolua_S,"setNormalPressTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressTexture00);
   tolua_function(tolua_S,"setCheckedTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedTexture00);
   tolua_function(tolua_S,"setCheckedPressTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressTexture00);
   tolua_function(tolua_S,"setDisabledNormalTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalTexture00);
   tolua_function(tolua_S,"setDisabledCheckedTexture",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedTexture00);
   tolua_function(tolua_S,"setNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalSpriteFrameName00);
   tolua_function(tolua_S,"setNormalPressSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setNormalPressSpriteFrameName00);
   tolua_function(tolua_S,"setCheckedSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedSpriteFrameName00);
   tolua_function(tolua_S,"setCheckedPressSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setCheckedPressSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledNormalSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledNormalSpriteFrameName00);
   tolua_function(tolua_S,"setDisabledCheckedSpriteFrameName",tolua_Lua_cocos2dx_widget_CCheckBox_setDisabledCheckedSpriteFrameName00);
   tolua_function(tolua_S,"setChecked",tolua_Lua_cocos2dx_widget_CCheckBox_setChecked00);
   tolua_function(tolua_S,"isChecked",tolua_Lua_cocos2dx_widget_CCheckBox_isChecked00);
   tolua_function(tolua_S,"setExclusion",tolua_Lua_cocos2dx_widget_CCheckBox_setExclusion00);
   tolua_function(tolua_S,"getExclusion",tolua_Lua_cocos2dx_widget_CCheckBox_getExclusion00);
   tolua_function(tolua_S,"setOnCheckScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnCheckScriptHandler00);
   tolua_function(tolua_S,"removeCheckScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeCheckScriptHandler00);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CCheckBox_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CCheckBox_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CCheckBox_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CCheckBox_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CCheckBox_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CCheckBox_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CCheckBox_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CCheckBox_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CCheckBox_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CCheckBox_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CCheckBox_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CCheckBox_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CCheckBox_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CCheckBox___CWidget__,NULL);
   tolua_variable(tolua_S,"__CCheckableProtocol__",tolua_get_CCheckBox___CCheckableProtocol__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CCheckBox___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CCheckBox___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CImageView","CImageView","CCSprite",tolua_collect_CImageView);
  #else
  tolua_cclass(tolua_S,"CImageView","CImageView","CCSprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CImageView");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CImageView_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CImageView_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CImageView_new00_local);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CImageView_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageView_create02);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageView_createWithTexture00);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageView_createWithTexture01);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrame00);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageView_createWithSpriteFrameName00);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CImageView_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CImageView_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CImageView_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CImageView_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CImageView_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CImageView_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CImageView_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CImageView_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CImageView_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CImageView_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CImageView_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CImageView_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CImageView_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CImageView_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CImageView___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CImageView___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CImageView___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CImageViewScale9","CImageViewScale9","CScale9Sprite",tolua_collect_CImageViewScale9);
  #else
  tolua_cclass(tolua_S,"CImageViewScale9","CImageViewScale9","CScale9Sprite",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CImageViewScale9");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CImageViewScale9_new00_local);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CImageViewScale9_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create03);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create04);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame00);
   tolua_function(tolua_S,"createWithSpriteFrame",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrame01);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName00);
   tolua_function(tolua_S,"createWithSpriteFrameName",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithSpriteFrameName01);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture00);
   tolua_function(tolua_S,"createWithTexture",tolua_Lua_cocos2dx_widget_CImageViewScale9_createWithTexture01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CImageViewScale9_create05);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CImageViewScale9_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CImageViewScale9_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CImageViewScale9_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CImageViewScale9_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CImageViewScale9_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CImageViewScale9_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CImageViewScale9_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CImageViewScale9_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CImageViewScale9_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CImageViewScale9_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CImageViewScale9_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CImageViewScale9_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CImageViewScale9___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CImageViewScale9___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CImageViewScale9___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabel","CLabel","CCLabelTTF",tolua_collect_CLabel);
  #else
  tolua_cclass(tolua_S,"CLabel","CLabel","CCLabelTTF",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabel");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabel_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabel_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabel_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CLabel_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabel_create03);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CLabel_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CLabel_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CLabel_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CLabel_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CLabel_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CLabel_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CLabel_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CLabel_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CLabel_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CLabel_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CLabel_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CLabel_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CLabel_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabel_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabel___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabel___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabel___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabelAtlas","CLabelAtlas","CCLabelAtlas",tolua_collect_CLabelAtlas);
  #else
  tolua_cclass(tolua_S,"CLabelAtlas","CLabelAtlas","CCLabelAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabelAtlas");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabelAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabelAtlas_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CLabelAtlas_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelAtlas_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelAtlas_create01);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CLabelAtlas_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CLabelAtlas_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CLabelAtlas_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CLabelAtlas_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CLabelAtlas_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CLabelAtlas_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CLabelAtlas_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CLabelAtlas_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CLabelAtlas_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CLabelAtlas_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CLabelAtlas_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabelAtlas_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabelAtlas___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabelAtlas___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabelAtlas___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CLabelBMFont","CLabelBMFont","CCLabelBMFont",tolua_collect_CLabelBMFont);
  #else
  tolua_cclass(tolua_S,"CLabelBMFont","CLabelBMFont","CCLabelBMFont",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CLabelBMFont");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CLabelBMFont_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CLabelBMFont_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CLabelBMFont_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create01);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create02);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create03);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CLabelBMFont_create04);
   tolua_function(tolua_S,"setOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnClickScriptHandler00);
   tolua_function(tolua_S,"removeOnClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnClickScriptHandler00);
   tolua_function(tolua_S,"setOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnLongClickScriptHandler00);
   tolua_function(tolua_S,"removeOnLongClickScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnLongClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CLabelBMFont_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CLabelBMFont_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CLabelBMFont_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CLabelBMFont_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CLabelBMFont_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CLabelBMFont_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CLabelBMFont_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CLabelBMFont_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CLabelBMFont_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CLabelBMFont_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CLabelBMFont_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CLabelBMFont_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CLabelBMFont___CWidget__,NULL);
   tolua_variable(tolua_S,"__CClickableProtocol__",tolua_get_CLabelBMFont___CClickableProtocol__,NULL);
   tolua_variable(tolua_S,"__CLongClickableProtocol__",tolua_get_CLabelBMFont___CLongClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eProgressBarDirectionLeftToRight",eProgressBarDirectionLeftToRight);
  tolua_constant(tolua_S,"eProgressBarDirectionRightToLeft",eProgressBarDirectionRightToLeft);
  tolua_constant(tolua_S,"eProgressBarDirectionBottomToTop",eProgressBarDirectionBottomToTop);
  tolua_constant(tolua_S,"eProgressBarDirectionTopToBottom",eProgressBarDirectionTopToBottom);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CProgressBar","CProgressBar","CCNodeRGBA",tolua_collect_CProgressBar);
  #else
  tolua_cclass(tolua_S,"CProgressBar","CProgressBar","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CProgressBar");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CProgressBar_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CProgressBar_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CProgressBar_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CProgressBar_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CProgressBar_init00);
   tolua_function(tolua_S,"initWithFile",tolua_Lua_cocos2dx_widget_CProgressBar_initWithFile00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CProgressBar_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CProgressBar_create01);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CProgressBar_setContentSize00);
   tolua_function(tolua_S,"setValue",tolua_Lua_cocos2dx_widget_CProgressBar_setValue00);
   tolua_function(tolua_S,"getValue",tolua_Lua_cocos2dx_widget_CProgressBar_getValue00);
   tolua_function(tolua_S,"setMaxValue",tolua_Lua_cocos2dx_widget_CProgressBar_setMaxValue00);
   tolua_function(tolua_S,"getMaxValue",tolua_Lua_cocos2dx_widget_CProgressBar_getMaxValue00);
   tolua_function(tolua_S,"setMinValue",tolua_Lua_cocos2dx_widget_CProgressBar_setMinValue00);
   tolua_function(tolua_S,"getMinValue",tolua_Lua_cocos2dx_widget_CProgressBar_getMinValue00);
   tolua_function(tolua_S,"setDirection",tolua_Lua_cocos2dx_widget_CProgressBar_setDirection00);
   tolua_function(tolua_S,"getDirection",tolua_Lua_cocos2dx_widget_CProgressBar_getDirection00);
   tolua_function(tolua_S,"startProgress",tolua_Lua_cocos2dx_widget_CProgressBar_startProgress00);
   tolua_function(tolua_S,"startProgressFromTo",tolua_Lua_cocos2dx_widget_CProgressBar_startProgressFromTo00);
   tolua_function(tolua_S,"stopProgress",tolua_Lua_cocos2dx_widget_CProgressBar_stopProgress00);
   tolua_function(tolua_S,"getPercentage",tolua_Lua_cocos2dx_widget_CProgressBar_getPercentage00);
   tolua_function(tolua_S,"isProgressEnded",tolua_Lua_cocos2dx_widget_CProgressBar_isProgressEnded00);
   tolua_function(tolua_S,"setProgressImage",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressImage00);
   tolua_function(tolua_S,"setProgressTexture",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressTexture00);
   tolua_function(tolua_S,"setProgressSpriteFrame",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrame00);
   tolua_function(tolua_S,"setProgressSpriteFrameName",tolua_Lua_cocos2dx_widget_CProgressBar_setProgressSpriteFrameName00);
   tolua_function(tolua_S,"setBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundTexture",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundTexture00);
   tolua_function(tolua_S,"setBackgroundSpriteFrame",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrame00);
   tolua_function(tolua_S,"setBackgroundSpriteFrameName",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundSpriteFrameName00);
   tolua_function(tolua_S,"getBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_getBackgroundImage00);
   tolua_function(tolua_S,"removeBackgroundImage",tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundImage00);
   tolua_function(tolua_S,"setBackgroundColor",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundColor00);
   tolua_function(tolua_S,"removeBackgroundColor",tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundColor00);
   tolua_function(tolua_S,"setBackgroundGradient",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundGradient00);
   tolua_function(tolua_S,"removeBackgroundGradient",tolua_Lua_cocos2dx_widget_CProgressBar_removeBackgroundGradient00);
   tolua_function(tolua_S,"setBackgroundOpacity",tolua_Lua_cocos2dx_widget_CProgressBar_setBackgroundOpacity00);
   tolua_function(tolua_S,"setOnValueChangedScriptHandler",tolua_Lua_cocos2dx_widget_CProgressBar_setOnValueChangedScriptHandler00);
   tolua_function(tolua_S,"removeOnValueChangedScriptHandler",tolua_Lua_cocos2dx_widget_CProgressBar_removeOnValueChangedScriptHandler00);
   tolua_function(tolua_S,"setOnProgressEndedScriptHandler",tolua_Lua_cocos2dx_widget_CProgressBar_setOnProgressEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnProgressEndedScriptHandler",tolua_Lua_cocos2dx_widget_CProgressBar_removeOnProgressEndedScriptHandler00);
   tolua_variable(tolua_S,"__CProgressEndedProtocol__",tolua_get_CProgressBar___CProgressEndedProtocol__,NULL);
   tolua_variable(tolua_S,"__CValueChangeableProtocol__",tolua_get_CProgressBar___CValueChangeableProtocol__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CSlider","CSlider","CProgressBar",tolua_collect_CSlider);
  #else
  tolua_cclass(tolua_S,"CSlider","CSlider","CProgressBar",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CSlider");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CSlider_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CSlider_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CSlider_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CSlider_delete00);
   tolua_function(tolua_S,"initWithSlider",tolua_Lua_cocos2dx_widget_CSlider_initWithSlider00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CSlider_create00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CSlider_create01);
   tolua_function(tolua_S,"setContentSize",tolua_Lua_cocos2dx_widget_CSlider_setContentSize00);
   tolua_function(tolua_S,"setSliderImage",tolua_Lua_cocos2dx_widget_CSlider_setSliderImage00);
   tolua_function(tolua_S,"setSliderTexture",tolua_Lua_cocos2dx_widget_CSlider_setSliderTexture00);
   tolua_function(tolua_S,"setSliderSpriteFrame",tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrame00);
   tolua_function(tolua_S,"setSliderSpriteFrameName",tolua_Lua_cocos2dx_widget_CSlider_setSliderSpriteFrameName00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CSlider_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CSlider_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CSlider_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CSlider_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CSlider_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CSlider_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CSlider_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CSlider_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CSlider_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CSlider_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CSlider_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CSlider_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CSlider_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CSlider_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CSlider___CWidget__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CTextRich","CTextRich","CCNodeRGBA",tolua_collect_CTextRich);
  #else
  tolua_cclass(tolua_S,"CTextRich","CTextRich","CCNodeRGBA",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CTextRich");
   tolua_function(tolua_S,"new",tolua_Lua_cocos2dx_widget_CTextRich_new00);
   tolua_function(tolua_S,"new_local",tolua_Lua_cocos2dx_widget_CTextRich_new00_local);
   tolua_function(tolua_S,".call",tolua_Lua_cocos2dx_widget_CTextRich_new00_local);
   tolua_function(tolua_S,"delete",tolua_Lua_cocos2dx_widget_CTextRich_delete00);
   tolua_function(tolua_S,"init",tolua_Lua_cocos2dx_widget_CTextRich_init00);
   tolua_function(tolua_S,"create",tolua_Lua_cocos2dx_widget_CTextRich_create00);
   tolua_function(tolua_S,"getFontName",tolua_Lua_cocos2dx_widget_CTextRich_getFontName00);
   tolua_function(tolua_S,"setFontName",tolua_Lua_cocos2dx_widget_CTextRich_setFontName00);
   tolua_function(tolua_S,"getFontSize",tolua_Lua_cocos2dx_widget_CTextRich_getFontSize00);
   tolua_function(tolua_S,"setFontSize",tolua_Lua_cocos2dx_widget_CTextRich_setFontSize00);
   tolua_function(tolua_S,"getMaxLineLength",tolua_Lua_cocos2dx_widget_CTextRich_getMaxLineLength00);
   tolua_function(tolua_S,"setMaxLineLength",tolua_Lua_cocos2dx_widget_CTextRich_setMaxLineLength00);
   tolua_function(tolua_S,"getVerticalSpacing",tolua_Lua_cocos2dx_widget_CTextRich_getVerticalSpacing00);
   tolua_function(tolua_S,"setVerticalSpacing",tolua_Lua_cocos2dx_widget_CTextRich_setVerticalSpacing00);
   tolua_function(tolua_S,"insertElement",tolua_Lua_cocos2dx_widget_CTextRich_insertElement00);
   tolua_function(tolua_S,"insertElement",tolua_Lua_cocos2dx_widget_CTextRich_insertElement01);
   tolua_function(tolua_S,"insertElement",tolua_Lua_cocos2dx_widget_CTextRich_insertElement02);
   tolua_function(tolua_S,"removeAllElements",tolua_Lua_cocos2dx_widget_CTextRich_removeAllElements00);
   tolua_function(tolua_S,"reloadData",tolua_Lua_cocos2dx_widget_CTextRich_reloadData00);
   tolua_function(tolua_S,"setOnTextRichClickScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_setOnTextRichClickScriptHandler00);
   tolua_function(tolua_S,"removeOnTextRichClickScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_removeOnTextRichClickScriptHandler00);
   tolua_function(tolua_S,"getUserTag",tolua_Lua_cocos2dx_widget_CTextRich_getUserTag00);
   tolua_function(tolua_S,"setUserTag",tolua_Lua_cocos2dx_widget_CTextRich_setUserTag00);
   tolua_function(tolua_S,"getId",tolua_Lua_cocos2dx_widget_CTextRich_getId00);
   tolua_function(tolua_S,"setId",tolua_Lua_cocos2dx_widget_CTextRich_setId00);
   tolua_function(tolua_S,"getDescription",tolua_Lua_cocos2dx_widget_CTextRich_getDescription00);
   tolua_function(tolua_S,"setDescription",tolua_Lua_cocos2dx_widget_CTextRich_setDescription00);
   tolua_function(tolua_S,"isEnabled",tolua_Lua_cocos2dx_widget_CTextRich_isEnabled00);
   tolua_function(tolua_S,"setEnabled",tolua_Lua_cocos2dx_widget_CTextRich_setEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_Lua_cocos2dx_widget_CTextRich_isTouchEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_Lua_cocos2dx_widget_CTextRich_setTouchEnabled00);
   tolua_function(tolua_S,"interruptTouchCascade",tolua_Lua_cocos2dx_widget_CTextRich_interruptTouchCascade00);
   tolua_function(tolua_S,"interruptTouch",tolua_Lua_cocos2dx_widget_CTextRich_interruptTouch00);
   tolua_function(tolua_S,"isTouchInterrupted",tolua_Lua_cocos2dx_widget_CTextRich_isTouchInterrupted00);
   tolua_function(tolua_S,"setOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"setOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"setOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_setOnTouchCancelledScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchBeganScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchBeganScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchMovedScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchMovedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchEndedScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchEndedScriptHandler00);
   tolua_function(tolua_S,"removeOnTouchCancelledScriptHandler",tolua_Lua_cocos2dx_widget_CTextRich_removeOnTouchCancelledScriptHandler00);
   tolua_variable(tolua_S,"__CWidget__",tolua_get_CTextRich___CWidget__,NULL);
   tolua_variable(tolua_S,"__CTextRichClickableProtocol__",tolua_get_CTextRich___CTextRichClickableProtocol__,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Lua_cocos2dx_widget (lua_State* tolua_S) {
 return tolua_Lua_cocos2dx_widget_open(tolua_S);
};
#endif

#endif //USING_LUA