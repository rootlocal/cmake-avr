find_program(AVR_UPLOADTOOL avrdude)
find_program(AVR_OBJCOPY avr-objcopy)
set(CMAKE_OBJCOPY ${AVR_OBJCOPY})
set(CMAKE_AVRDUDE ${AVR_UPLOADTOOL})

add_custom_target(download
        COMMAND ${CMAKE_OBJCOPY} -O ihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex
        COMMAND ${CMAKE_AVRDUDE} -patmega8 -carduino -P/dev/ttyUSB0 -b19200 -D -Uflash:w:./${PROJECT_NAME}.hex:i
        )