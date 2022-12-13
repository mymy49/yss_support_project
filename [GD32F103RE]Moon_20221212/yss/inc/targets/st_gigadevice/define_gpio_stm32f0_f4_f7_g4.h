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

#ifndef YSS_DRV_GPIO_ST_TYPE_A_DEFINE__H_
#define YSS_DRV_GPIO_ST_TYPE_A_DEFINE__H_

#include <drv/mcu.h>

namespace define
{
namespace gpio
{
namespace altfunc
{
#if defined(STM32F4) || defined(STM32F7)
enum
{
	PA0_TIM2_CH1 = 1,
	PA0_TIM2_ETR = 1,
	PA0_TIM5_CH1 = 2,
	PA0_USART2_CTS = 7,
	PA0_UART4_TX = 8,
	PA0_ETH_MII_CRS = 11,
	PA0_EVENTOUT = 15,

	PA1_TIM2_CH2 = 1,
	PA1_TIM5_CH2 = 2,
	PA1_USART2_RTS = 7,
	PA1_UART4_RX = 8,
	PA1_ETH_MII_RX_CLK = 11,
	PA1_ETH_RMII_REF_CLK = 11,
	PA1_EVENTOUT = 15,

	PA2_TIM2_CH3 = 1,
	PA2_TIM5_CH3 = 2,
	PA2_TIM9_CH1 = 3,
	PA2_USART2_TX = 7,
	PA2_ETH_MDIO = 11,
	PA2_EVENTOUT = 15,

	PA3_TIM2_CH4 = 1,
	PA3_TIM5_CH4 = 2,
	PA3_TIM9_CH2 = 3,
	PA3_USART2_RX = 7,
	PA3_OTG_HS_ULPI_D0 = 10,
	PA3_ETH_MII_COL = 11,
	PA3_LCD_B5 = 14,
	PA3_EVENTOUT = 15,
	
	PA4_SPI1_NSS = 5,
	PA4_SPI3_NSS = 6,
	PA4_I2S3_WS = 6,
	PA4_USART2_CK = 7,
	PA4_OTG_HS_SOF = 12,
	PA4_DCMI_HSYNC = 13,
	PA4_LCD_VSYNC = 14,
	PA4_EVENTOUT = 15,
	
	PA5_TIM2_CH1 = 1,
	PA5_TIM2_ETR = 1,
	PA5_TIM8_CH1N = 3,
	PA5_SPI1_SCK = 5,
	PA5_OTG_HS_ULPI_CK = 10,
	PA5_EVENTOUT = 15,

	PA6_TIM1_BKIN = 1,
	PA6_TIM3_CH1 = 2,
	PA6_TIM8_BKIN = 3,
	PA6_SPI1_MISO = 5,
	PA6_TIM13_CH1 = 9,
	PA6_DCMI_PIXCLK = 13,
	PA6_LCD_G2 = 14,
	PA6_EVENTOUT = 15,

	PA7_TIM1_CH1N = 1,
	PA7_TIM3_CH2 = 2,
	PA7_TIM8_CH1N = 3,
	PA7_SPI1_MOSI = 5,
	PA7_TIM14_CH1 = 9,
	PA7_ETH_MII_RX_DV = 11,
	PA7_ETH_RMII_CRS_DV = 11,
	PA7_EVENTOUT = 15,

	PA8_MCO1 = 0,
	PA8_TIM1_CH1 = 1,
	PA8_I2C3_SCL = 4,
	PA8_USART1_CK = 7,
	PA8_OTG_FS_SOF = 10,
	PA8_LCD_R6 = 14,
	PA8_EVENTOUT = 15,

	PA9_TIM1_CH2 = 1,
	PA9_I2C3_SMBA = 4,
	PA9_USART1_TX = 7,
	PA9_DCMI_D0 = 13,
	PA9_EVENTOUT = 15,

	PA10_TIM1_CH3 = 1,
	PA10_USART1_RX = 7,
	PA10_OTG_FS_ID = 10,
	PA10_DCMI_D1 = 13,
	PA10_EVENTOUT = 15,

	PA11_TIM1_CH4 = 1,
	PA11_USART1_CTS = 7,
	PA11_CAN1_RX = 9,
	PA11_OTG_FS_DM = 10,
	PA11_LCD_R4 = 14,
	PA11_EVENTOUT = 15,

	PA12_TIM1_ETR = 1,
	PA12_USART1_RTS = 7,
	PA12_CAN1_TX = 9,
	PA12_OTG_FS_DP = 10,
	PA12_LCD_R5 = 14,
	PA12_EVENTOUT = 15,

	PA13_JTMS = 0,
	PA13_SWDIO = 0,
	PA13_EVENTOUT = 15,

	PA14_JTCK = 0,
	PA14_SWCLK = 0,
	PA14_EVENTOUT = 15,

	PA15_JTDI = 0,
	PA15_TIM2_CH1 = 1,
	PA15_TIM2_ETR = 1,
	PA15_SPI1_NSS = 5,
	PA15_SPI3_NSS = 6,
	PA15_I2S3_WS = 6,
	PA15_EVENTOUT = 15,

	PB0_TIM1_CH2N = 1,
	PB0_TIM3_CH3 = 2,
	PB0_TIM8_CH2N = 3,
	PB0_LCD_R3 = 9,
	PB0_OTG_HS_ULPI_D1 = 10,
	PB0_ETH_MII_RXD2 = 11,
	PB0_EVENTOUT = 15,

	PB1_TIM1_CH3N = 1,
	PB1_TIM3_CH4 = 2,
	PB1_TIM8_CH3N = 3,
	PB1_LCD_R6 = 9,
	PB1_OTG_HS_ULPI_D2 = 10,
	PB1_ETH_MII_RXD3 = 11,
	PB1_EVENTOUT = 15,

	PB2_EVENTOUT = 15,

	PB3_JTDO = 0,
	PB3_TRACESWO = 0,
	PB3_TIM2_CH2 = 1,
	PB3_SPI1_SCK = 5,
	PB3_SPI3_SCK = 6,
	PB3_I2S3_CK = 6,
	PB3_EVENTOUT = 15,

	PB4_NJTRST = 0,
	PB4_TIM3_CH1 = 2,
	PB4_SPI1_MISO = 5,
	PB4_SPI3_MISO = 6,
	PB4_I2S3_EXT_SD = 7,
	PB4_EVENTOUT = 15,

	PB5_TIM3_CH2 = 2,
	PB5_I2C1_SMBA = 4,
	PB5_SPI1_MOSI = 5,
	PB5_SPI3_MOSI = 6,
	PB5_I2S3_SD = 6,
	PB5_CAN2_RX = 9,
	PB5_OTG_HS_ULPI_D7 = 10,
	PB5_ETH_PPS_OUT = 11,
	PB5_FMC_SDCKE1 = 12,
	PB5_DCMI_D10 = 13,
	PB5_EVENTOUT = 15,

	PB6_TIM4_CH1 = 2,
	PB6_I2C1_SCL = 4,
	PB6_USART1_TX = 7,
	PB6_CAN2_TX = 9,
	PB6_FMC_SDNE1 = 12,
	PB6_DCMI_D5 = 13,
	PB6_EVENTOUT = 15,

	PB7_TIM4_CH2 = 2,
	PB7_I2C1_SDA = 4,
	PB7_USART1_RX = 7,
	PB7_FMC_NL = 12,
	PB7_DCMI_VSYNC = 13,
	PB7_EVENTOUT = 15,

	PB8_TIM4_CH3 = 2,
	PB8_TIM10_CH1 = 3,
	PB8_I2C1_SCL = 4,
	PB8_CAN1_RX = 9,
	PB8_ETH_MII_TXD3 = 11,
	PB8_SDIO_D4 = 12,
	PB8_DCMI_D6 = 13,
	PB8_LCD_B6 = 14,
	PB8_EVENTOUT = 15,

	PB9_TIM4_CH4 = 2,
	PB9_TIM11_CH1 = 3,
	PB9_I2C1_SDA = 4,
	PB9_SPI2_NSS = 5,
	PB9_I2S2_WS = 5,
	PB9_CAN1_TX = 9,
	PB9_SDIO_D5 = 12,
	PB9_DCMI_D7 = 13,
	PB9_LCD_B7 = 14,
	PB9_EVENTOUT = 15,

	PB10_TIM2_CH3 = 1,
	PB10_I2C2_SCL = 4,
	PB10_SPI2_SCK = 5,
	PB10_I2S2_CK = 5,
	PB10_USART3_TX = 7,
	PB10_OTG_HS_ULPI_D3 = 10,
	PB10_ETH_MII_RX_ER = 11,
	PB10_LCD_G4 = 14,
	PB10_EVENTOUT = 15,

	PB11_TIM2_CH4 = 1,
	PB11_I2C2_SDA = 4,
	PB11_USART3_RX = 7,
	PB11_OTG_HS_ULPI_D4 = 10,
	PB11_ETH_MII_TX_EN = 11,
	PB11_ETH_RMII_TX_EN = 11,
	PB11_LCD_G5 = 14,
	PB11_EVENTOUT = 15,

	PB12_TIM1_BKIN = 1,
	PB12_I2C2_SMBA = 4,
	PB12_SPI2_NSS = 5,
	PB12_I2S2_WS = 5,
	PB12_USART3_CK = 7,
	PB12_CAN2_RX = 9,
	PB12_OTG_HSULPI_D5 = 10,
	PB12_ETH_MII_TXD0 = 11,
	PB12_ETH_RMII_TXD0 = 11,
	PB12_OTG_HS_ID = 12,
	PB12_EVENTOUT = 15,

	PB13_TIM1_CH1N = 1,
	PB13_SPI2_SCK = 5,
	PB13_I2S2_CK = 5,
	PB13_USART3_CTS = 7,
	PB13_CAN2_TX = 9,
	PB13_OTG_HS_ULPI_D6 = 10,
	PB13_ETH_MII_TXD1 = 11,
	PB13_EVENTOUT = 15,

	PB14_TIM1_CH2N = 1,
	PB14_TIM8_CH2N = 3,
	PB14_SPI2_MISO = 5,
	PB14_I2S2_EXT_SD = 6,
	PB14_USART3_RTS = 7,
	PB14_TIM12_CH1 = 9,
	PB14_OTG_HS_DM = 12,
	PB14_EVENTOUT = 15,

	PB15_RTC_REFIN = 0,
	PB15_TIM1_CH3N = 1,
	PB15_TIM8_CH3N = 3,
	PB15_SPI2_MOSI = 5,
	PB15_I2S2_SD = 5,
	PB15_TIM12_CH2 = 9,
	PB15_OTG_HS_DP = 12,
	PB15_EVENTOUT = 15,

