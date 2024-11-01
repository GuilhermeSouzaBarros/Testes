#ifndef OBJECTS
#define OBJECTS

#include "raylib.h"

#include "structs.h"
#include "shapes.h"
#include "physics.h"

void updateProps(Simulation* simulation);
void DrawProps(Simulation* simulation);

void setupMapObject(Map_obj* object, int i);

#endif