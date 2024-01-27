# add SDL source code
set(SDL_TEST OFF)
add_subdirectory(SDL)

# add imgui source code
add_subdirectory(imgui)

add_library(external INTERFACE)
target_link_libraries(external INTERFACE SDL3::SDL3 imguilib)
