LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := hellolua/main.cpp \
../../../CocosBase/Button.cpp \
../../../CocosBase/CheckBox.cpp \
../../../CocosBase/ColorView.cpp \
../../../CocosBase/ControlView.cpp \
../../../CocosBase/ExpandableListView.cpp \
../../../CocosBase/GradientView.cpp \
../../../CocosBase/GridPageView.cpp \
../../../CocosBase/GridView.cpp \
../../../CocosBase/ImageView.cpp \
../../../CocosBase/ImageViewScale9.cpp \
../../../CocosBase/Label.cpp \
../../../CocosBase/LabelAtlas.cpp \
../../../CocosBase/LabelBMFont.cpp \
../../../CocosBase/Layout.cpp \
../../../CocosBase/ListView.cpp \
../../../CocosBase/Lua_cocos2dx_widget.cpp \
../../../CocosBase/PageView.cpp \
../../../CocosBase/ProgressBar.cpp \
../../../CocosBase/Scale9Sprite.cpp \
../../../CocosBase/ScrollView.cpp \
../../../CocosBase/Slider.cpp \
../../../CocosBase/TableView.cpp \
../../../CocosBase/TextArea.cpp \
../../../CocosBase/TextRich.cpp \
../../../CocosBase/ToggleView.cpp \
../../../CocosBase/Widget.cpp \
../../../CocosBase/WidgetProtocol.cpp \
../../../CocosBase/WidgetWindow.cpp \
../../../CocosBase/WitlsMacros.cpp \
../../Classes/AppDelegate.cpp


LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes

LOCAL_STATIC_LIBRARIES := curl_static_prebuilt

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_lua_static
LOCAL_WHOLE_STATIC_LIBRARIES += box2d_static
LOCAL_WHOLE_STATIC_LIBRARIES += chipmunk_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_extension_static

include $(BUILD_SHARED_LIBRARY)

$(call import-module,cocos2dx)
$(call import-module,CocosDenshion/android)
$(call import-module,scripting/lua/proj.android)
$(call import-module,cocos2dx/platform/third_party/android/prebuilt/libcurl)
$(call import-module,extensions)
$(call import-module,external/Box2D)
$(call import-module,external/chipmunk)