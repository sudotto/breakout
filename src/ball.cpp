#include <iostream>
#include <SDL2/SDL.h>

#include "ball.h"

Ball::Ball(){
	rect.x = 450 - 5;                                                // x = half of window width - half of ball width (center ball on x axis)
	rect.y = 550;
	rect.w = 10;
	rect.h = 10;
	vel_x = -10;
	vel_y = -10;
}

void Ball::draw(SDL_Renderer *rend){
	SDL_SetRenderDrawColor(rend, 255, 255, 255, 255);
	SDL_RenderFillRect(rend, &rect);
}

void Ball::bounce(char direction){
	switch(direction){
		case 'x':
			vel_x *= -1;
			break;
		case 'y':
			vel_y *= -1;
			break;
	}
}

void Ball::break_brick(){}

void Ball::move(){
	if(rect.x < 0) {
		rect.x = 0;
		bounce('x');
	}
	if(rect.x + rect.w > 900) {
		rect.x = 900 - rect.w;
		bounce('x');
	}
	if(rect.y < 0) {
		rect.y = 0;
		bounce('y');
	}
	if(rect.y + rect.h > 600){
		rect.y = 600 - rect.h;
		bounce('y');
	}
	rect.x += vel_x;
	rect.y += vel_y;
}

void Ball::handle(SDL_Renderer *rend){
	move();
	draw(rend);
}
