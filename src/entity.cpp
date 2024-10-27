#include "entity.h"

entity new_entity(int x, int y, int w, int h){
	entity inst;
	inst.x = x;
	inst.y = y;
	inst.w = w;
	inst.h = h;
	return inst;
}
