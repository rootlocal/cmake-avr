find_program(AVR_OBJCOPY avr-objcopy)
set(CMAKE_OBJCOPY ${AVR_OBJCOPY})

add_custom_target(objcopy
        COMMAND ${CMAKE_OBJCOPY} -O ihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex
        )
