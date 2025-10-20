#include "window.hpp"

paladin::window::window() : sdl_window(nullptr) {
  create_window(800, 600, "paladin");
}


paladin::window::~window() {
  if (sdl_window != nullptr) {
    SDL_DestroyWindow(sdl_window);
  }
  SDL_Quit();
}

void paladin::window::create_window(int width, int height, const char *name) {
  if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
    SDL_Log("failed to start SDL: %s", SDL_GetError());
  }

  sdl_window = SDL_CreateWindow(
    name,
    static_cast<int>(width),
    static_cast<int>(height),
    SDL_WINDOW_FULLSCREEN
  );

  if (sdl_window == nullptr) {
    SDL_Log("failed to create window: %s", SDL_GetError());
    SDL_Quit();
  }
}