/**
* @par  Copyright (C): 2016-2022, Shenzhen Yahboom Tech
* @file         pin_config.c
* @author       Gengyue
* @version      V1.0
* @date         2020.05.27
* @brief        硬件引脚与软件GPIO的宏定义
* @details      
* @par History  见如下说明
*                 
* version:	由于K210使用fpioa现场可编程IO阵列，允许用户将255个内部功能映射到芯片外围的48个自由IO上
*           所以把硬件IO和软件GPIO功能抽出来单独设置，这样更容易理解。
*/
#ifndef _PIN_CONFIG_H_
#define _PIN_CONFIG_H_
/*****************************HEAR-FILE************************************/
#include "fpioa.h"

/*****************************HARDWARE-PIN*********************************/
// 硬件IO口，与原理图对应
#define PIN_LCD_CS             (36)
#define PIN_LCD_RST            (37)
#define PIN_LCD_RS             (38)
#define PIN_LCD_WR             (39)

#define PIN_FT_RST             (37)
#define PIN_FT_INT             (12)
#define PIN_FT_SCL             (9)
#define PIN_FT_SDA             (10)

/*****************************SOFTWARE-GPIO********************************/
// 软件GPIO口，与程序对应
#define LCD_RST_GPIONUM        (0)
#define LCD_RS_GPIONUM         (1)

#define FT_INT_GPIONUM         (2)
#define FT_RST_GPIONUM         (3)

/*****************************FUNC-GPIO************************************/
// GPIO口的功能，绑定到硬件IO口
#define FUNC_LCD_CS             (FUNC_SPI0_SS3)
#define FUNC_LCD_RST            (FUNC_GPIOHS0 + LCD_RST_GPIONUM)
#define FUNC_LCD_RS             (FUNC_GPIOHS0 + LCD_RS_GPIONUM)
#define FUNC_LCD_WR             (FUNC_SPI0_SCLK)

#define FUNC_FT_RST             (FUNC_GPIOHS0 + FT_RST_GPIONUM)
#define FUNC_FT_INT             (FUNC_GPIOHS0 + FT_INT_GPIONUM)
#define FUNC_FT_SCL             (FUNC_I2C0_SCLK)
#define FUNC_FT_SDA             (FUNC_I2C0_SDA)

#endif /* _PIN_CONFIG_H_ */
