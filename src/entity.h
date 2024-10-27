#ifndef ENTITY_H
#define ENTITY_H

typedef struct entity {
	int x;
	int y;
	int w;
	int h;
} entity;

entity new_entity(int x, int y, int w, int h);

#endif
