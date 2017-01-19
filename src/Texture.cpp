#include <curve/sdl/Texture.hpp>
#include <curve/sdl/Surface.hpp>
#include <curve/sdl/Renderer.hpp>

#include <SDL2/SDL_render.h>

using namespace curve;

Texture::Texture(Renderer* renderer, Surface* surface)
{
	m_Texture = SDL_CreateTextureFromSurface(renderer->getHandle(), surface->getHandle());
}

Texture::~Texture()
{
	SDL_DestroyTexture(m_Texture);
	m_Texture = nullptr;
}
