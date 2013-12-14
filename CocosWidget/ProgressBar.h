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
#ifndef __CCWIDGET_PROGRESSBAR_H__
#define __CCWIDGET_PROGRESSBAR_H__

#include "cocos2d.h"
#include "WidgetMacros.h"
#include "Widget.h"
#include "WidgetProtocol.h"

NS_CC_WIDGET_BEGIN

/**
 * enum     : CProgressBarDirection
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 进度条控件方向枚举定义
 */
enum CProgressBarDirection
{
	eProgressBarDirectionLeftToRight,
	eProgressBarDirectionRightToLeft,
	eProgressBarDirectionBottomToTop,
	eProgressBarDirectionTopToBottom
};

/**
 * class    : CProgressBar
 * author   : viva - Lijunlin
 * email    : csdn_viva@foxmail.com
 * function : 进度条控件定义
 */
class CProgressBar : public CCNodeRGBA
, public CProgressEndedProtocol
, public CValueChangeableProtocol
{
public:
	CProgressBar();
	virtual ~CProgressBar();

	// 初始化默认数据
	virtual bool init();
	// 通过进度条文件初始化
	virtual bool initWithFile(const char* pProgress);
	// 当设置大小时更新内容坐标
	virtual void setContentSize(const CCSize& tSize);
	
	// 设置进度值（不能小于0）
	void setValue(int nValue);
	// 获取进度值
	int getValue() const;
	// 设置进度最大值
	void setMaxValue(int nMaxValue);
	// 获取进度最大值
	int getMaxValue() const;
	// 设置进度最小值
	void setMinValue(int nMinValue);
	// 获取进度最小值
	int getMinValue() const;
	// 设置进度条方向
	void setDirection(CProgressBarDirection eDirection);
	// 获取进度条方向
	CProgressBarDirection getDirection() const;

	// 执行进度
	void startProgress(int nValue, float fDuration);
	// 执行进度 从一个值到另外一个值的变化
	void startProgressFromTo(int nFromValue, int nToValue, float fDuration);
	// 停止进度
	void stopProgress();
	// 获取当前进度百分比
	float getPercentage() const;
	// 获取进度是否结束
	bool isProgressEnded() const;

	virtual void setProgressImage(const char* pFile);
	virtual void setProgressTexture(CCTexture2D* pTexture);
	virtual void setProgressSpriteFrame(CCSpriteFrame* pFrame);
	virtual void setProgressSpriteFrameName(const char* pSpriteName);

	static CProgressBar* create();
	static CProgressBar* create(const char* pProgress);

	CC_WIDGET_BACKGROUND;
	
protected:
	void performProgressing();
	void onProgressing(float dt);
	void stoppedProgressing();

	void getScissorRectByPercentage(CCRect& tRect);
	virtual void changeValueAndExecuteEvent(int nValue, bool bExeEvent);	

protected:
	int m_nMaxValue;
	int m_nMinValue;
	int m_nValue;

	bool m_bProgressing;

	bool m_bFirstTick;
	float m_fLapsed;
	float m_fDuration;
	int m_nToValue;
	int m_nFromValue;

	CCSize m_tProgressSize;
	CCPoint m_tCenterPoint;

	CCSprite* m_pProgressSprite;
	CProgressBarDirection m_eDirection;
};


NS_CC_WIDGET_END

#endif //__CCWIDGET_PROGRESSBAR_H__