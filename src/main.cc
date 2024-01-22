#include "main.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION,
            "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    return -1;
  }

  // create window for rendering
  SDL_Window* window = SDL_CreateWindow("SDL Example",
                                        SCREEN_WIDTH,
                                        SCREEN_HEIGHT,
                                        0);
  if (!window) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION,
            "Window could not be created! SDL_Error: %s\n", SDL_GetError());
    return -1;
  }

  // main event loop
  bool quit = false;
  SDL_Event e;
  SDL_Renderer* renderer = nullptr;

  while (!quit) {
    // poll events
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_EVENT_QUIT)
        quit = true;
    }

    // Clear the screen (replace with your rendering code)
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);

    // Update screen (replace with your rendering code)

    // Present the renderer
    SDL_RenderPresent(renderer);
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
