
#ifndef PALADIN98_WINDOW_HPP
#define PALADIN98_WINDOW_HPP
#include <SDL3/SDL.h>
#include <cstdint>

namespace paladin {
class window {
public:
  window();
  ~window();

private:
  void create_window(int width, int height, const char *name);
  SDL_Window *sdl_window;
};
} // namespace paladin

#endif // PALADIN98_WINDOW_HPP
