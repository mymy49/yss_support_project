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

#include <Gauge.h>
#include <gui/Bmp565Buffer.h>

Gauge::Gauge(void)
{
	mBmp565Buffer = 0;
	mMinValue = 0;
	mMaxValue = 100;
	mValue = 0;
	mNumberOfBar = 6;
	mBoaderThickness = 5;
	mSize = {30, 100};
	mUnderWarningValueFlag = mUnderFaultValueFlag = mWarningValueFlag = mFaultValueFlag = false;

	mBgColor.setToBlack();
	mBoaderColor.setToWhite();
}

void Gauge::setBmp565Buffer(Bmp565Buffer &buf)
{
	mBmp565Buffer = &buf;
}

void Gauge::setSize(Size size)
{
	mSize = size;
}

void Gauge::setBackgroundColor(Color color)
{
	mBgColor = color;
}

void Gauge::setBoaderColor(Color color)
{
	mBoaderColor = color;
}

void Gauge::setBoaderThickness(uint8_t thickness)
{
	mBoaderThickness = thickness;
}

void Gauge::setScale(float min, float max)
{
	mMinValue = min;
	mMaxValue = max;
}

void Gauge::setValue(float value)
{
	if(value < mMinValue)
		value = mMinValue;
	else if(value > mMaxValue)
		value =mMaxValue;

	mValue = value;
}

void Gauge::draw(void)
{
	Position pos, innerPos;
	Size size, innerSize;
	uint8_t count;
	float stepValue, stepOffset;

	mBmp565Buffer->setSize(mSize);
	mBmp565Buffer->setBackgroundColor(mBoaderColor);
	mBmp565Buffer->setBrushColor(mBgColor);
	mBmp565Buffer->clear();

	pos.x = mBoaderThickness;
	pos.y = mBoaderThickness;
	size.width = mSize.width - mBoaderThickness * 2;
	size.height = mSize.height - mBoaderThickness * 2;

	mBmp565Buffer->fillRect(pos, size);

	size.width -= 2;
	size.height /= mNumberOfBar;
	size.height -= 1;
	
	pos.x += 1;
	pos.y = mSize.height - mBoaderThickness - size.height - 1;
	count = (mValue - mMinValue) / (mMaxValue - mMinValue) * (float)mNumberOfBar;
	mLastDrawingCount = count;

	innerPos.x = pos.x + 1;
	innerPos.y = pos.y + 1;
	innerSize.width = size.width - 2;
	innerSize.height = size.height - 2;

	stepOffset = (mMaxValue - mMinValue) / (float)mNumberOfBar;
	stepValue = mMinValue;

	for(uint8_t i=0;i<count;i++)
	{
		mBmp565Buffer->setBrushColor(0x60, 0x60, 0x60);
		mBmp565Buffer->fillRect(pos, size);
		
		if(mUnderFaultValueFlag && stepValue <= mUnderFaultValue)
			mBmp565Buffer->setBrushColor(0xD0, 0x00, 0x20);
		else if(mUnderWarningValueFlag && stepValue <= mUnderWarningValue)
			mBmp565Buffer->setBrushColor(0xD0, 0xD0, 0x20);
		else if(mFaultValueFlag && stepValue >= mFaultValue)
			mBmp565Buffer->setBrushColor(0xD0, 0x00, 0x20);
		else if(mWarningValueFlag && stepValue >= mWarningValue)
			mBmp565Buffer->setBrushColor(0xD0, 0xD0, 0x20);
		else
			mBmp565Buffer->setBrushColor(0x20, 0xD0, 0x20);

		mBmp565Buffer->fillRect(pos, size);

		pos.y -= size.height + 1;
		innerPos.y = pos.y + 1;
		stepValue += stepOffset;
	}
}

void Gauge::setNumberOfBar(uint8_t num)
{
	mNumberOfBar = num;
}

const Bmp565 *Gauge::getBmp565(void)
{
	return mBmp565Buffer->getBmp565();
}

bool Gauge::IsNeedRedraw(void)
{
	uint8_t count = (mValue - mMinValue) / (mMaxValue - mMinValue) * (float)mNumberOfBar;
	
	return count != mLastDrawingCount;
}

void Gauge::setUnderWarningValue(float value)
{
	mUnderWarningValue = value;
	mUnderWarningValueFlag = true;
}

void Gauge::setUnderFaultValue(float value)
{
	mUnderFaultValue = value;
	mUnderFaultValueFlag = true;
}

void Gauge::setWarningValue(float value)
{
	mWarningValue = value;
	mWarningValueFlag = true;
}

void Gauge::setFaultValue(float value)
{
	mFaultValue = value;
	mFaultValueFlag = true;
}

