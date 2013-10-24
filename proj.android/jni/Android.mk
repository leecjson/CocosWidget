LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
../../Classes/AppDelegate.cpp \
../../Classes/CCButtonTest/CCButtonTest.cpp \
../../Classes/CCGridTest/CCGridTest.cpp \
../../Classes/CCPageTest/CCPageTest.cpp \
../../Classes/CCPanelTest/CCPanelTest.cpp \
../../Classes/CCScrollTest/CCScrollTest.cpp \
../../Classes/CCTableGridTest/CCTableGridTest.cpp \
../../Classes/CCTableTest/CCTableTest.cpp \
../../Classes/CCTextTest/CCTextTest.cpp \
../../Classes/CCToggleTest/CCToggleTest.cpp \
../../Classes/cocoswidget/CC9Sprite.cpp \
../../Classes/cocoswidget/CCButton.cpp \
../../Classes/cocoswidget/CCGrid.cpp \
../../Classes/cocoswidget/CCImageBox.cpp \
../../Classes/cocoswidget/CCImageScale9.cpp \
../../Classes/cocoswidget/CCPage.cpp \
../../Classes/cocoswidget/CCPanel.cpp \
../../Classes/cocoswidget/CCScroll.cpp \
../../Classes/cocoswidget/CCTable.cpp \
../../Classes/cocoswidget/CCTableGrid.cpp \
../../Classes/cocoswidget/CCTextAtlas.cpp \
../../Classes/cocoswidget/CCTextBMFont.cpp \
../../Classes/cocoswidget/CCTextTTF.cpp \
../../Classes/cocoswidget/CCToggle.cpp \
../../Classes/cocoswidget/CCWidget.cpp \
../../Classes/cocoswidget/CCWidgetLayout.cpp \
../../Classes/MenuScene.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes

LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static
LOCAL_WHOLE_STATIC_LIBRARIES += box2d_static
LOCAL_WHOLE_STATIC_LIBRARIES += chipmunk_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_extension_static

include $(BUILD_SHARED_LIBRARY)

$(call import-module,cocos2dx)
$(call import-module,cocos2dx/platform/third_party/android/prebuilt/libcurl)
$(call import-module,CocosDenshion/android)
$(call import-module,extensions)
$(call import-module,external/Box2D)
$(call import-module,external/chipmunk)
