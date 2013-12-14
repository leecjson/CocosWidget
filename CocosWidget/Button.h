/****************************************************************************
Copyright (c) 2013 viva-Lijunlin

Created by Li JunLin on 2013

csdn_viva@foxmail.com
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
#ifndef __CCWIDGET_BUTTON_H__
#define __CCWIDGET_BUTTON_H__

/////////////////////////////////////////////////////////////////////////////
/// BugFix : [1] fix wrong positions after set content size.
///
/////////////////////////////////////////////////////////////////////////////

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Scale9Sprite.h"
#include "Label.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class    : CButton
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 按钮控件定义，可以设置3种状态。
 */
class CButton : public CCNodeRGBA, public CWidget, public CClickableProtocol, public CLongClickableProtocol
{
public:
	CButton();
	virtual ~CButton();
	
	// 初始化默认大小
	virtual bool init();
	// 每次设置大小时，更新内容大小
	virtual void setContentSize(const CCSize& contentSize);
	// 设置控件是否可用，切换图片
	virtual void setEnabled(bool bEnabled);
	// 设置按钮上文字位置的偏移
	void setLabelOffset(const CCPoint& tOffset);
	// 获取按钮文字对象
	virtual CLabel* getLabel();
	// 获取是否开启了9宫格按钮属性
	virtual bool isScale9Enabled();
	// 设置是否开启了9宫格按钮属性
	virtual void setScale9Enabled(bool bEnabled);
	// 通过大小和状态图初始化按钮，并开启9宫格按钮选项
	virtual bool initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled);
	// 通过图片文件初始化按钮，按钮大小为pNormal图片的大小
	virtual bool initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled);
	// 以文字大小改变按钮大小，当按钮文字改变后希望同时改变，按钮的大小使之能容纳文字时可以调用，只在9宫格按钮适用 
	virtual void updateCascadeLabelContentSize(const CCSize& tOffsetSize = CCSizeZero);

	virtual CWidgetTouchModel onTouchBegan(CCTouch *pTouch);
	virtual void onTouchMoved(CCTouch *pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch *pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch *pTouch, float fDuration);

	virtual void setNormalImage(const char* pFile);
	virtual void setSelectedImage(const char* pFile);
	virtual void setDisabledImage(const char* pFile);

	virtual void setNormalTexture(CCTexture2D *pTexture);
	virtual void setSelectedTexture(CCTexture2D *pTexture);
	virtual void setDisabledTexture(CCTexture2D *pTexture);
	
	virtual void setNormalSpriteFrameName(const char* pSpriteName);
	virtual void setSelectedSpriteFrameName(const char* pSpriteName);
	virtual void setDisabledSpriteFrameName(const char* pSpriteName);

	virtual void setNormalSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setSelectedSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setDisabledSpriteFrame(CCSpriteFrame* pFrame);

	virtual CCNode* getNormalImage();
	virtual CCNode* getSelectedImage();
	virtual CCNode* getDisabledImage();

	static CButton* create();
	static CButton* create(const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
	static CButton* createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);

	CC_WIDGET_LONGCLICK_SCHEDULE(CButton);

protected:
	// 正常状态的图像
	CCNode* m_pNormalImage;
	// 选中时的图像
	CCNode* m_pSelectedImage;
	// 不可用时的图像
	CCNode* m_pDisabledImage;
	// 9宫格按钮
	bool m_bScale9Enabled;
	// 按钮文字
	CLabel* m_pLabel;
	// 按钮文字坐标的偏移量
	CCPoint m_tTextOffset;
	
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_BUTTON_H__