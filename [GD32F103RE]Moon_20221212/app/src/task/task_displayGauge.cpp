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
	static float gValue1, gValue2, gValue3, gValue4, gValue5;

	void thread_displayGauge(void)
	{
		Position gauge1Pos = {10, 20};
		Size gauge1Size = {35, 100};
		Position gauge2Pos = {50, 20};
		Size gauge2Size = {35, 150};
		Position gauge3Pos = {90, 20};
		Size gauge3Size = {35, 150};
		Position gauge4Pos = {130, 20};
		Size gauge4Size = {35, 150};
		Position gauge5Pos = {170, 20};
		Size gauge5Size = {35, 250};

		Gauge gauge1, gauge2, gauge3, gauge4, gauge5;
		float lastGauge1Value = 0, lastGauge2Value = 0, lastGauge3Value = 0, lastGauge4Value = 0, lastGauge5Value = 0;
		
		gauge1.setBmp565Buffer(brush);
		gauge2.setSize(gauge1Size);

		gauge2.setBmp565Buffer(brush);
		gauge2.setNumberOfBar(10);
		gauge2.setSize(gauge2Size);
		gauge2.setScale(0, 50);
		
		gauge3.setBmp565Buffer(brush);
		gauge3.setNumberOfBar(20);
		gauge3.setSize(gauge3Size);
		gauge3.setScale(0, 25);
		gauge3.setUnderFaultValue(2.5);
		gauge3.setUnderWarningValue(5);

		gauge4.setBmp565Buffer(brush);
		gauge4.setNumberOfBar(20);
		gauge4.setSize(gauge4Size);
		gauge4.setScale(0, 25);
		gauge4.setWarningValue(14);
		gauge4.setFaultValue(18);

		gauge5.setBmp565Buffer(brush);
		gauge5.setNumberOfBar(30);
		gauge5.setSize(gauge5Size);
		gauge5.setScale(0, 100);
		gauge5.setUnderFaultValue(10);
		gauge5.setUnderWarningValue(25);
		gauge5.setWarningValue(75);
		gauge5.setFaultValue(90);

		lcd.lock();
		lcd.setBackgroundColor(0x30, 0x30, 0x30);
		lcd.clear();
		
		gauge1.draw();
		lcd.drawBmp(gauge1Pos, gauge1.getBmp565());

		gauge2.draw();
		lcd.drawBmp(gauge2Pos, gauge2.getBmp565());

		gauge3.draw();
		lcd.drawBmp(gauge3Pos, gauge3.getBmp565());

		gauge4.draw();
		lcd.drawBmp(gauge4Pos, gauge4.getBmp565());

		gauge5.draw();
		lcd.drawBmp(gauge5Pos, gauge5.getBmp565());
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

			if(lastGauge3Value != gValue3)
			{
				lastGauge3Value = gValue3;
				gauge3.setValue(lastGauge3Value);
				if(gauge3.IsNeedRedraw())
				{
					lcd.lock();
					gauge3.draw();
					lcd.drawBmp(gauge3Pos, gauge3.getBmp565());
					lcd.unlock();
				}
			}

			if(lastGauge4Value != gValue4)
			{
				lastGauge4Value = gValue4;
				gauge4.setValue(lastGauge4Value);
				if(gauge4.IsNeedRedraw())
				{
					lcd.lock();
					gauge4.draw();
					lcd.drawBmp(gauge4Pos, gauge4.getBmp565());
					lcd.unlock();
				}
			}

			if(lastGauge5Value != gValue5)
			{
				lastGauge5Value = gValue5;
				gauge5.setValue(lastGauge5Value);
				if(gauge5.IsNeedRedraw())
				{
					lcd.lock();
					gauge5.draw();
					lcd.drawBmp(gauge5Pos, gauge5.getBmp565());
					lcd.unlock();
				}
			}
			
			thread::yield();
		}
	}

	void thread_changeValue(void)
	{
		ElapsedTime gauge1UpdateTime, gauge2UpdateTime, gauge3UpdateTime, gauge4UpdateTime, gauge5UpdateTime;

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

			if(gauge3UpdateTime.getMsec() >= 100)
			{
				gauge3UpdateTime.reset();
				gValue3 += 1.f;
				if(gValue3 >= 25.f)
					gValue3 = 0.f;
			}

			if(gauge4UpdateTime.getMsec() >= 100)
			{
				gauge4UpdateTime.reset();
				gValue4 += 1.f;
				if(gValue4 >= 25.f)
					gValue4 = 0.f;
			}

			if(gauge5UpdateTime.getMsec() >= 10)
			{
				gauge5UpdateTime.reset();
				gValue5 += 1.f;
				if(gValue5 >= 100.f)
					gValue5 = 0.f;
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

