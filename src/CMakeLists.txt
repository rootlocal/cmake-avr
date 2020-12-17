include_directories(
        "include"
)

set(SOURCES_DIR
        "./*.*"
        #"${PROJECT_SOURCE_DIR}/src/*.*"
        )

set(SOURCE_FILES
        #"${PROJECT_SOURCE_DIR}/other/other.c"
        )

file(GLOB_RECURSE SOURCES ${SOURCES_DIR})

add_avr_executable(${PROJECT_NAME} "${SOURCES}" "${SOURCE_FILES}")