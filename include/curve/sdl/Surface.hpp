#ifndef CURVE_SURFACE_HPP_INC
#define CURVE_SURFACE_HPP_INC

#include <curve/sdl/Window.hpp>

namespace curve 
{
	class Surface
	{
		public:
			Surface(Window* window);
			
			Surface(const char* bmpPath);

			~Surface();

			SDL_Surface* getHandle() const {return m_Surface;}

		private:
			SDL_Surface* m_Surface;
	};
}
#endif
