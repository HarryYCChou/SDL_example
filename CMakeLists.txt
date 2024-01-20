cmake_minimum_required(VERSION 3.12)
project(SDLTemplate LANGUAGES CXX VERSION 0.0.1)

set(SOURCE_MAIN src/main.cc)

add_executable(main ${SOURCE_MAIN})

add_subdirectory(external)
target_link_libraries(main PRIVATE external)