	PC0_OTG_HS_ULPI_STP = 10,
	PC0_FMC_SDNWE = 12,
	PC0_EVENTOUT = 15,

	PC1_ETH_MDC = 11,
	PC1_EVENTOUT = 15,
	
	PC2_SPI2_MISO = 5,
	PC2_I2S2EXT_SD = 6,
	PC2_OTG_HS_ULPI_DIR = 10,
	PC2_ETH_MII_TXD2 = 11,
	PC2_FMC_SDNE0 = 12,
	PC2_EVENTOUT = 15,

	PC3_SPI2_MOSI = 5,
	PC3_I2S2_SD = 5,
	PC3_OTG_HS_ULPI_NXT = 10,
	PC3_ETH_MII_TX_CLK = 11,
	PC3_FMC_SDCKE0 = 12,
	PC3_EVENTOUT = 15,

	PC4_ETH_MII_RXD0 = 11,
	PC4_ETH_RMII_RXD0 = 11,
	PC4_EVENTOUT = 15,

	PC5_ETH_MII_RXD1 = 11,
	PC5_ETH_RMII_RXD1 = 11,
	PC5_EVENTOUT = 15,

	PC6_TIM3_CH1 = 2,
	PC6_TIM8_CH1 = 3,
	PC6_I2S2_MCK = 5,
	PC6_USART2_TX = 8,
	PC6_SDIO_D6 = 12,
	PC6_DCMI_D0 = 13,
	PC6_LCD_HSYNC = 14,
	PC6_EVENTOUT = 15,

	PC7_TIM3_CH2 = 2,
	PC7_TIM8_CH2 = 3,
	PC7_I2S3_MCK = 6,
	PC7_USART6_RX = 8,
	PC7_SDIO_D7 = 12,
	PC7_DCMI_D1 = 13,
	PC7_LCD_G6 = 14,
	PC7_EVENTOUT = 15,

	PC8_TIM3_CH3 = 2,
	PC8_TIM8_CH3 = 3,
	PC8_USART6_CK = 8,
	PC8_SDIO_D0 = 12,
	PC8_DCMI_D2 = 13,
	PC8_EVENTOUT = 15,

	PC9_MCO2 = 0,
	PC9_TIM3_CH4 = 2,
	PC9_TIM8_CH4 = 3,
	PC9_I2C3_SDA = 4,
	PC9_I2S_CKIN = 5,
	PC9_SDIO_D1 = 12,
	PC9_DCMI_D3 = 13,
	PC9_EVENTOUT = 15,

	PC10_SPI3_SCK = 6,
	PC10_I2S3_CK = 6,
	PC10_USART3_TX = 7,
	PC10_UART4_TX = 8,
	PC10_SDIO_D2 = 12,
	PC10_DCMI_D8 = 13,
	PC10_LCD_R2 = 14,
	PC10_EVENTOUT = 15,

	PC11_I2SEXT_SD = 5,
	PC11_SPI3_MISO = 6,
	PC11_USART3_RX = 7,
	PC11_UART4_RX = 8,
	PC11_SDIO_D3 = 12,
	PC11_DCMI_D4 = 13,
	PC11_EVENTOUT = 15,

	PC12_SPI3_MOSI = 6,
	PC12_I2S3_SD = 6,
	PC12_USART3_CK = 7,
	PC12_UART5_TX = 8,
	PC12_SDIO_CK = 12,
	PC12_DCMI_D9 = 13,
	PC12_EVENTOUT = 15,

	PC13_EVENTOUT = 15,

	PC14_EVENTOUT = 15,

	PC15_EVENTOUT = 15,

	PD0_CAN1_RX = 9,
	PD0_FMC_D2 = 12,
	PD0_EVENTOUT = 15,

	PD1_CAN1_TX = 9,
	PD1_FMC_D3 = 12,
	PD1_EVENTOUT = 15,

	PD2_TIM3_ETR = 2,
	PD2_UART5_RX = 8,
	PD2_SDIO_CMD = 12,
	PD2_DCMI_D11 = 13,
	PD2_EVENTOUT = 15,

	PD3_SPI2_SCK = 5,
	PD3_I2S2_CK = 5,
	PD3_USART2_CTS = 7,
	PD3_FMC_CLK = 12,
	PD3_DCMI_D5 = 13,
	PD3_LCD_G7 = 14,
	PD3_EVENTOUT = 15,

	PD4_USART2_RTS = 7,
	PD4_FMC_NOE = 12,
	PD4_EVENTOUT = 15,

	PD5_USART2_TX = 7,
	PD5_FMC_NWE = 12,
	PD5_EVENTOUT = 15,

	PD6_SPI3_MOSI = 5,
	PD6_I2S3_SD = 5,
	PD6_SAI1_SD_A = 6,
	PD6_USART2_RX = 7,
	PD6_FMC_NWAIT = 12,
	PD6_DCMI_D10 = 13,
	PD6_LCD_B2 = 14,
	PD6_EVENTOUT = 15,

	PD7_USART2_CK = 7,
	PD7_FMC_NE1 = 12,
	PD7_FMC_NCE2 = 12,
	PD7_EVENTOUT = 15,

	PD8_USART3_TX = 7,
	PD8_FMC_D13 = 12,
	PD8_EVENTOUT = 15,

	PD9_USART3_RX = 7,
	PD9_FMC_D14 = 12,
	PD9_EVENTOUT = 15,

	PD10_USART3_CK = 7,
	PD10_FMC_D15 = 12,
	PD10_LCD_B3 = 14,
	PD10_EVENTOUT = 15,

	PD11_USART3_CTS = 7,
	PD11_FMC_A16 = 12,
	PD11_EVENTOUT = 15,

	PD12_TIM4_CH1 = 2,
	PD12_USART3_RTS = 7,
	PD12_FMC_A17 = 12,
	PD12_EVENTOUT = 15,

	PD13_TIM4_CH2 = 2,
	PD13_FMC_A18 = 12,
	PD13_EVENTOUT = 15,

	PD14_TIM4_CH3 = 2,
	PD14_FMC_D0 = 12,
	PD14_EVENTOUT = 15,

	PD15_TIM4_4 = 2,
	PD15_FMC_D1 = 12,
	PD15_EVENTOUT = 15,

	PE0_TIM4_ETR = 2,
	PE0_UART8_RX = 8,
	PE0_FMC_NBL0 = 12,
	PE0_DCMI_D2 = 13,
	PE0_EVENTOUT = 15,

	PE1_UART8_TX = 8,
	PE1_FMC_NBL1 = 12,
	PE1_DCMI_D3 = 13,
	PE1_EVENTOUT = 15,

	PE2_TRACECLK = 0,
	PE2_SPI4_CLK = 5,
	PE2_SAI1_MCLK_A = 6,
	PE2_ETH_MII_TXD3 = 11,
	PE2_FMC_A23 = 12,
	PE2_EVENTOUT = 15,

	PE3_TRACED0 = 0,
	PE3_SAI1_SD_B = 6,
	PE3_FMC_A19 = 12,
	PE3_EVENTOUT = 15,

	PE4_TRACED1 = 0,
	PE4_SPI4_NSS = 5,
	PE4_SAI1_FS_A = 6,
	PE4_FMC_A20 = 12,
	PE4_DCMI_D4 = 13,
	PE4_LCD_B0 = 14,
	PE4_EVENTOUT = 15,

	PE5_TRACED2 = 0,
	PE5_TIM9_CH1 = 3,
	PE5_SPI4_MISO = 5,
	PE5_SAI1_SCK_A = 6,
	PE5_FMC_A21 = 12,
	PE5_DCMI_D6 = 13,
	PE5_LCD_G0 = 14,
	PE5_EVENTOUT = 15,

	PE6_TRACED3 = 0,
	PE6_TIM9_CH2 = 3,
	PE6_SPI4_MOSI = 5,
	PE6_SAI1_SD_A = 6,
	PE6_FMC_A22 = 12,
	PE6_DCMI_D7 = 13,
	PE6_LCD_G1 = 14,
	PE6_EVENTOUT = 15,

	PE7_TIM1_ETR = 1,
	PE7_UART7_RX = 8,
	PE7_FMC_D4 = 12,
	PE7_EVENTOUT = 15,

	PE8_TIM1_CH1N = 1,
	PE8_UART7_TX = 8,
	PE8_FMC_D5 = 12,
	PE8_EVENTOUT = 15,

	PE9_TIM1_CH1 = 1,
	PE9_FMC_D6 = 12,
	PE9_EVENTOUT = 15,

	PE10_TIM1_CH2N = 1,
	PE10_FMC_D7 = 12,
	PE10_EVENTOUT = 15,

	PE11_TIM1_CH2 = 1,
	PE11_SPI4_NSS = 5,
	PE11_FMC_D8 = 12,
	PE11_LCD_G3 = 14,
	PE11_EVENTOUT = 15,

	PE12_TIM1_CH3N = 1,
	PE12_SPI4_SCK = 5,
	PE12_FMC_D9 = 12,
	PE12_LCD_B4 = 14,
	PE12_EVENTOUT = 15,

	PE13_TIM1_CH3 = 1,
	PE13_SPI4_MISO = 5,
	PE13_FMC_D10 = 12,
	PE13_LCD_DE = 14,
	PE13_EVENTOUT = 15,

	PE14_TIM1_CH4 = 1,
	PE14_SPI4_MOSI = 5,
	PE14_FMC_D11 = 12,
	PE14_LCD_CLK = 14,
	PE14_EVENTOUT = 15,

	PE15_TIM1_BKIN = 1,
	PE15_FMC_D12 = 12,
	PE15_LCD_R7 = 14,
	PE15_EVENTOUT = 15,

	PF0_I2C2_SDA = 4,
	PF0_FMC_A0 = 12,
	PF0_EVENTOUT = 15,

	PF1_I2C2_SCL = 4,
	PF1_FMC_A1 = 12,
	PF1_EVENTOUT = 15,

	PF2_I2C2_SMBA = 4,
	PF2_FMC_A2 = 12,
	PF2_EVENTOUT = 15,

	PF3_FMC_A3 = 12,
	PF3_EVENTOUT = 15,

	PF4_FMC_A4 = 12,
	PF4_EVENTOUT = 15,

	PF5_FMC_A5 = 12,
	PF5_EVENTOUT = 15,

	PF6_TIM10_CH1 = 3,
	PF6_SPI5_NSS = 5,
	PF6_SAI1_SD_B = 6,
	PF6_UART7_RX = 8,
	PF6_FMC_NIORD = 12,
	PF6_EVENTOUT = 15,

