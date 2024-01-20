set(SDL_TEST OFF)
add_subdirectory(SDL)

add_library(external INTERFACE)
target_link_libraries(external INTERFACE SDL3::SDL3)
