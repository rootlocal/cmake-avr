#include "main.h"
#include "gpio.h"

void main(void) {

    GPIO_init();

    while (1) {
        GPIO_LED_Toggle();
        _delay_ms(100);
    }
}