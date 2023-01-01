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

#include <yss/debug.h>

#include <yss.h>
#include <board.h>
#include <task.h>
#include <util/ElapsedTime.h>

void thread_testCan(void)
{
	ElapsedTime time;
	CanFrame sendBuf;

	sendBuf.id = 100;
	sendBuf.dataLength = 8;
	sendBuf.extension = false;
	sendBuf.data[0] = 10;
	sendBuf.data[1] = 20;
	sendBuf.data[2] = 30;
	sendBuf.data[3] = 40;
	sendBuf.data[4] = 50;
	sendBuf.data[5] = 60;
	sendBuf.data[6] = 70;
	sendBuf.data[7] = 80;

	while(1)
	{
		if(time.getMsec() >= 100)
		{
			time.reset();

			can1.send(sendBuf);
			sendBuf.data[0]++;
		}
	}
}

int main(void)
{
	initYss();
	initBoard();

	CanFrame rcvBuf;
	
	functionQueue.start();
	functionQueue.add(Task::displayLogo);
	functionQueue.add(Task::displayGradation);
	functionQueue.add(Task::displayGauge);

	thread::add(thread_testCan, 512);
	
	while (true)
	{
		while(can1.isReceived())
		{
			rcvBuf = can1.getPacket();

			debug_printf("id = %d, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X, 0x%02X\n", rcvBuf.id, rcvBuf.data[0], rcvBuf.data[1], rcvBuf.data[2], rcvBuf.data[3], rcvBuf.data[4], rcvBuf.data[5], rcvBuf.data[6], rcvBuf.data[7]);

			can1.releaseFifo();
		}

		thread::yield();
	}

	return 0;
}


