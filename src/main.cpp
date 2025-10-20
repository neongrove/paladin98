#include "window/window.hpp"
#include <error_codes.hpp>
int main() {
  window *game_window = new window();
  return static_cast<int>(error_codes::SUCCESS);
}