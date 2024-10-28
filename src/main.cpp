#include <iostream>
#include <stdlib.h>
#include <SDL2/SDL.h>

#include "ball.h"

int main(int argc, char* argv[]){
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *win = SDL_CreateWindow("breakout", 10, 10, 900, 600, 0);
	SDL_Renderer *rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
	Ball ball;
	bool running = true;
	while(running){
		SDL_Event event;
		while(SDL_PollEvent(&event)){
			switch(event.type){
				case SDL_QUIT:
					running = false;
					break;
				case SDL_KEYDOWN:
					// key handling here
					break;
			}
		}
		SDL_RenderClear(rend);
		ball.draw(rend);
		SDL_SetRenderDrawColor(rend, 0, 0, 0, 255);
		SDL_RenderPresent(rend);
	}
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}
