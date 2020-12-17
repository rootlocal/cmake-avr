#include "gpio.h"

void GPIO_init(void) {
    LED_1_GPIO_Port |= (1 << LED_1_Pin);          // pin PD0 out
}

void GPIO_LED_Toggle(void) {
    LED_1_GPIO_Port ^= (1 << LED_1_Pin);
}

void GPIO_LED_On(void) {
    LED_1_GPIO_Port |= (1 << LED_1_Pin);
}

void GPIO_LED_Off(void) {
    LED_1_GPIO_Port &= ~(1 << LED_1_Pin);
}