	PF7_TIM11_CH1 = 3,
	PF7_SPI5_SCK = 5,
	PF7_SAI1_MCLK_B = 6,
	PF7_UART7_TX = 8,
	PF7_FMC_NREG = 12,
	PF7_EVENTOUT = 15,

	PF8_SPI5_MISO = 5,
	PF8_SAI1_SCK_B = 6,
	PF8_TIM13_CH1 = 9,
	PF8_FMC_NIOWR = 12,
	PF8_EVENTOUT = 15,

	PF9_SPI5_MOSI = 5,
	PF9_SAI1_FS_B = 6,
	PF9_TIM14_CH1 = 9,
	PF9_FMC_CD = 12,
	PF9_EVENTOUT = 15,

	PF10_FMC_INTR = 12,
	PF10_DCMI_D11 = 13,
	PF10_LCD_DE = 14,
	PF10_EVENTOUT = 15,

	PF11_SPI5_MOSI = 5,
	PF11_FMC_SDNRAS = 12,
	PF11_DCMI_D12 = 13,
	PF11_EVENTOUT = 15,

	PF12_FMC_A6 = 12,
	PF12_EVENTOUT = 15,

	PF13_FMC_A7 = 12,
	PF13_EVENTOUT = 15,

	PF14_FMC_A8 = 12,
	PF14_EVENTOUT = 15,

	PF15_FMC_A9 = 12,
	PF15_EVENTOUT = 15,

	PG0_FMC_A10 = 12,
	PG0_EVENTOUT = 15,

	PG1_FMC_A11 = 12,
	PG1_EVENTOUT = 15,

	PG2_FMC_A12 = 12,
	PG2_EVENTOUT = 15,

	PG3_FMC_A13 = 12,
	PG3_EVENTOUT = 15,

	PG4_FMC_A14 = 12,
	PG4_FMC_BA0 = 12,
	PG4_EVENTOUT = 15,

	PG5_FMC_A15 = 12,
	PG5_FMC_BA1 = 12,
	PG5_EVENTOUT = 15,
	
	PG6_FMC_INT2 = 12,
	PG6_DCMI_D12 = 13,
	PG6_LCD_R7 = 14,
	PG6_EVENTOUT = 15,

	PG7_USART6_CK = 8,
	PG7_FMC_INT3 = 12,
	PG7_DCMI_D13 = 13,
	PG7_LCD_CLK = 14,
	PG7_EVENTOUT = 15,

	PG8_SPI6_NSS = 5,
	PG8_USART6_RTS = 8,
	PG8_ETH_PPS_OUT = 11,
	PG8_FMC_SDCLK = 12,
	PG8_EVENTOUT = 15,

	PG9_USART6_RX = 8,
	PG9_FMC_NE2 = 12,
	PG9_FMC_NCE3 = 12,
	PG9_DCMI_VSYNC = 13,
	PG9_EVENTOUT = 15,

	PG10_LCD_G3 = 9,
	PG10_FMC_NCE4_1 = 12,
	PG10_FMC_NE3 = 12,
	PG10_DCMI_D2 = 13,
	PG10_LCD_B2 = 14,
	PG10_EVENTOUT = 15,

	PG11_ETH_MII_TX_EN = 11,
	PG11_ETH_RMII_TX_EN = 11,
	PG11_FMC_NCE4_2 = 12,
	PG11_DCMI_D3 = 13,
	PG11_LCD_B3 = 14,
	PG11_EVENTOUT = 15,

	PG12_SPI6_MISO = 5,
	PG12_USART6_RTS = 8,
	PG12_LCD_B4 = 9,
	PG12_FMC_NE4 = 12,
	PG12_LCD_B1 = 14,
	PG12_EVENTOUT = 15,

	PG13_SPI6_SCK = 5,
	PG13_USART6_CTS = 8,
	PG13_ETH_MII_TXD0 = 11,
	PG13_ETH_RMII_TXD0 = 11,
	PG13_FMC_A24 = 12,
	PG13_EVENTOUT = 15,

	PG14_SPI6_MOSI = 5,
	PG14_USART6_TX = 8,
	PG14_ETH_MII_TXD1 = 11,
	PG14_ETH_RMII_TXD1 = 11,
	PG14_FMC_A25 = 12,
	PG14_EVENTOUT = 15,

	PG15_USART6_CTS = 8,
	PG15_FMC_SDNCAS = 12,
	PG15_DCMI_D13 = 13,
	PG15_EVENTOUT = 15,

	PH0_EVENTOUT = 15,

	PH1_EVENTOUT = 15,

	PH2_ETH_MII_CRS = 11,
	PH2_FMC_SDCKE0 = 12,
	PH2_LCD_R0 = 14,
	PH2_EVENTOUT = 15,

	PH3_ETH_MII_COL = 11,
	PH3_FMC_SDNE0 = 12,
	PH3_LCD_R1 = 14,
	PH3_EVENTOUT = 15,
	
	PH4_I2C2_SCL = 4,
	PH4_OTG_HS_ULPI_NXT = 10,
	PH4_EVENTOUT = 15,

	PH5_I2C2_SDA = 4,
	PH5_SPI5_NSS = 5,
	PH5_FMC_SDNWE = 12,
	PH5_EVENTOUT = 15,

	PH6_I2C2_SMBA = 4,
	PH6_SPI5_SCK = 5,
	PH6_TIM12_CH1 = 9,
	PH6_FMC_SDNE1 = 12,
	PH6_DCMI_D8 = 13,

	PH7_I2C3_SCL = 4,
	PH7_SPI5_MISO = 5,
	PH7_ETH_MII_RXD3 = 11,
	PH7_SDCKE1 = 12,
	PH7_DCMI_D9 = 13,

	PH8_I2C3_SDA = 4,
	PH8_FMC_D16 = 12,
	PH8_DCMI_HSYNC = 13,
	PH8_LCD_R2 = 14,
	PH8_EVENTOUT = 15,

	PH9_I2C3_SMBA = 4,
	PH9_TIM12_CH2 = 9,
	PH9_FMC_D17 = 12,
	PH9_DCMI_D0 = 13,
	PH9_LCD_R3 = 14,
	PH9_EVENTOUT = 15,

	PH10_TIM5_CH1 = 2,
	PH10_FMC_D18 = 12,
	PH10_DCMI_D1 = 13,
	PH10_LCD_R4 = 14,
	PH10_EVENTOUT = 15,

	PH11_TIM5_CH2 = 2,
	PH11_FMC_D19 = 12,
	PH11_DCMI_D2 = 13,
	PH11_LCD_R5 = 14,
	PH11_EVENTOUT = 15,

	PH12_TIM5_CH3 = 2,
	PH12_FMC_D20 = 12,
	PH12_DCMI_D3 = 13,
	PH12_LCD_R6 = 14,
	PH12_EVENTOUT = 15,

	PH13_TIM8_CH1N = 3,
	PH13_CAN1_TX = 9,
	PH13_FMC_D21 = 12,
	PH13_LCD_G2 = 14,
	PH13_EVENTOUT = 15,

	PH14_TIM8_CH2N = 3,
	PH14_FMC_D22 = 12,
	PH14_DCMI_D4 = 13,
	PH14_LCD_G3 = 14,
	PH14_EVENTOUT = 15,

	PH15_TIM8_CH3N = 3,
	PH15_FMC_D23 = 12,
	PH15_DCMI_D11 = 13,
	PH15_LCD_G4 = 14,
	PH15_EVENTOUT = 15,

	PI0_TIM5_CH4 = 2,
	PI0_SPI2_NSS = 5,
	PI0_I2S2_WS = 5,
	PI0_FMC_D24 = 12,
	PI0_DCMI_D13 = 13,
	PI0_LCD_G5 = 14,
	PI0_EVENTOUT = 15,

	PI1_SPI2_SCK = 5,
	PI1_I2S2_CK = 5,
	PI1_FMC_D25 = 12,
	PI1_DCMI_D8 = 13,
	PI1_LCD_G6 = 14,
	PI1_EVENTOUT = 15,

	PI2_TIM8_CH4 = 3,
	PI2_SPI2_MISO = 5,
	PI2_I2S2_EXT_SD = 6,
	PI2_FMC_D26 = 12,
	PI2_DCMI_D9 = 13,
	PI2_LCD_G7 = 14,
	PI2_EVENTOUT = 15,

	PI3_TIM8_ETR = 3,
	PI3_SPI2_MOSI = 5,
	PI3_I2S2_SD = 5,
	PI3_FCM_D27 = 12,
	PI3_DCMI_D10 = 13,
	PI3_EVENTOUT = 15,

	PI4_TIM8_BKIN = 3,
	PI4_FMC_NBL2 = 12,
	PI4_DCMI_D5 = 13,
	PI4_LCD_B4 = 14,
	PI4_EVENTOUT = 15,

	PI5_TIM8_CH1 = 3,
	PI5_FMC_NBL3 = 12,
	PI5_DCMI_VSYNC = 13,
	PI5_LCD_B5 = 14,
	PI5_EVENTOUT = 15,

	PI6_TIM8_CH2 = 3,
	PI6_FMC_D28 = 12,
	PI6_DCMI_D6 = 13,
	PI6_LCD_B6 = 14,
	PI6_EVENTOUT = 15,

	PI7_TIM8_CH3 = 3,
	PI7_FMC_D29 = 12,
	PI7_DCMI_D7 = 13,
	PI7_LCD_B7 = 14,
	PI7_EVENTOUT = 15,

	PI8_EVENTOUT = 15,

	PI9_CAN1_RX = 9,
	PI9_FMC_D30 = 12,
	PI9_LCD_VSYNC = 14,
	PI9_EVENTOUT = 15,


	PI10_ETH_MII_RX_ER = 11,
	PI10_FMC_D31 = 12,
	PI10_LCD_HSYNC = 14,
	PI10_EVENTOUT = 15,

	PI11_OTG_HS_ULPI_DIR = 10,
	PI11_EVENTOUT = 15,

	PI12_LCD_HSYNC = 14,
	PI12_EVENTOUT = 15,

	PI13_LCD_VSYNC = 14,
	PI13_EVENTOUT = 15,

	PI14_LCD_CLK = 14,
	PI14_EVENTOUT = 15,

	PI15_LCD_R0 = 14,
	PI15_EVENTOUT = 15,

	PJ0_LCD_R1 = 14,
	PJ0_EVENTOUT = 15,

	PJ1_LCD_R2 = 14,
	PJ1_EVENTOUT = 15,

