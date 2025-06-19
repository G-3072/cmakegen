set(TARGET_NAME FILES)

add_library(${TARGET_NAME} STATIC
    src/modules.c
)

target_include_directories(${TARGET_NAME} PUBLIC
    inc
)

target_link_libraries(${TARGET_NAME} PRIVATE
    FILES
)