#include <curve/sdl/Window.hpp>
#include <curve/sdl/Surface.hpp>
#include <curve/sdl/Renderer.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <iostream>
#include <set>

using namespace curve;

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    Window* window = new Window("TEST", 100, 100, 640, 480, {WindowFlag::Shown});
    Renderer* renderer = new Renderer(window, {RendererFlag::Accelerated});

    SDL_SetRenderDrawColor(renderer->getHandle(), 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer->getHandle());
    SDL_RenderPresent(renderer->getHandle());

    //Color color = {0,0,0,0xFF};
    //renderer->setDrawColor(color);
    //renderer->clear();
    //renderer->update();

    int a;
    std::cin >> a;

    delete renderer;
    delete window;

    SDL_Quit();

    return 0;
}