	PJ2_LCD_R3 = 14,
	PJ2_EVENTOUT = 15,

	PJ3_LCD_R4 = 14,
	PJ3_EVENTOUT = 15,

	PJ4_LCD_R5 = 14,
	PJ4_EVENTOUT = 15,

	PJ5_LCD_R6 = 14,
	PJ5_EVENTOUT = 15,

	PJ6_LCD_R7 = 14,
	PJ6_EVENTOUT = 15,

	PJ7_LCD_G0 = 14,
	PJ7_EVENTOUT = 15,

	PJ8_LCD_G1 = 14,
	PJ8_EVENTOUT = 15,

	PJ9_LCD_G2 = 14,
	PJ9_EVENTOUT = 15,

	PJ10_LCD_G3 = 14,
	PJ10_EVENTOUT = 15,

	PJ11_LCD_G4 = 14,
	PJ11_EVENTOUT = 15,

	PJ12_LCD_B0 = 14,
	PJ12_EVENTOUT = 15,

	PJ13_LCD_B1 = 14,
	PJ13_EVENTOUT = 15,

	PJ14_LCD_B2 = 14,
	PJ14_EVENTOUT = 15,

	PJ15_LCD_B3 = 14,
	PJ15_EVENTOUT = 15,

	PK0_LCD_G5 = 14,
	PK0_EVENTOUT = 15,

	PK1_LCD_G6 = 14,
	PK1_EVENTOUT = 15,

	PK2_LCD_G7 = 14,
	PK2_EVENTOUT = 15,

	PK3_LCD_B4 = 14,
	PK3_EVENTOUT = 15,

	PK4_LCD_B5 = 14,
	PK4_EVENTOUT = 15,

	PK5_LCD_B6 = 14,
	PK5_EVENTOUT = 15,

	PK6_LCD_B7 = 14,
	PK6_EVENTOUT = 15,

	PK7_LCD_DE = 14,
	PK7_EVENTOUT = 15,
};

#elif defined(STM32F7)
enum
{
	PA0_TIM2_CH1 = 1,
	PA0_TIM2_ETR = 1,
	PA0_TIM5_CH1 = 2,
	PA0_TIM8_ETR = 3,
	PA0_USART2_CTS = 7,
	PA0_UART4_TX = 8,
	PA0_SAI2_SD_B = 10,
	PA0_ETH_MII_CRS = 11,
	PA0_EVENTOUT = 15,

	PA1_TIM2_CH2 = 1,
	PA1_TIM5_CH2 = 2,
	PA1_USART2_RTS = 7,
	PA1_UART4_RX = 8,
	PA1_QUADSPI_BK1_IO3 = 9,
	PA1_SAI2_MCK_B = 10,
	PA1_ETH_MII_RX_CLK = 11,
	PA1_ETH_RMII_REF_CLK = 11,
	PA1_LCD_R2 = 14,
	PA1_EVENTOUT = 15,

	PA2_TIM2_CH3 = 1,
	PA2_TIM5_CH3 = 2,
	PA2_TIM9_CH1 = 3,
	PA2_USART2_TX = 7,
	PA2_SAI2_SCK_B = 8,
	PA2_ETH_MDIO = 11,
	PA2_LCD_R1 = 14,
	PA2_EVENTOUT = 15,

	PA3_TIM2_CH4 = 1,
	PA3_TIM5_CH4 = 2,
	PA3_TIM9_CH2 = 3,
	PA3_USART2_RX = 7,
	PA3_OTG_HS_ULPI_D0 = 10,
	PA3_ETH_MII_COL = 11,
	PA3_LCD_B5 = 14,
	PA3_EVENTOUT = 15,
	
	PA4_SPI1_NSS = 5,
	PA4_I2S1_WS = 5,
	PA4_SPI3_NSS = 6,
	PA4_I2S3_WS = 6,
	PA4_USART2_CK = 7,
	PA4_OTG_HS_SOF = 12,
	PA4_DCMI_HSYNC = 13,
	PA4_LCD_VSYNC = 14,
	PA4_EVENTOUT = 15,
	
	PA5_TIM2_CH1 = 1,
	PA5_TIM2_ETR = 1,
	PA5_TIM8_CH1N = 3,
	PA5_SPI1_SCK = 5,
	PA5_I2S1_CK = 5,
	PA5_OTG_HS_ULPI_CK = 10,
	PA5_LCD_R4 = 14,
	PA5_EVENTOUT = 15,

	PA6_TIM1_BKIN = 1,
	PA6_TIM3_CH1 = 2,
	PA6_TIM8_BKIN = 3,
	PA6_SPI1_MISO = 5,
	PA6_TIM13_CH1 = 9,
	PA6_DCMI_PIXCLK = 13,
	PA6_LCD_G2 = 14,
	PA6_EVENTOUT = 15,

	PA7_TIM1_CH1N = 1,
	PA7_TIM3_CH2 = 2,
	PA7_TIM8_CH1N = 3,
	PA7_SPI1_MOSI = 5,
	PA7_I2S1_SD = 5,
	PA7_TIM14_CH1 = 9,
	PA7_ETH_MII_RX_DV = 11,
	PA7_ETH_RMII_CRS_DV = 11,
	PA7_FMC_SD_NWE = 12,
	PA7_EVENTOUT = 15,

	PA8_MCO1 = 0,
	PA8_TIM1_CH1 = 1,
	PA8_TIM8_BKIN2 = 3,
	PA8_I2C3_SCL = 4,
	PA8_USART1_CK = 7,
	PA8_OTG_FS_SOF = 10,
	PA8_LCD_R6 = 14,
	PA8_EVENTOUT = 15,

	PA9_TIM1_CH2 = 1,
	PA9_I2C3_SMBA = 4,
	PA9_SPI2_SCK = 5,
	PA9_I2S2_CK = 5,
	PA9_USART1_TX = 7,
	PA9_DCMI_D0 = 13,
	PA9_EVENTOUT = 15,

	PA10_TIM1_CH3 = 1,
	PA10_USART1_RX = 7,
	PA10_OTG_FS_ID = 10,
	PA10_DCMI_D1 = 13,
	PA10_EVENTOUT = 15,

	PA11_TIM1_CH4 = 1,
	PA11_USART1_CTS = 7,
	PA11_CAN1_RX = 9,
	PA11_OTG_FS_DM = 10,
	PA11_LCD_R4 = 14,
	PA11_EVENTOUT = 15,

	PA12_TIM1_ETR = 1,
	PA12_USART1_RTS = 7,
	PA12_SAI2_FS_B = 8,
	PA12_CAN1_TX = 9,
	PA12_OTG_FS_DP = 10,
	PA12_LCD_R5 = 14,
	PA12_EVENTOUT = 15,

	PA13_JTMS = 0,
	PA13_SWDIO = 0,
	PA13_EVENTOUT = 15,

	PA14_JTCK = 0,
	PA14_SWCLK = 0,
	PA14_EVENTOUT = 15,

	PA15_JTDI = 0,
	PA15_TIM2_CH1 = 1,
	PA15_TIM2_ETR = 1,
	PA15_HDMI_CEC = 4,
	PA15_SPI1_NSS = 5,
	PA15_I2S1_WS = 5,
	PA15_SPI3_NSS = 6,
	PA15_I2S3_WS = 6,
	PA15_UART4_RTS = 8,
	PA15_EVENTOUT = 15,

	PB0_TIM1_CH2N = 1,
	PB0_TIM3_CH3 = 2,
	PB0_TIM8_CH2N = 3,
	PB0_UART4_CTS = 8,
	PB0_LCD_R3 = 9,
	PB0_OTG_HS_ULPI_D1 = 10,
	PB0_ETH_MII_RXD2 = 11,
	PB0_EVENTOUT = 15,

	PB1_TIM1_CH3N = 1,
	PB1_TIM3_CH4 = 2,
	PB1_TIM8_CH3N = 3,
	PB1_LCD_R6 = 9,
	PB1_OTG_HS_ULPI_D2 = 10,
	PB1_ETH_MII_RXD3 = 11,
	PB1_EVENTOUT = 15,

	PB2_SAI1_SD_A = 6,
	PB2_SPI3_MOSI = 7,
	PB2_I2S3_SD = 8,
	PB2_QUADSPI_CLK = 9,
	PB2_EVENTOUT = 15,

	PB3_JTDO = 0,
	PB3_TRACESWO = 0,
	PB3_TIM2_CH2 = 1,
	PB3_SPI1_SCK = 5,
	PB3_I2S1_CK = 5,
	PB3_SPI3_SCK = 6,
	PB3_I2S3_CK = 6,
	PB3_EVENTOUT = 15,

	PB4_NJTRST = 0,
	PB4_TIM3_CH1 = 2,
	PB4_SPI1_MISO = 5,
	PB4_SPI3_MISO = 6,
	PB4_SPI2_NSS = 7,
	PB4_I2S2_WS = 7,
	PB4_EVENTOUT = 15,

	PB5_TIM3_CH2 = 2,
	PB5_I2C1_SMBA = 4,
	PB5_SPI1_MOSI = 5,
	PB5_I2S1_SD = 5,
	PB5_SPI3_MOSI = 6,
	PB5_I2S3_SD = 6,
	PB5_CAN2_RX = 9,
	PB5_OTG_HS_ULPI_D7 = 10,
	PB5_ETH_PPS_OUT = 11,
	PB5_FMC_SDCKE1 = 12,
	PB5_DCMI_D10 = 13,
	PB5_EVENTOUT = 15,

	PB6_TIM4_CH1 = 2,
	PB6_HDMI_CEC = 3,
	PB6_I2C1_SCL = 4,
	PB6_USART1_TX = 7,
	PB6_CAN2_TX = 9,
	PB6_QUADSPI_BK1_NCS = 10,
	PB6_FMC_SDNE1 = 12,
	PB6_DCMI_D5 = 13,
	PB6_EVENTOUT = 15,

	PB7_TIM4_CH2 = 2,
	PB7_I2C1_SDA = 4,
	PB7_USART1_RX = 7,
	PB7_FMC_NL = 12,
	PB7_DCMI_VSYNC = 13,
	PB7_EVENTOUT = 15,

	PB8_TIM4_CH3 = 2,
	PB8_TIM10_CH1 = 3,
	PB8_I2C1_SCL = 4,
	PB8_CAN1_RX = 9,
	PB8_ETH_MII_TXD3 = 11,
	PB8_SDIO_D4 = 12,
	PB8_DCMI_D6 = 13,
	PB8_LCD_B6 = 14,
	PB8_EVENTOUT = 15,

