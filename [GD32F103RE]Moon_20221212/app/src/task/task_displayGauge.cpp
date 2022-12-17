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
#include <Gauge.h>
#include <util/ElapsedTime.h>

namespace Task
{
	static float gValue1, gValue2;

	void thread_displayGauge(void)
	{
		Position gauge1Pos = {30, 20}, gauge2Pos = {80, 20};
		Gauge gauge1, gauge2;
		float lastGauge1Value = 0, lastGauge2Value = 0;
		
		gauge1.setBmp565Buffer(brush);

		gauge2.setBmp565Buffer(brush);
		gauge2.setNumberOfBar(10);
		gauge2.setSize({40, 150});
		gauge2.setScale(0, 50);
		
		lcd.lock();
		lcd.setBackgroundColor(0x30, 0x30, 0x30);
		lcd.clear();
		
		gauge1.draw();
		lcd.drawBmp(gauge1Pos, gauge1.getBmp565());

		gauge2.draw();
		lcd.drawBmp(gauge2Pos, gauge2.getBmp565());
		lcd.unlock();

		while(1)
		{
			if(lastGauge1Value != gValue1)
			{
				lastGauge1Value = gValue1;
				gauge1.setValue(lastGauge1Value);
				if(gauge1.IsNeedRedraw())
				{
					lcd.lock();
					gauge1.draw();
					lcd.drawBmp(gauge1Pos, gauge1.getBmp565());
					lcd.unlock();
				}
			}

			if(lastGauge2Value != gValue2)
			{
				lastGauge2Value = gValue2;
				gauge2.setValue(lastGauge2Value);
				if(gauge2.IsNeedRedraw())
				{
					lcd.lock();
					gauge2.draw();
					lcd.drawBmp(gauge2Pos, gauge2.getBmp565());
					lcd.unlock();
				}
			}
			
			thread::yield();
		}
	}

	void thread_changeValue(void)
	{
		ElapsedTime gauge1UpdateTime, gauge2UpdateTime;

		while(1)
		{
			if(gauge1UpdateTime.getMsec() >= 100)
			{
				gauge1UpdateTime.reset();
				gValue1 += 1.f;
				if(gValue1 >= 100.f)
					gValue1 = 0.f;
			}

			if(gauge2UpdateTime.getMsec() >= 100)
			{
				gauge2UpdateTime.reset();
				gValue2 += 1.f;
				if(gValue2 >= 50.f)
					gValue2 = 0.f;
			}
		}
	}

	error displayGauge(FunctionQueue *obj)
	{
		lock(); // unlock()을 만날 때까지 외부에서 이 함수를 강제 종료 시키지 못한다.
		clearTask();

		addThread(thread_displayGauge, 1024);
		addThread(thread_changeValue, 1024);
		
		unlock();
			
		return Error::NONE;
	}
}

