#ifndef CURVE_SDL_TEXTURE_HPP_INC
#define CURVE_SDL_TEXTURE_HPP_INC

#include <curve/sdl/Renderer.hpp>
#include <curve/sdl/Surface.hpp>

#include <SDL2/SDL_render.h>

namespace curve
{
    class Texture
    {
        public:
            Texture(Renderer* renderer, Surface* surface);

            ~Texture();
        private:
            SDL_Texture* m_Texture;
            Renderer* m_Renderer;
    };
}
#endif
