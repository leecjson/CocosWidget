/****************************************************************************
Copyright (c) 2013 Lijunlin - Jason lee

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
#ifndef __CCWIDGET_BUTTON_H__
#define __CCWIDGET_BUTTON_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "Scale9Sprite.h"
#include "Label.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * class  : CButton
 * author : Jason lee
 * email  : jason.lee.c@foxmail.com
 * descpt : 
 */
class CButton : public CCNodeRGBA, public CWidget, public CClickableProtocol, public CLongClickableProtocol
{
public:
	CButton();
	virtual ~CButton();
	
	virtual bool init();
	virtual bool initWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected, const char* pDisabled);
	virtual bool initWithFile(const char* pNormal, const char* pSelected, const char* pDisabled);
	static CButton* create();
	static CButton* create(const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);
	static CButton* createWith9Sprite(const CCSize& tSize, const char* pNormal, const char* pSelected = NULL, const char* pDisabled = NULL);

	virtual void setContentSize(const CCSize& contentSize);
	virtual void setEnabled(bool bEnabled);
	void setLabelOffset(const CCPoint& tOffset);
	void setText(const char* pText);
	const char* getText();
	void setTextFontName(const char* pTextFontName);
	const char* getTextFontName();
	void setTextFontSize(float fTextFontSize);
	float getTextFontSize();
	void setTextColor(const ccColor3B& color);
	const ccColor3B& getTextColor();
	void initText(const char* pText, const char* pFontName, float fFontSize);
	virtual CLabel* getLabel();
	virtual bool isScale9Enabled();
	virtual void setScale9Enabled(bool bEnabled);
	virtual void setCascadeTextSizeEnabled(bool bEnabled, const CCSize& tPadding = CCSize(50, 30));

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

	CC_WIDGET_LONGCLICK_SCHEDULE(CButton);

public:
	virtual CWidgetTouchModel onTouchBegan(CCTouch* pTouch);
	virtual void onTouchMoved(CCTouch* pTouch, float fDuration);
	virtual void onTouchEnded(CCTouch* pTouch, float fDuration);
	virtual void onTouchCancelled(CCTouch* pTouch, float fDuration);

protected:
	void updateCascadeTextSize();

protected:
	CCNode* m_pNormalImage;
	CCNode* m_pSelectedImage;
	CCNode* m_pDisabledImage;
	bool m_bScale9Enabled;
	CLabel* m_pLabel;
	CCPoint m_tTextOffset;
	bool m_bCascadeTextSizeEnabled;
	CCSize m_tCascadeTextSizePadding;
	
};

NS_CC_WIDGET_END

#endif //__CCWIDGET_BUTTON_H__