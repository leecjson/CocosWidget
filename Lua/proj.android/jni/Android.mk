LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := hellolua/main.cpp \
../../../CocosWidget/Button.cpp \
../../../CocosWidget/CheckBox.cpp \
../../../CocosWidget/ColorView.cpp \
../../../CocosWidget/ControlView.cpp \
../../../CocosWidget/ExpandableListView.cpp \
../../../CocosWidget/GradientView.cpp \
../../../CocosWidget/GridPageView.cpp \
../../../CocosWidget/GridView.cpp \
../../../CocosWidget/ImageView.cpp \
../../../CocosWidget/ImageViewScale9.cpp \
../../../CocosWidget/Label.cpp \
../../../CocosWidget/LabelAtlas.cpp \
../../../CocosWidget/LabelBMFont.cpp \
../../../CocosWidget/Layout.cpp \
../../../CocosWidget/ListView.cpp \
../../../CocosWidget/Lua_cocos2dx_widget.cpp \
../../../CocosWidget/PageView.cpp \
../../../CocosWidget/ProgressBar.cpp \
../../../CocosWidget/Scale9Sprite.cpp \
../../../CocosWidget/ScrollView.cpp \
../../../CocosWidget/Slider.cpp \
../../../CocosWidget/TableView.cpp \
../../../CocosWidget/TextArea.cpp \
../../../CocosWidget/TextRich.cpp \
../../../CocosWidget/ToggleView.cpp \
../../../CocosWidget/Widget.cpp \
../../../CocosWidget/WidgetProtocol.cpp \
../../../CocosWidget/WidgetWindow.cpp \
../../../CocosWidget/WitlsMacros.cpp \
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