	PB9_TIM4_CH4 = 2,
	PB9_TIM11_CH1 = 3,
	PB9_I2C1_SDA = 4,
	PB9_SPI2_NSS = 5,
	PB9_I2S2_WS = 5,
	PB9_CAN1_TX = 9,
	PB9_SDMMC1_D5 = 12,
	PB9_DCMI_D7 = 13,
	PB9_LCD_B7 = 14,
	PB9_EVENTOUT = 15,

	PB10_TIM2_CH3 = 1,
	PB10_I2C2_SCL = 4,
	PB10_SPI2_SCK = 5,
	PB10_I2S2_CK = 5,
	PB10_USART3_TX = 7,
	PB10_OTG_HS_ULPI_D3 = 10,
	PB10_ETH_MII_RX_ER = 11,
	PB10_LCD_G4 = 14,
	PB10_EVENTOUT = 15,

	PB11_TIM2_CH4 = 1,
	PB11_I2C2_SDA = 4,
	PB11_USART3_RX = 7,
	PB11_OTG_HS_ULPI_D4 = 10,
	PB11_ETH_MII_TX_EN = 11,
	PB11_ETH_RMII_TX_EN = 11,
	PB11_LCD_G5 = 14,
	PB11_EVENTOUT = 15,

	PB12_TIM1_BKIN = 1,
	PB12_I2C2_SMBA = 4,
	PB12_SPI2_NSS = 5,
	PB12_I2S2_WS = 5,
	PB12_USART3_CK = 7,
	PB12_CAN2_RX = 9,
	PB12_OTG_HSULPI_D5 = 10,
	PB12_ETH_MII_TXD0 = 11,
	PB12_ETH_RMII_TXD0 = 11,
	PB12_OTG_HS_ID = 12,
	PB12_EVENTOUT = 15,

	PB13_TIM1_CH1N = 1,
	PB13_SPI2_SCK = 5,
	PB13_I2S2_CK = 5,
	PB13_USART3_CTS = 7,
	PB13_CAN2_TX = 9,
	PB13_OTG_HS_ULPI_D6 = 10,
	PB13_ETH_MII_TXD1 = 11,
	PB13_ETH_RMII_TXD1 = 11,
	PB13_EVENTOUT = 15,

	PB14_TIM1_CH2N = 1,
	PB14_TIM8_CH2N = 3,
	PB14_SPI2_MISO = 5,
	PB14_USART3_RTS = 7,
	PB14_TIM12_CH1 = 9,
	PB14_OTG_HS_DM = 12,
	PB14_EVENTOUT = 15,

	PB15_RTC_REFIN = 0,
	PB15_TIM1_CH3N = 1,
	PB15_TIM8_CH3N = 3,
	PB15_SPI2_MOSI = 5,
	PB15_I2S2_SD = 5,
	PB15_TIM12_CH2 = 9,
	PB15_OTG_HS_DP = 12,
	PB15_EVENTOUT = 15,

	PC0_SAI2_FS_B = 8,
	PC0_OTG_HS_ULPI_STP = 10,
	PC0_FMC_SDNWE = 12,
	PC0_LCD_R5 = 14,
	PC0_EVENTOUT = 15,
	
	PC1_TRACED0 = 0,
	PC1_SPI2_MOSI = 5,
	PC1_I2S2_SD = 5,
	PC1_SAI1_SD_A = 6,
	PC1_ETH_MDC = 11,
	PC1_EVENTOUT = 15,
	
	PC2_SPI2_MISO = 5,
	PC2_OTG_HS_ULPI_DIR = 10,
	PC2_ETH_MII_TXD2 = 11,
	PC2_FMC_SDNE0 = 12,
	PC2_EVENTOUT = 15,

	PC3_SPI2_MOSI = 5,
	PC3_I2S2_SD = 5,
	PC3_OTG_HS_ULPI_NXT = 10,
	PC3_ETH_MII_TX_CLK = 11,
	PC3_FMC_SDCKE0 = 12,
	PC3_EVENTOUT = 15,

	PC4_I2S1_MCK = 5,
	PC4_SPDIFRX_IN2 = 8,
	PC4_ETH_MII_RXD0 = 11,
	PC4_ETH_RMII_RXD0 = 11,
	PC4_FMC_SDNE0 = 12,
	PC4_EVENTOUT = 15,

	PC5_SPDIFRX_IN3 = 8,
	PC5_ETH_MII_RXD1 = 11,
	PC5_ETH_RMII_RXD1 = 11,
	PC5_FMC_SDCKE0 = 12,
	PC5_EVENTOUT = 15,

	PC6_TIM3_CH1 = 2,
	PC6_TIM8_CH1 = 3,
	PC6_I2S2_MCK = 5,
	PC6_USART6_TX = 8,
	PC6_SDMMC1_D6 = 12,
	PC6_DCMI_D0 = 13,
	PC6_LCD_HSYNC = 14,
	PC6_EVENTOUT = 15,

	PC7_TIM3_CH2 = 2,
	PC7_TIM8_CH2 = 3,
	PC7_I2S3_MCK = 6,
	PC7_USART6_RX = 8,
	PC7_SDMMC1_D7 = 12,
	PC7_DCMI_D1 = 13,
	PC7_LCD_G6 = 14,
	PC7_EVENTOUT = 15,

	PC8_TRACED1 = 0,
	PC8_TIM3_CH3 = 2,
	PC8_TIM8_CH3 = 3,
	PC8_UART5_RTS = 7,
	PC8_USART6_CK = 8,
	PC8_SDMMC1_D0 = 12,
	PC8_DCMI_D2 = 13,
	PC8_EVENTOUT = 15,

	PC9_MCO2 = 0,
	PC9_TIM3_CH4 = 2,
	PC9_TIM8_CH4 = 3,
	PC9_I2C3_SDA = 4,
	PC9_I2S_CKIN = 5,
	PC9_UART5_CTS = 7,
	PC9_QUADSPI_BK1_IO0 = 9,
	PC9_SDMMC1_D1 = 12,
	PC9_DCMI_D3 = 13,
	PC9_EVENTOUT = 15,

	PC10_SPI3_SCK = 6,
	PC10_I2S3_CK = 6,
	PC10_USART3_TX = 7,
	PC10_UART4_TX = 8,
	PC10_QUADSPI_BK1_IO1 = 9,
	PC10_SDMMC1_D2 = 12,
	PC10_DCMI_D8 = 13,
	PC10_LCD_R2 = 14,
	PC10_EVENTOUT = 15,

	PC11_SPI3_MISO = 6,
	PC11_USART3_RX = 7,
	PC11_UART4_RX = 8,
	PC11_QUADSPI_BK2_NCS = 9,
	PC11_SDMMC1_D3 = 12,
	PC11_DCMI_D4 = 13,
	PC11_EVENTOUT = 15,

	PC12_TRACED3 = 0,
	PC12_SPI3_MOSI = 6,
	PC12_I2S3_SD = 6,
	PC12_USART3_CK = 7,
	PC12_UART5_TX = 8,
	PC12_SDMMC1_CK = 12,
	PC12_DCMI_D9 = 13,
	PC12_EVENTOUT = 15,

	PC13_EVENTOUT = 15,

	PC14_EVENTOUT = 15,

	PC15_EVENTOUT = 15,

	PD0_CAN1_RX = 9,
	PD0_FMC_D2 = 12,
	PD0_EVENTOUT = 15,

	PD1_CAN1_TX = 9,
	PD1_FMC_D3 = 12,
	PD1_EVENTOUT = 15,

	PD2_TRACED2 = 0,
	PD2_TIM3_ETR = 2,
	PD2_UART5_RX = 8,
	PD2_SDMMC1_CMD = 12,
	PD2_DCMI_D11 = 13,
	PD2_EVENTOUT = 15,

	PD3_SPI2_SCK = 5,
	PD3_I2S2_CK = 5,
	PD3_USART2_CTS = 7,
	PD3_FMC_CLK = 12,
	PD3_DCMI_D5 = 13,
	PD3_LCD_G7 = 14,
	PD3_EVENTOUT = 15,

	PD4_USART2_RTS = 7,
	PD4_FMC_NOE = 12,
	PD4_EVENTOUT = 15,

	PD5_USART2_TX = 7,
	PD5_FMC_NWE = 12,
	PD5_EVENTOUT = 15,

	PD6_SPI3_MOSI = 5,
	PD6_I2S3_SD = 5,
	PD6_SAI1_SD_A = 6,
	PD6_USART2_RX = 7,
	PD6_FMC_NWAIT = 12,
	PD6_DCMI_D10 = 13,
	PD6_LCD_B2 = 14,
	PD6_EVENTOUT = 15,

	PD7_USART2_CK = 7,
	PD7_SPDIFRX_IN0 = 8,
	PD7_FMC_NE1 = 12,
	PD7_EVENTOUT = 15,

	PD8_USART3_TX = 7,
	PD8_SPDIFRX_IN1 = 8,
	PD8_FMC_D13 = 12,
	PD8_EVENTOUT = 15,

	PD9_USART3_RX = 7,
	PD9_FMC_D14 = 12,
	PD9_EVENTOUT = 15,

	PD10_USART3_CK = 7,
	PD10_FMC_D15 = 12,
	PD10_LCD_B3 = 14,
	PD10_EVENTOUT = 15,

	PD11_I2C4_SMBA = 4,
	PD11_USART3_CTS = 7,
	PD11_QUADSPI_BK1_IO0 = 9,
	PD11_SAI2_SD_A = 10,
	PD11_FMC_A16 = 12,
	PD11_FMC_CLE = 12,
	PD11_EVENTOUT = 15,

	PD12_TIM4_CH1 = 2,
	PD12_LPTIM1_IN1 = 3,
	PD12_I2C4_SCL = 4,
	PD12_USART3_RTS = 7,
	PD12_QUADSPI_BK1_IO1 = 9,
	PD12_SAI2_FS_A = 10,
	PD12_FMC_A17 = 12,
	PD12_FMC_ALE = 12,
	PD12_EVENTOUT = 15,

	PD13_TIM4_CH2 = 2,
	PD13_LPTIM1_OUT = 3,
	PD13_I2C4_SDA = 4,
	PD13_QUADSPI_BK1_IO3 = 9,
	PD13_SAI2_SCK_A = 10,
	PD13_FMC_A18 = 12,
	PD13_EVENTOUT = 15,

	PD14_TIM4_CH3 = 2,
	PD14_UART8_CTS = 8,
	PD14_FMC_D0 = 12,
	PD14_EVENTOUT = 15,

	PD15_TIM4_4 = 2,
	PD15_UART8_RTS = 8,
	PD15_FMC_D1 = 12,
	PD15_EVENTOUT = 15,

