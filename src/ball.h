#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <SDL2/SDL.h>

class Ball {
	public:
		Ball();
		SDL_Rect rect;
		int vel_x;
		int vel_y;
		void draw(SDL_Renderer *rend);
		void bounce(char direction);
		void break_brick();
		void move();
		void handle(SDL_Renderer *rend);
};

#endif
