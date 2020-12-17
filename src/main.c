#include "main.h"
#include "gpio.h"

void main(void) {

    GPIO_init();

    while (1) {
        LED_1_GPIO_Port |= (1 << LED_1_Pin);        // pin PD0 high level
        _delay_ms(100);
        LED_1_GPIO_Port &= ~(1 << LED_1_Pin);       // pin PD0 low level
        _delay_ms(100);
    }
}