#ifndef CURVE_SDL_RENDERER_HPP_INC
#define CURVE_SDL_RENDERER_HPP_INC

#include <curve/sdl/Window.hpp>
#include <curve/Color.hpp>

#include <SDL2/SDL_render.h>
#include <set>

namespace curve
{
    enum class RendererFlag : uint32_t
    {
        Software        = SDL_RENDERER_SOFTWARE,        //The renderer is a software fallback
        Accelerated     = SDL_RENDERER_ACCELERATED,     //The renderer uses hardware acceleration
        PresentVSync    = SDL_RENDERER_PRESENTVSYNC,    //Present is synchronized with the refresh rate
        TargetTexture   = SDL_RENDERER_TARGETTEXTURE    //The renderer supports rendering to texture
    };

    class Renderer
    {
        public:
            Renderer(Window* window, std::set<RendererFlag> flags);

            ~Renderer();

            void setDrawColor(Color color);

            void clear();

            SDL_Renderer* getHandle() const {return m_Renderer;}

        private:
            SDL_Renderer* m_Renderer;
    };
}

#endif
