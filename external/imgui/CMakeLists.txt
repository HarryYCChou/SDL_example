cmake_minimum_required(VERSION 3.12)
project(imgui LANGUAGES CXX VERSION 0.0.1)

# main source code
set(SOURCES imgui.cpp imgui_demo.cpp  imgui_draw.cpp  imgui_tables.cpp  imgui_widgets.cpp imgui_impl_sdl3.cpp imgui_impl_vulkan.cpp)

# Create an object library
add_library(imguilib OBJECT ${SOURCES})

# include header folder
target_include_directories(imguilib PRIVATE ${CMAKE_SOURCE_DIR}/)

# add imgui include directory 
target_include_directories(imguilib INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/
)
