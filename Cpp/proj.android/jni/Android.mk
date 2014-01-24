LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocoswidget_shared

LOCAL_MODULE_FILENAME := libcocoswidget

LOCAL_SRC_FILES := cpp/main.cpp \
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
../../Classes/AppDelegate.cpp \
../../Classes/MenuScene.cpp \
../../Classes/testwidget/ButtonTest/ButtonTest.cpp \
../../Classes/testwidget/CheckBoxTest/CheckBoxTest.cpp \
../../Classes/testwidget/ControlViewTest/ControlViewTest.cpp \
../../Classes/testwidget/DrawOrderTest/DrawOrderTest.cpp \
../../Classes/testwidget/ExpandableListViewTest/ExpandableListViewTest.cpp \
../../Classes/testwidget/GridPageViewTest/GridPageViewTest.cpp \
../../Classes/testwidget/GridViewTest/GridViewTest.cpp \
../../Classes/testwidget/LabelTest/LabelTest.cpp \
../../Classes/testwidget/LayoutTest/LayoutTest.cpp \
../../Classes/testwidget/ListViewTest/ListViewTest.cpp \
../../Classes/testwidget/PageViewTest/PageViewTest.cpp \
../../Classes/testwidget/ProgressBarTest/ProgressBarTest.cpp \
../../Classes/testwidget/ScrollViewTest/ScrollViewTest.cpp \
../../Classes/testwidget/SliderTest/SliderTest.cpp \
../../Classes/testwidget/TableViewTest/TableViewTest.cpp \
../../Classes/testwidget/TextRichTest/TextRichTest.cpp \
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
