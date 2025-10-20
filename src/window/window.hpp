
#ifndef PALADIN98_WINDOW_HPP
#define PALADIN98_WINDOW_HPP
#include <cstdint>

class window {
public:
  window();
  ~window();
private:
  void create_window(uint32_t width, uint32_t height, const char *name);
};

#endif // PALADIN98_WINDOW_HPP
