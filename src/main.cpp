#include <curve/sdl/Window.hpp>
#include <curve/sdl/Surface.hpp>
#include <curve/sdl/Renderer.hpp>

#include <iostream>
#include <set>

using namespace curve;

void clearScreen(Renderer*);

int main()
{
    Window* window = new Window("TEST", 100, 100, 640, 480, {WindowFlag::Shown});
    Surface* surface = new Surface(window);
    Renderer* renderer = new Renderer(window, {RendererFlag::Accelerated});

    clearScreen(renderer);
    int a;
    std::cin >> a;

    delete surface;
    delete window;

  return 0;
}

void clearScreen(Renderer* renderer)
{
    Color color = {0,0,0,0};
    renderer->setDrawColor(color);
    renderer->clear();
}
