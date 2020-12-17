/**
 * \brief simple application to test the C++ toolchain
 *
 * \file main.cpp
 */

#include "main.h"
#include <avr/io.h>
#include <util/delay.h>
#include "CLed.h"

/**
 * \brief main loop
 */
int main(void) {
    CLed led(&PORTB, &DDRB, PINB1);

    while (1) {
        led.toggle();
        _delay_ms(500);
    }
}
