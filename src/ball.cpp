#include "ball.h"
#include "entity.h"

ball new_ball(){
	ball inst;
	inst.ent = new_entity(10, 10, 5, 5);
	inst.x_vel = 10;
	inst.y_vel = 10;
	return inst;
}
