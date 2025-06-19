set(TARGET_NAME cmakegen)

add_executable(${TARGET_NAME}
    src/main.c
)

target_include_directories(${TARGET_NAME} PUBLIC
    inc
)

target_link_libraries(${TARGET_NAME} PRIVATE
    FILES
)

install(TARGETS ${TARGET_NAME} RUNTIME DESTINATION bin)