	PE0_TIM4_ETR = 2,
	PE0_LPTIM1_ETR = 3,
	PE0_UART8_RX = 8,
	PE0_SAI2_MCK_A = 10,
	PE0_FMC_NBL0 = 12,
	PE0_DCMI_D2 = 13,
	PE0_EVENTOUT = 15,

	PE1_LPTIM1_IN2 = 3,
	PE1_UART8_TX = 8,
	PE1_FMC_NBL1 = 12,
	PE1_DCMI_D3 = 13,
	PE1_EVENTOUT = 15,

	PE2_TRACECLK = 0,
	PE2_SPI4_CLK = 5,
	PE2_SAI1_MCLK_A = 6,
	PE2_ETH_MII_TXD3 = 11,
	PE2_FMC_A23 = 12,
	PE2_EVENTOUT = 15,

	PE3_TRACED0 = 0,
	PE3_SAI1_SD_B = 6,
	PE3_FMC_A19 = 12,
	PE3_EVENTOUT = 15,

	PE4_TRACED1 = 0,
	PE4_SPI4_NSS = 5,
	PE4_SAI1_FS_A = 6,
	PE4_FMC_A20 = 12,
	PE4_DCMI_D4 = 13,
	PE4_LCD_B0 = 14,
	PE4_EVENTOUT = 15,

	PE5_TRACED2 = 0,
	PE5_TIM9_CH1 = 3,
	PE5_SPI4_MISO = 5,
	PE5_SAI1_SCK_A = 6,
	PE5_FMC_A21 = 12,
	PE5_DCMI_D6 = 13,
	PE5_LCD_G0 = 14,
	PE5_EVENTOUT = 15,

	PE6_TRACED3 = 0,
	PE6_TIM9_CH2 = 3,
	PE6_SPI4_MOSI = 5,
	PE6_SAI1_SD_A = 6,
	PE6_FMC_A22 = 12,
	PE6_DCMI_D7 = 13,
	PE6_LCD_G1 = 14,
	PE6_EVENTOUT = 15,

	PE7_TIM1_ETR = 1,
	PE7_UART7_RX = 8,
	PE7_FMC_D4 = 12,
	PE7_EVENTOUT = 15,

	PE8_TIM1_CH1N = 1,
	PE8_UART7_TX = 8,
	PE8_FMC_D5 = 12,
	PE8_EVENTOUT = 15,

	PE9_TIM1_CH1 = 1,
	PE9_FMC_D6 = 12,
	PE9_EVENTOUT = 15,

	PE10_TIM1_CH2N = 1,
	PE10_FMC_D7 = 12,
	PE10_EVENTOUT = 15,

	PE11_TIM1_CH2 = 1,
	PE11_SPI4_NSS = 5,
	PE11_FMC_D8 = 12,
	PE11_LCD_G3 = 14,
	PE11_EVENTOUT = 15,

	PE12_TIM1_CH3N = 1,
	PE12_SPI4_SCK = 5,
	PE12_FMC_D9 = 12,
	PE12_LCD_B4 = 14,
	PE12_EVENTOUT = 15,

	PE13_TIM1_CH3 = 1,
	PE13_SPI4_MISO = 5,
	PE13_FMC_D10 = 12,
	PE13_LCD_DE = 14,
	PE13_EVENTOUT = 15,

	PE14_TIM1_CH4 = 1,
	PE14_SPI4_MOSI = 5,
	PE14_FMC_D11 = 12,
	PE14_LCD_CLK = 14,
	PE14_EVENTOUT = 15,

	PE15_TIM1_BKIN = 1,
	PE15_FMC_D12 = 12,
	PE15_LCD_R7 = 14,
	PE15_EVENTOUT = 15,

	PF0_I2C2_SDA = 4,
	PF0_FMC_A0 = 12,
	PF0_EVENTOUT = 15,

	PF1_I2C2_SCL = 4,
	PF1_FMC_A1 = 12,
	PF1_EVENTOUT = 15,

	PF2_I2C2_SMBA = 4,
	PF2_FMC_A2 = 12,
	PF2_EVENTOUT = 15,

	PF3_FMC_A3 = 12,
	PF3_EVENTOUT = 15,

	PF4_FMC_A4 = 12,
	PF4_EVENTOUT = 15,

	PF5_FMC_A5 = 12,
	PF5_EVENTOUT = 15,

	PF6_TIM10_CH1 = 3,
	PF6_SPI5_NSS = 5,
	PF6_SAI1_SD_B = 6,
	PF6_UART7_RX = 8,
	PF6_FMC_NIORD = 12,
	PF6_EVENTOUT = 15,

	PF7_TIM11_CH1 = 3,
	PF7_SPI5_SCK = 5,
	PF7_SAI1_MCLK_B = 6,
	PF7_UART7_TX = 8,
	PF7_FMC_NREG = 12,
	PF7_EVENTOUT = 15,

	PF8_SPI5_MISO = 5,
	PF8_SAI1_SCK_B = 6,
	PF8_TIM13_CH1 = 9,
	PF8_FMC_NIOWR = 12,
	PF8_EVENTOUT = 15,

	PF9_SPI5_MOSI = 5,
	PF9_SAI1_FS_B = 6,
	PF9_TIM14_CH1 = 9,
	PF9_FMC_CD = 12,
	PF9_EVENTOUT = 15,

	PF10_FMC_INTR = 12,
	PF10_DCMI_D11 = 13,
	PF10_LCD_DE = 14,
	PF10_EVENTOUT = 15,

	PF11_SPI5_MOSI = 5,
	PF11_FMC_SDNRAS = 12,
	PF11_DCMI_D12 = 13,
	PF11_EVENTOUT = 15,

	PF12_FMC_A6 = 12,
	PF12_EVENTOUT = 15,

	PF13_FMC_A7 = 12,
	PF13_EVENTOUT = 15,

	PF14_FMC_A8 = 12,
	PF14_EVENTOUT = 15,

	PF15_FMC_A9 = 12,
	PF15_EVENTOUT = 15,

	PG0_FMC_A10 = 12,
	PG0_EVENTOUT = 15,

	PG1_FMC_A11 = 12,
	PG1_EVENTOUT = 15,

	PG2_FMC_A12 = 12,
	PG2_EVENTOUT = 15,

	PG3_FMC_A13 = 12,
	PG3_EVENTOUT = 15,

	PG4_FMC_A14 = 12,
	PG4_FMC_BA0 = 12,
	PG4_EVENTOUT = 15,

	PG5_FMC_A15 = 12,
	PG5_FMC_BA1 = 12,
	PG5_EVENTOUT = 15,
	
	PG6_FMC_INT2 = 12,
	PG6_DCMI_D12 = 13,
	PG6_LCD_R7 = 14,
	PG6_EVENTOUT = 15,

	PG7_USART6_CK = 8,
	PG7_FMC_INT3 = 12,
	PG7_DCMI_D13 = 13,
	PG7_LCD_CLK = 14,
	PG7_EVENTOUT = 15,
	
	PG8_SPI6_NSS = 5,
	PG8_SPDIFRX_IN2 = 7,
	PG8_USART6_RTS = 8,
	PG8_ETH_PPS_OUT = 11,
	PG8_FMC_SDCLK = 12,
	PG8_EVENTOUT = 15,

	PG9_SPDIFRX_IN3 = 7,
	PG9_USART6_RX = 8,
	PG9_QUADSPI_BK2_IO2 = 9,
	PG9_SAI2_FS_B = 10,
	PG9_FMC_NE2 = 12,
	PG9_FMC_NCE3 = 12,
	PG9_DCMI_VSYNC = 13,
	PG9_EVENTOUT = 15,

	PG10_LCD_G3 = 9,
	PG10_SAI2_SD_B = 10,
	PG10_FMC_NCE4_1 = 12,
	PG10_FMC_NE3 = 12,
	PG10_DCMI_D2 = 13,
	PG10_LCD_B2 = 14,
	PG10_EVENTOUT = 15,

	PG11_ETH_MII_TX_EN = 11,
	PG11_ETH_RMII_TX_EN = 11,
	PG11_FMC_NCE4_2 = 12,
	PG11_DCMI_D3 = 13,
	PG11_LCD_B3 = 14,
	PG11_EVENTOUT = 15,

	PG12_SPI6_MISO = 5,
	PG12_USART6_RTS = 8,
	PG12_LCD_B4 = 9,
	PG12_FMC_NE4 = 12,
	PG12_LCD_B1 = 14,
	PG12_EVENTOUT = 15,

	PG13_SPI6_SCK = 5,
	PG13_USART6_CTS = 8,
	PG13_ETH_MII_TXD0 = 11,
	PG13_ETH_RMII_TXD0 = 11,
	PG13_FMC_A24 = 12,
	PG13_EVENTOUT = 15,

	PG14_SPI6_MOSI = 5,
	PG14_USART6_TX = 8,
	PG14_ETH_MII_TXD1 = 11,
	PG14_ETH_RMII_TXD1 = 11,
	PG14_FMC_A25 = 12,
	PG14_EVENTOUT = 15,

	PG15_USART6_CTS = 8,
	PG15_FMC_SDNCAS = 12,
	PG15_DCMI_D13 = 13,
	PG15_EVENTOUT = 15,

	PH0_EVENTOUT = 15,

	PH1_EVENTOUT = 15,

	PH2_ETH_MII_CRS = 11,
	PH2_FMC_SDCKE0 = 12,
	PH2_LCD_R0 = 14,
	PH2_EVENTOUT = 15,

	PH3_ETH_MII_COL = 11,
	PH3_FMC_SDNE0 = 12,
	PH3_LCD_R1 = 14,
	PH3_EVENTOUT = 15,
	
	PH4_I2C2_SCL = 4,
	PH4_OTG_HS_ULPI_NXT = 10,
	PH4_EVENTOUT = 15,

	PH5_I2C2_SDA = 4,
	PH5_SPI5_NSS = 5,
	PH5_FMC_SDNWE = 12,
	PH5_EVENTOUT = 15,

	PH6_I2C2_SMBA = 4,
	PH6_SPI5_SCK = 5,
	PH6_TIM12_CH1 = 9,
	PH6_FMC_SDNE1 = 12,
	PH6_DCMI_D8 = 13,

	PH7_I2C3_SCL = 4,
	PH7_SPI5_MISO = 5,
	PH7_ETH_MII_RXD3 = 11,
	PH7_SDCKE1 = 12,
	PH7_DCMI_D9 = 13,

