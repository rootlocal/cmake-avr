include_directories("include")

add_subdirectory("lib")

set(SOURCES_DIR "./*.*")
file(GLOB_RECURSE SOURCES ${SOURCES_DIR})

add_avr_executable(${PROJECT_NAME}-cpp "${SOURCES}")

target_link_libraries(
        ${PROJECT_NAME}-cpp-${AVR_MCU}.elf
        libcppled-${AVR_MCU}
)