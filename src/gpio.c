#include "gpio.h"

void GPIO_init(void) {
    LED_1_GPIO_Port |= (1 << LED_1_Pin);          // pin PD0 out
}