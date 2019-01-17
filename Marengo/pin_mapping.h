/*
 * pin_mapping.h
 *
 *  Created on: 4 maj 2018
 *      Author: grzeg
 */

#ifndef MARENGO_PIN_MAPPING_H_
#define MARENGO_PIN_MAPPING_H_

// Stepper motors pins
#define LINE_YSTP                 PAL_LINE(GPIOC, 12U)
#define LINE_YDIR                 PAL_LINE(GPIOC, 3U)
#define LINE_XSTP                 PAL_LINE(GPIOC, 13U)
#define LINE_XDIR                 PAL_LINE(GPIOC, 8U)
#define LINE_ZSTP                 PAL_LINE(GPIOC, 11U)
#define LINE_ZDIR                 PAL_LINE(GPIOB, 7U)
#define LINE_ENABLE               PAL_LINE(GPIOB, 4U)
#define LINE_SPINDLE_ENABLE       PAL_LINE(GPIOD, 5U)
#define LINE_SPINDLE_DIRECTION    PAL_LINE(GPIOD, 7U)

// ESP8266 pins
//  TXD                 PA9 (USART1TX)
//  RXD                 PA10(USART1RX)

#define LINE_EXTRUDERCTRL           PAL_LINE(GPIOE, 2U)
#define LINE_HEATBEDCTRL            PAL_LINE(GPIOE, 3U)
#define LINE_EXTRUDERTEMP           PAL_LINE(GPIOF, 6U)

// Intrinsic STM32F429i board peripherals

#define LINE_REDLED                 PAL_LINE(GPIOG, 13U)
#define LINE_GREENLED               PAL_LINE(GPIOG, 14U)
#define LINE_USERBUTTON             PAL_LINE(GPIOA, 0U)

#endif /* MARENGO_PIN_MAPPING_H_ */
