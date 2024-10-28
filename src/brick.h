#ifndef BRICK_H
#define BRICK_H

#include <SDL2/SDL.h>

class Brick {
	public:
		Brick(int x, int y);
		SDL_Rect rect;
}

#endif
