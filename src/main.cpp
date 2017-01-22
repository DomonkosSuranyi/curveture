#include <curve/sdl/Window.hpp>
#include <curve/sdl/Surface.hpp>
#include <curve/sdl/Texture.hpp>

#include <iostream>
#include <set>

using namespace curve;

int main()
{
    Window* window = new Window("TEST", 100, 100, 640, 480, {WindowFlag::Shown});
    Surface* surface = new Surface(window);
    Renderer* renderer = new Renderer(window, {RendererFlag::Accelerated});
    Texture* texture = new Texture(renderer, surface);

    int a;
    std::cin >> a;

    delete surface;
    delete window;

  return 0;
}
