#include <iostream>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(int argc, char* argv[]){
	if(SDL_Init(SDL_INIT_VIDEO)){
		std::cout << "init broken :(" << std::endl;
		exit(1);
	}
	SDL_Window *win = SDL_CreateWindow("breakout", 10, 10, 900, 600, 0);
	if(!win){
		std::cout << "window broken :(" << std::endl;
		exit(1);
	}
	SDL_Surface *surf = SDL_GetWindowSurface(win);
	if(!surf){
		std::cout << "surf broken :(" << std::endl;
		exit(1);
	}
	SDL_UpdateWindowSurface(win);
	SDL_Delay(2000);
	return 0;
}
