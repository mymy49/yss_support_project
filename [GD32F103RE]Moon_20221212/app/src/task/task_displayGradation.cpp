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

#include <task.h>
#include <yss.h>
#include <board.h>

namespace Task
{
	error displayGradation(FunctionQueue *obj)
	{
		Position pos = {35, 32};
		lock(); // unlock()을 만날 때까지 외부에서 이 함수를 강제 종료 시키지 못한다.
		clearTask();

		lcd.lock();
		lcd.setBackgroundColor(0x30, 0x30, 0x30);
		lcd.clear();

		brush.setSize(35, 256);

		// 빨강 그라데이션
		for(int16_t i=0;i<256;i++)
		{
			brush.setBrushColor(i, 0, 0);
			brush.drawLine({0, i}, {34, i});
		}
		lcd.drawBmp(pos, brush.getBmp565());
		pos.x += 45;

		// 초록 그라데이션
		for(int16_t i=0;i<256;i++)
		{
			brush.setBrushColor(0, i, 0);
			brush.drawLine({0, i}, {34, i});
		}
		lcd.drawBmp(pos, brush.getBmp565());
		pos.x += 45;

		// 파랑 그라데이션
		for(int16_t i=0;i<256;i++)
		{
			brush.setBrushColor(0, 0, i);
			brush.drawLine({0, i}, {34, i});
		}
		lcd.drawBmp(pos, brush.getBmp565());
		pos.x += 45;

		// 검정 그라데이션
		for(int16_t i=0;i<256;i++)
		{
			brush.setBrushColor(i, i, i);
			brush.drawLine({0, i}, {34, i});
		}
		lcd.drawBmp(pos, brush.getBmp565());
		lcd.unlock();

		unlock();
		
		thread::delay(5000);
			
		return Error::NONE;
	}
}


