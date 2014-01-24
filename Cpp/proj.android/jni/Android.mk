LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocoswidget_shared

LOCAL_MODULE_FILENAME := libcocoswidget

LOCAL_SRC_FILES := cpp/main.cpp \
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
