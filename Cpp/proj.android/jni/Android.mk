LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocoswidget_shared

LOCAL_MODULE_FILENAME := libcocoswidget

LOCAL_SRC_FILES := cpp/main.cpp \
../../Classes/AppDelegate.cpp \
../../Classes/cocoswidget/Button.cpp \
../../Classes/cocoswidget/CheckBox.cpp \
../../Classes/cocoswidget/ControlView.cpp \
../../Classes/cocoswidget/GridPageView.cpp \
../../Classes/cocoswidget/GridView.cpp \
../../Classes/cocoswidget/ImageView.cpp \
../../Classes/cocoswidget/ImageViewScale9.cpp \
../../Classes/cocoswidget/Label.cpp \
../../Classes/cocoswidget/LabelAtlas.cpp \
../../Classes/cocoswidget/LabelBMFont.cpp \
../../Classes/cocoswidget/ListView.cpp \
../../Classes/cocoswidget/PageView.cpp \
../../Classes/cocoswidget/Panel.cpp \
../../Classes/cocoswidget/ProgressBar.cpp \
../../Classes/cocoswidget/Scale9Sprite.cpp \
../../Classes/cocoswidget/ScrollView.cpp \
../../Classes/cocoswidget/Slider.cpp \
../../Classes/cocoswidget/TableView.cpp \
../../Classes/cocoswidget/ToggleView.cpp \
../../Classes/cocoswidget/Widget.cpp \
../../Classes/cocoswidget/WidgetLayout.cpp \
../../Classes/cocoswidget/WidgetProtocol.cpp \
../../Classes/MenuScene.cpp \
../../Classes/testwidget/ButtonTest/ButtonTest.cpp \
../../Classes/testwidget/CheckBoxTest/CheckBoxTest.cpp \
../../Classes/testwidget/ControlViewTest/ControlViewTest.cpp \
../../Classes/testwidget/GridPageViewTest/GridPageViewTest.cpp \
../../Classes/testwidget/GridViewTest/GridViewTest.cpp \
../../Classes/testwidget/LabelTest/LabelTest.cpp \
../../Classes/testwidget/ListViewTest/ListViewTest.cpp \
../../Classes/testwidget/PageViewTest/PageViewTest.cpp \
../../Classes/testwidget/PanelTest/PanelTest.cpp \
../../Classes/testwidget/ProgressBarTest/ProgressBarTest.cpp \
../../Classes/testwidget/ScrollViewTest/ScrollViewTest.cpp \
../../Classes/testwidget/SliderTest/SliderTest.cpp \
../../Classes/testwidget/TableViewTest/TableViewTest.cpp \
../../Classes/testwidget/ToggleViewTest/ToggleViewTest.cpp

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
