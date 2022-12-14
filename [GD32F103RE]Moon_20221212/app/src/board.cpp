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

#include <board.h>

ER_TFTM032_3 lcd;
Bmp565Buffer brush(20000);
CAT24C256 eeprom;
FunctionQueue functionQueue(16);

void initBoard(void)
{
	using namespace define::gpio;
	
	// SPI1 초기화
	gpioA.setAsAltFunc(5, altfunc::PA5_SPI1_SCK, ospeed::FAST);
	gpioA.setAsAltFunc(6, altfunc::PA6_SPI1_MISO, ospeed::FAST);
	gpioA.setAsAltFunc(7, altfunc::PA7_SPI1_MOSI, ospeed::FAST);
	gpioC.setAsOutput(0, ospeed::FAST);
	gpioC.setAsOutput(1, ospeed::FAST);
	
	spi1.enableClock();
	spi1.initialize();
	spi1.enableInterrupt();
	
	// ILI9341 초기화
	ER_TFTM032_3::Config lcdConfig
	{
		spi1,				//drv::Spi &peri;
		{&gpioC, 0},		//config::gpio::Set chipSelect;
		{&gpioC, 1},		//config::gpio::Set dataCommand;
		{0, 0}				//config::gpio::Set reset;
	};

	lcd.setConfig(lcdConfig);
	lcd.initialize();
	lcd.setBmp565Buffer(brush);
	lcd.setBackgroundColor(0x00, 0x00, 0x00);
	lcd.setDirection(false, false, false);
	lcd.clear();

	// I2C2 초기화
	gpioB.setAsAltFunc(10, altfunc::PB10_I2C2_SCL);
	gpioB.setAsAltFunc(11, altfunc::PB11_I2C2_SDA);

	i2c2.enableClock();
	i2c2.init(define::i2c::speed::STANDARD);
	i2c2.enableInterrupt();

	// EEPROM 초기화
	CAT24C256::Config eepromConfig
	{
		i2c2,	//drv::I2c &peri;
		{0, 0},	//config::gpio::Set writeProtectPin;
		0		//unsigned char addr;
	};

	eeprom.init(eepromConfig);

	// CAN 초기화
	gpioA.setAsInput(11);	// CAN_RX
	gpioA.setAsAltFunc(12, altfunc::PA12_CAN_TX);
	
	can1.enableClock(true);
	can1.initialize(250000, 24);	// 250kbps, 수신 패킷 버퍼 64개
	can1.setExtendedMaskFilter(0, 0, 0); // 필터 전체 수신 설정
	can1.enableInterrupt(true);

//	// SDIO 초기화
//	gpioC.setAsAltFunc(8, altfunc::PC8_SDIO_D0);
//	gpioC.setAsAltFunc(9, altfunc::PC9_SDIO_D1);
//	gpioC.setAsAltFunc(10, altfunc::PC10_SDIO_D2);
//	gpioC.setAsAltFunc(11, altfunc::PC11_SDIO_D3);
//	gpioC.setAsAltFunc(12, altfunc::PC12_SDIO_CK);
//	gpioD.setAsAltFunc(2, altfunc::PD2_SDIO_CMD);

//	sdmmc.setClockEn(true);
//	sdmmc.init();
//	sdmmc.setVcc(3.3);
//	sdmmc.setDetectPin({&gpioC, 13});
//	sdmmc.setInterruptEn(true);
////	sdmmc.setDetectionIsr(isr_detectSdMemory);
//	sdmmc.start();
}
