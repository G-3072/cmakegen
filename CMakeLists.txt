cmake_minimum_required(VERSION 3.14)

project(cmake-generator VERSION 0.1 LANGUAGES C)

add_executable(${PROJECT_NAME}
    src/main.c
    src/files.c
    src/directories.c
    src/paths.c
)

target_include_directories(${PROJECT_NAME} PUBLIC
    inc
)

target_link_libraries(${PROJECT_NAME} PRIVATE

)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)