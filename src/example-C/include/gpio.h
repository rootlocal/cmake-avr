#pragma once
#ifndef GPIO_H
#define GPIO_H

#ifdef __cplusplus
extern "C" {
#endif


#include "main.h"

void GPIO_init(void);

void GPIO_LED_Toggle(void);

void GPIO_LED_On(void);

void GPIO_LED_Off(void);

#ifdef __cplusplus
}
#endif

#endif //GPIO_H