	PH8_I2C3_SDA = 4,
	PH8_FMC_D16 = 12,
	PH8_DCMI_HSYNC = 13,
	PH8_LCD_R2 = 14,
	PH8_EVENTOUT = 15,

	PH9_I2C3_SMBA = 4,
	PH9_TIM12_CH2 = 9,
	PH9_FMC_D17 = 12,
	PH9_DCMI_D0 = 13,
	PH9_LCD_R3 = 14,
	PH9_EVENTOUT = 15,

	PH10_TIM5_CH1 = 2,
	PH10_FMC_D18 = 12,
	PH10_DCMI_D1 = 13,
	PH10_LCD_R4 = 14,
	PH10_EVENTOUT = 15,

	PH11_TIM5_CH2 = 2,
	PH11_FMC_D19 = 12,
	PH11_DCMI_D2 = 13,
	PH11_LCD_R5 = 14,
	PH11_EVENTOUT = 15,

	PH12_TIM5_CH3 = 2,
	PH12_FMC_D20 = 12,
	PH12_DCMI_D3 = 13,
	PH12_LCD_R6 = 14,
	PH12_EVENTOUT = 15,

	PH13_TIM8_CH1N = 3,
	PH13_CAN1_TX = 9,
	PH13_FMC_D21 = 12,
	PH13_LCD_G2 = 14,
	PH13_EVENTOUT = 15,

	PH14_TIM8_CH2N = 3,
	PH14_FMC_D22 = 12,
	PH14_DCMI_D4 = 13,
	PH14_LCD_G3 = 14,
	PH14_EVENTOUT = 15,

	PH15_TIM8_CH3N = 3,
	PH15_FMC_D23 = 12,
	PH15_DCMI_D11 = 13,
	PH15_LCD_G4 = 14,
	PH15_EVENTOUT = 15,

	PI0_TIM5_CH4 = 2,
	PI0_SPI2_NSS = 5,
	PI0_I2S2_WS = 5,
	PI0_FMC_D24 = 12,
	PI0_DCMI_D13 = 13,
	PI0_LCD_G5 = 14,
	PI0_EVENTOUT = 15,

	PI1_SPI2_SCK = 5,
	PI1_I2S2_CK = 5,
	PI1_FMC_D25 = 12,
	PI1_DCMI_D8 = 13,
	PI1_LCD_G6 = 14,
	PI1_EVENTOUT = 15,

	PI2_TIM8_CH4 = 3,
	PI2_SPI2_MISO = 5,
	PI2_I2S2_EXT_SD = 6,
	PI2_FMC_D26 = 12,
	PI2_DCMI_D9 = 13,
	PI2_LCD_G7 = 14,
	PI2_EVENTOUT = 15,

	PI3_TIM8_ETR = 3,
	PI3_SPI2_MOSI = 5,
	PI3_I2S2_SD = 5,
	PI3_FCM_D27 = 12,
	PI3_DCMI_D10 = 13,
	PI3_EVENTOUT = 15,

	PI4_TIM8_BKIN = 3,
	PI4_SAI2_MCK_A = 10,
	PI4_FMC_NBL2 = 12,
	PI4_DCMI_D5 = 13,
	PI4_LCD_B4 = 14,
	PI4_EVENTOUT = 15,

	PI5_TIM8_CH1 = 3,
	PI5_SAI2_SCK_A = 10,
	PI5_FMC_NBL3 = 12,
	PI5_DCMI_VSYNC = 13,
	PI5_LCD_B5 = 14,
	PI5_EVENTOUT = 15,

	PI6_TIM8_CH2 = 3,
	PI6_SAI2_SD_A = 10,
	PI6_FMC_D28 = 12,
	PI6_DCMI_D6 = 13,
	PI6_LCD_B6 = 14,
	PI6_EVENTOUT = 15,

	PI7_TIM8_CH3 = 3,
	PI7_SAI2_FS_A = 10,
	PI7_FMC_D29 = 12,
	PI7_DCMI_D7 = 13,
	PI7_LCD_B7 = 14,
	PI7_EVENTOUT = 15,

	PI8_EVENTOUT = 15,

	PI9_CAN1_RX = 9,
	PI9_FMC_D30 = 12,
	PI9_LCD_VSYNC = 14,
	PI9_EVENTOUT = 15,

	PI10_ETH_MII_RX_ER = 11,
	PI10_FMC_D31 = 12,
	PI10_LCD_HSYNC = 14,
	PI10_EVENTOUT = 15,

	PI11_OTG_HS_ULPI_DIR = 10,
	PI11_EVENTOUT = 15,

	PI12_LCD_HSYNC = 14,
	PI12_EVENTOUT = 15,

	PI13_LCD_VSYNC = 14,
	PI13_EVENTOUT = 15,

	PI14_LCD_CLK = 14,
	PI14_EVENTOUT = 15,

	PI15_LCD_R0 = 14,
	PI15_EVENTOUT = 15,

	PJ0_LCD_R1 = 14,
	PJ0_EVENTOUT = 15,

	PJ1_LCD_R2 = 14,
	PJ1_EVENTOUT = 15,

	PJ2_LCD_R3 = 14,
	PJ2_EVENTOUT = 15,

	PJ3_LCD_R4 = 14,
	PJ3_EVENTOUT = 15,

	PJ4_LCD_R5 = 14,
	PJ4_EVENTOUT = 15,

	PJ5_LCD_R6 = 14,
	PJ5_EVENTOUT = 15,

	PJ6_LCD_R7 = 14,
	PJ6_EVENTOUT = 15,

	PJ7_LCD_G0 = 14,
	PJ7_EVENTOUT = 15,

	PJ8_LCD_G1 = 14,
	PJ8_EVENTOUT = 15,

	PJ9_LCD_G2 = 14,
	PJ9_EVENTOUT = 15,

	PJ10_LCD_G3 = 14,
	PJ10_EVENTOUT = 15,

	PJ11_LCD_G4 = 14,
	PJ11_EVENTOUT = 15,

	PJ12_LCD_B0 = 14,
	PJ12_EVENTOUT = 15,

	PJ13_LCD_B1 = 14,
	PJ13_EVENTOUT = 15,

	PJ14_LCD_B2 = 14,
	PJ14_EVENTOUT = 15,

	PJ15_LCD_B3 = 14,
	PJ15_EVENTOUT = 15,

	PK0_LCD_G5 = 14,
	PK0_EVENTOUT = 15,

	PK1_LCD_G6 = 14,
	PK1_EVENTOUT = 15,

	PK2_LCD_G7 = 14,
	PK2_EVENTOUT = 15,

	PK3_LCD_B4 = 14,
	PK3_EVENTOUT = 15,

	PK4_LCD_B5 = 14,
	PK4_EVENTOUT = 15,

	PK5_LCD_B6 = 14,
	PK5_EVENTOUT = 15,

	PK6_LCD_B7 = 14,
	PK6_EVENTOUT = 15,

	PK7_LCD_DE = 14,
	PK7_EVENTOUT = 15,
};

#elif defined(STM32G4)

enum
{
	SYS_AF0 = 0,
	I2C4_AF0 = 0,

	LPTIM1_AF1 = 1,
	TIM2_AF1 = 1,
	TIM5_AF1 = 1,
	TIM15_AF1 = 1,
	TIM16_AF1 = 1,
	TIM17_AF1 = 1,

	I2C1_AF2 = 2,
	I2C3_AF2 = 2,
	TIM1_AF2 = 2,
	TIM2_AF2 = 2,
	TIM3_AF2 = 2,
	TIM4_AF2 = 2,
	TIM5_AF2 = 2,
	TIM8_AF2 = 2,
	TIM15_AF2 = 2,
	TIM20_AF2 = 2,
	COMP1_AF2 = 2,

	QUADSPI1_AF3 = 3,
	I2C3_AF3 = 3,
	I2C4_AF3 = 3,
	SAI1_AF3 = 3,
	USB_AF3 = 3,
	HRTIM1_AF3 = 3,
	TIM8_AF3 = 3,
	TIM15_AF3 = 3,
	TIM20_AF3 = 3,
	COMP3_AF3 = 3,

	I2C1_AF4 = 4,
	I2C2_AF4 = 4,
	I2C3_AF4 = 4,
	I2C4_AF4 = 4,
	TIM1_AF4 = 4,
	TIM8_AF4 = 4,
	TIM16_AF4 = 4,
	TIM17_AF4 = 4,

	QUADSPI1_AF5 = 5,
	SPI1_AF5 = 5,
	SPI2_AF5 = 5,
	SPI3_AF5 = 5,
	SPI4_AF5 = 5,
	I2S2_AF5 = 5,
	I2S3_AF5 = 5,
	I2C4_AF5 = 5,
	UART4_AF5 = 5,
	UART5_AF5 = 5,
	TIM8_AF5 = 5,
	Infrared_AF5 = 5,

	QUADSPI1_AF6 = 6,
	SPI2_AF6 = 6,
	SPI3_AF6 = 6,
	I2S2_AF6 = 6,
	I2S3_AF6 = 6,
	TIM1_AF6 = 6,
	TIM5_AF6 = 6,
	TIM8_AF6 = 6,
	TIM20_AF6 = 6,
	Infrared_AF6 = 6,

	USART1_AF7 = 7,
	USART2_AF7 = 7,
	USART3_AF7 = 7,
	FDCAN_AF7 = 7,
	COMP5_AF7 = 7,
	COMP6_AF7 = 7,
	COMP7_AF7 = 7,

	I2C3_AF8 = 8,
	I2C4_AF8 = 8,
	UART4_AF8 = 8,
	UART5_AF8 = 8,
	LPUART1_AF8 = 8,
	COMP1_AF8 = 8,
	COMP2_AF8 = 8,
	COMP3_AF8 = 8,
	COMP4_AF8 = 8,
	COMP5_AF8 = 8,
	COMP6_AF8 = 8,
	COMP7_AF8 = 8,

	FDCAN_AF9 = 9,
	TIM1_AF9 = 9,
	TIM8_AF9 = 9,
	TIM15_AF9 = 9,
	FDCAN1_AF9 = 9,
	FDCAN2_AF9 = 9,

	QUADSPI1_AF10 = 10,
	TIM2_AF10 = 10,
	TIM3_AF10 = 10,
	TIM4_AF10 = 10,
	TIM8_AF10 = 10,
	TIM17_AF10 = 10,

	LPTIM1_AF11 = 11,
	TIM1_AF11 = 11,
	TIM8_AF11 = 11,
	FDCAN1_AF11 = 11,
	FDCAN3_AF11 = 11,

	FMC_AF12 = 12,
	LPUART1_AF12 = 12,
	SAI1_AF12 = 12,
	HRTIM1_AF12 = 12,
	TIM1_AF12 = 12,

