#ifndef CURVE_SDL_SURFACE_HPP_INC
#define CURVE_SDL_SURFACE_HPP_INC

#include <curve/sdl/Window.hpp>
#include <SDL2/SDL_video.h>

namespace curve 
{
	class Surface
	{
		public:
			Surface(Window* window);
			
//			Surface(const char* bmpPath);

			~Surface();

			SDL_Surface* getHandle() const {return m_Surface;}

		private:
			SDL_Surface* m_Surface;
	};
}
#endif
