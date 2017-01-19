#include <curve/sdl/Window.hpp>
#include <iostream>
#include <set>

using namespace curve;

int main()
{
  Window* window = new Window("TEST", 100, 100, 640, 480, {WindowFlag::Shown});
  int a;
  std::cin >> a;
  delete window;

  return 0;
}
