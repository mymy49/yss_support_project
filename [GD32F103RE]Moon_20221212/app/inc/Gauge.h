////////////////////////////////////////////////////////////////////////////////////////
//
// 저작권 표기 License_ver_3.0
// 본 소스 코드의 소유권은 홍윤기에게 있습니다.
// 어떠한 형태든 기여는 기증으로 받아들입니다.
// 본 소스 코드는 아래 사항에 동의할 경우에 사용 가능합니다.
// 아래 사항에 대해 동의하지 않거나 이해하지 못했을 경우 사용을 금합니다.
// 본 소스 코드를 사용하였다면 아래 사항을 모두 동의하는 것으로 자동 간주 합니다.
// 본 소스 코드의 상업적 또는 비 상업적 이용이 가능합니다.
// 본 소스 코드의 내용을 임의로 수정하여 재배포하는 행위를 금합니다.
// 본 소스 코드의 내용을 무단 전재하는 행위를 금합니다.
// 본 소스 코드의 사용으로 인해 발생하는 모든 사고에 대해서 어떠한 법적 책임을 지지 않습니다.
//
// Home Page : http://cafe.naver.com/yssoperatingsystem
// Copyright 2022. 홍윤기 all right reserved.
//
////////////////////////////////////////////////////////////////////////////////////////

#ifndef GAUGE_EXAMEPLE__H_
#define GAUGE_EXAMEPLE__H_

#include <gui/util.h>
#include <gui/Color.h>

class Bmp565Buffer;
struct Bmp565;

class Gauge
{
	Bmp565Buffer *mBmp565Buffer;
	Size mSize;
	Color mBgColor, mBoaderColor;
	uint8_t mBoaderThickness, mNumberOfBar, mLastDrawingCount;
	float mMinValue, mMaxValue, mUnderWarningValue, mUnderFaultValue, mWarningValue, mFaultValue;
	float mValue;
	bool mUnderWarningValueFlag, mUnderFaultValueFlag, mWarningValueFlag, mFaultValueFlag;

public:
	Gauge(void);

	void setBmp565Buffer(Bmp565Buffer &buf);

	void setSize(Size size);

	void setBackgroundColor(Color color);

	void setBoaderColor(Color color);

	void setBoaderThickness(uint8_t thickness);

	void setScale(float min, float max);

	void setValue(float value);

	void setNumberOfBar(uint8_t num);

	void draw(void);

	bool IsNeedRedraw(void);

	const Bmp565 *getBmp565(void);

	void setUnderWarningValue(float value);

	void setUnderFaultValue(float value);

	void setWarningValue(float value);

	void setFaultValue(float value);
};

#endif

