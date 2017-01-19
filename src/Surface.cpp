#include <curve/sdl/Surface.hpp>
#include <string>

#include <SDL2/SDL.h>

using namespace curve;

Surface::Surface(Window* window)
{
	m_Surface = SDL_GetWindowSurface(window->getHandle());
}

Surface::Surface(const char* bmpPath)
{
	m_Surface = SDL_LoadBMP(bmpPath);
}

Surface::~Surface()
{
	SDL_FreeSurface(m_Surface);
	m_Surface = nullptr;
}
