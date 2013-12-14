#ifndef __CCWIDGET_LUA_H__
#define __CCWIDGET_LUA_H__

#include "WidgetMacros.h"

#if USING_LUA
#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int tolua_Lua_cocos2dx_widget_open(lua_State* tolua_S);
#endif

#endif //__CCWIDGET_LUA_H__