	SAI1_AF13 = 13,
	HRTIM1_AF13 = 13,
	OPAMP2_AF13 = 13,

	UART4_AF14 = 14,
	UART5_AF14 = 14,
	SAI1_AF14 = 14,
	TIM2_AF14 = 14,
	TIM15_AF14 = 14,
	UCPD1_AF14 = 14,

	EVENT_AF15 = 15
};
#elif defined(STM32L0)

enum
{
	SYS_AF0 = 0,
	SPI1_AF0 = 0,
	SPI2_AF0 = 0,
	I2S2_AF0 = 0,
	USART1_AF0 = 0,
	USART2_AF0 = 0,
	LPUART1_AF0 = 0,
	USB_AF0 = 0,
	LPTIM1_AF0 = 0,
	TSC_AF0 = 0,
	TIM2_AF0 = 0,
	TIM21_AF0 = 0,
	TIM22_AF0 = 0,
	EVENTOUT_AF0 = 0,

	SPI1_AF1 = 1,
	SPI2_AF1 = 1,
	I2S2_AF1 = 1,
	I2C1_AF1 = 1,
	LCD_AF1 = 1,
	TIM2_AF1 = 1,
	TIM21_AF1 = 1,

	SPI1_AF2 = 2,
	SPI2_AF2 = 2,
	I2S2_AF2 = 2,
	LPUART1_AF2 = 2,
	USART5_AF2 = 2,
	USB_AF2 = 2,
	LPTIM1_AF2 = 2,
	TIM2_AF2 = 2,
	TIM3_AF2 = 2,
	EVENTOUT_AF2 = 2,
	SYS_AF2 = 2,

	I2C1_AF3 = 3,
	TSC_AF3 = 3,
	EVENTOUT_AF3 = 3,

	I2C1_AF4 = 4,
	USART1_AF4 = 4,
	USART2_AF4 = 4,
	LPUART1_AF4 = 4,
	TIM3_AF4 = 4,
	TIM22_AF4 = 4,
	EVENTOUT_AF4 = 4,

	SPI2_AF5 = 5,
	I2S2_AF5 = 5,
	I2C2_AF5 = 5,
	USART1_AF5 = 5,
	TIM21_AF5 = 5,
	EVENTOUT_AF5 = 5,

	I2C1_AF6 = 6,
	I2C2_AF6 = 6,
	LPUART1_AF6 = 6,
	USART4_AF6 = 6,
	UASRT5_AF6 = 6,
	TIM21_AF6 = 6,
	EVENTOUT_AF6 = 6,

	I2C3_AF7 = 7,
	LPUART1_AF7 = 7,
	COMP1_AF7 = 7,
	COMP2_AF7 = 7,
	TIM3_AF7 = 7
};

#elif defined(STM32F0)

enum
{
	PA0_USART1_CTS = 1,
	PA0_USART2_CTS = 1,
	PA0_UART4_TX = 4,

	PA1_EVENT_OUT = 0,
	PA1_USART1_RTS = 1,
	PA1_USART2_RTS = 1,
	PA1_UART4_RX = 4,
	PA1_TIM15_CH1N = 5,

	PA2_TIM15_CH1 = 0,
	PA2_USART1_TX = 1,
	PA2_USART2_TX = 1,

	PA3_TIM15_CH2 = 0,
	PA3_USART1_RX = 1,
	PA3_USART2_RX = 1,

	PA4_SPI1_NSS = 0,
	PA4_USART1_CK = 1,
	PA4_USART2_CK = 1,
	PA4_TIM14_CH1 = 4,
	PA4_USART6_TX = 5,

	PA5_SPI1_SCK = 0,
	PA5_USART6_RX = 5,

	PA6_SPI1_MISO = 0,
	PA6_TIM3_CH1 = 1,
	PA6_TIM1_BKIN = 2,
	PA6_USART3_CTS = 4,
	PA6_TIM16_CH1 = 5,
	PA6_EVENTOUT = 6,

	PA7_SPI1_MOSI = 0,
	PA7_TIM3_CH2 = 1,
	PA7_TIM1_CH1N = 2,
	PA7_TIM14_CH1 = 4,
	PA7_TIM17_CH1 = 5,
	PA7_EVENTOUT = 6,

	PA8_MCO = 0,
	PA8_USART1_CK = 1,
	PA8_TIM1_CH1 = 2,
	PA8_EVENTOUT = 3,

	PA9_TIM15_BKIN = 0,
	PA9_USART1_TX = 1,
	PA9_TIM1_CH2 = 2,
	PA9_I2C1_SCL = 4,
	PA9_MCO = 5,

	PA10_TIM17_BKIN = 0,
	PA10_USART1_RX = 1,
	PA10_TIM1_CH3 = 2,
	PA10_I2C1_SDA = 4,

	PA11_EVENTOUT = 0,
	PA11_USART1_CTS = 1,
	PA11_TIM1_CH4 = 2,
	PA11_SCL = 5,

	PA12_EVENTOUT = 0,
	PA12_USART1_RTS = 1,
	PA12_TIM1_ETR = 2,
	PA12_SDA = 5,

	PA13_SWDIO = 0,
	PA13_IR_OUT = 1,

	PA14_SWCLK = 0,
	PA14_USART1_TX = 1,
	PA14_USART2_TX = 1,

	PA15_SPI1_NSS = 0,
	PA15_USART1_RX = 1,
	PA15_USART2_RX = 1,

	PB0_EVENTOUT = 0,
	PB0_TIM3_CH3 = 1,
	PB0_TIM1_CH2N = 2,
	PB0_USART3_CK = 4,

	PB1_TIM14_CH1 = 0,
	PB1_TIM3_CH4 = 1,
	PB1_TIM1_CH3N = 2,
	PB1_USART3_RTS = 4,

	PB3_SPI1_SCK = 0,
	PB3_EVENTOUT = 1,
	PB3_USART5_TX = 4,

	PB4_SPI1_MISO = 0,
	PB4_TIM3_CH1 = 1,
	PB4_EVENTOUT = 2,
	PB4_USART5_RX = 4,
	PB4_TIM17_BKIN = 5,

	PB5_SPI1_MOSI = 0,
	PB5_TIM3_CH2 = 1,
	PB5_TIM16_BKIN = 2,
	PB5_I2C1_SMBA = 3,
	PB5_USART5_CK_RTS = 4,

	PB6_USART1_TX = 0,
	PB6_I2C1_SCL = 1,
	PB6_TIM16_CH1N = 2,

	PB7_USART1_RX = 0,
	PB7_I2C1_SDA = 1,
	PB7_TIM17_CH1N = 2,
	PB7_USART4_CTS = 4,

	PB8_I2C1_SCL = 1,
	PB8_TIM16_CH1 = 2,

	PB9_IR_OUT = 0,
	PB9_I2C1_SDA = 1,
	PB9_TIM17_CH1 = 2,
	PB9_EVENTOUT = 3,
	PB9_SPI2_NSS = 5,

	PB10_I2C1_SCL = 1,
	PB10_I2C2_SCL = 1,
	PB10_USART3_TX = 4,
	PB10_SPI2_SCK = 5,

	PB11_EVENTOUT = 0,
	PB11_I2C1_SDA = 1,
	PB11_I2C2_SDA = 1,
	PB11_USART3_RX = 4,

	PB12_SPI1_NSS = 0,
	PB12_SPI2_NSS = 0,
	PB12_EVENTOUT = 1,
	PB12_TIM1_BKIN = 2,
	PB12_USART3_RTS = 4,
	PB12_TIM15 = 5,

	PB13_SPI1_SCK = 0,
	PB13_SPI2_SCK = 0,
	PB13_TIM1_CH1N = 2,
	PB13_USART3_CTS = 4,
	PB13_I2C2_SCL = 5,

	PB14_SPI1_MISO = 0,
	PB14_SPI2_MISO = 0,
	PB14_TIM15_CH1 = 1,
	PB14_TIM1_CH2N = 2,
	PB14_USART3_RTS = 4,
	PB14_I2C2_SDA = 5,

	PB15_SPI1_MOSI = 0,
	PB15_SPI2_MOSI = 0,
	PB15_TIM15_CH2 = 1,
	PB15_TIM1_CH3N = 2,
	PB15_TIM15_CH1N = 3,

	PC0_EVENTOUT = 0,
	PC0_USART6_TX = 2,

	PC1_EVENTOUT = 0,
	PC1_USART6_RX = 2,

	PC2_EVENTOUT = 0,
	PC2_SPI2_MISO = 1,

	PC3_EVENTOUT = 0,
	PC3_SPI2_MOSI = 1,

	PC4_EVENTOUT = 0,
	PC4_USART3_TX = 1,

	PC5_USART3_RX = 1,

	PC6_TIM3_CH1 = 0,

	PC7_TIM3_CH2 = 0,

	PC8_TIM3_CH3 = 0,

	PC9_TIM3_CH4 = 0,

	PC10_USART4_TX = 0,
	PC10_USART3_TX = 1,

	PC11_USART4_RX = 0,
	PC11_USART3_RX = 1,

	PC12_USART4_CK = 0,
	PC12_USART3_CK = 1,
	PC12_USART5_TX = 2,

	PD2_TIM3_ETR = 0,
	PD2_USART3_RTS = 1,
	PD2_USART5_RX = 2,

	PF0_I2C1_SDA = 0,

	PF1_I2C1_SCL = 1,

	PF4_EVENTOUT = 0,

	PF5_EVENTOUT = 0,

	PF6_I2C1_SCL = 0,
	PF6_I2C2_SCL = 0,

	PF7_I2C1_SDA = 0,
	PF7_I2C2_SDA = 0,
};
#endif
}

namespace ospeed
{
enum
{
	LOW = 0,
	MID = 1,
	FAST = 2,
	HIGH = 3,
};
}

namespace otype
{
enum
{
	PUSH_PULL = 0,
	OPEN_DRAIN = 1,
};
}

namespace mode
{
enum
{
	INPUT = 0,
	OUTPUT = 1,
	ALT_FUNC = 2,
	ANALOG = 3
};
}

namespace pupd
{
enum
{
	NONE = 0,
	PULL_UP = 1,
	PULL_DOWN = 2
};
}

namespace exti
{
enum
{
	PORTA = 0,
	PORTB = 1,
	PORTC = 2,
	PORTD = 3,
	PORTE = 4,
	PORTF = 5,
	PORTG = 6,
	PORTH = 7,
	PORTI = 8,
	PORTJ = 9,
	PORTK = 10
};
}

}
}

#endif