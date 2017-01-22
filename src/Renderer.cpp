#include <curve/sdl/Window.hpp>
#include <curve/sdl/Renderer.hpp>
#include <set>

#include <SDL2/SDL_render.h>

using namespace curve;

Renderer::Renderer(Window* window, std::set<RendererFlag> flags)
{
    std::underlying_type<RendererFlag>::type sumFlag;
    for(auto f : flags)
    {
        sumFlag |= static_cast<std::underlying_type<RendererFlag>::type>(f);
    }
    m_Renderer = SDL_CreateRenderer(window->getHandle(), -1, sumFlag);
}

Renderer::~Renderer()
{
    SDL_DestroyRenderer(m_Renderer);
    m_Renderer = nullptr;
}
