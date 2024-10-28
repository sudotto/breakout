#include <SDL2/SDL.h>

#include "ball.h"

Ball::Ball(){
	rect.x = 450 - 5;                                                // x = half of window width - half of ball width (center ball on x axis)
	rect.y = 550;
	rect.w = 10;
	rect.h = 10;
	vel_x = 10;
	vel_y = 10;
}

void Ball::draw(SDL_Renderer *rend){
	SDL_SetRenderDrawColor(rend, 255, 255, 255, 255);
	SDL_RenderFillRect(rend, &rect);
}

void Ball::bounce(){}

void Ball::break_brick(){}

void Ball::move(){}

void Ball::handle(){}
