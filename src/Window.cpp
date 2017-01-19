#include <curve/sdl/Window.hpp>
#include <type_traits>

#include <SDL2/SDL.h>

using namespace curve;

Window::Window(std::string title, int x, int y, int width, int height, std::set<WindowFlag> flags)
{
	std::underlying_type<WindowFlag>::type sumFlag;
  for (auto f : flags)
  {
		sumFlag |= static_cast<std::underlying_type<WindowFlag>::type>(f);
  }

  m_Window = SDL_CreateWindow(title.c_str(), x, y, width, height, sumFlag);
} 

Window::~Window()
{
  SDL_DestroyWindow(m_Window);
  m_Window = nullptr;
} 
