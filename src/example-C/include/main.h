#pragma once
#ifndef _MAIN_H
#define _MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef F_CPU
#define F_CPU 1000000UL
#endif // ndef F_CPU

#include <avr/io.h>
#include <util/delay.h>

#define LED_1_Pin PD0
#define LED_1_GPIO_Port PORTD

#ifdef __cplusplus
}
#endif

#endif // _MAIN_H