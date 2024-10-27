#ifndef BALL_H
#define BALL_H

#include <iostream>

#include "entity.h"

typedef struct ball{
	entity ent;
	int x_vel;
	int y_vel;
} ball;

ball new_ball();

#endif
