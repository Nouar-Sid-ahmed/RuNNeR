#include "mi.h"

Entity *updateEnnemy(Entity *entity){
    Entity *entityB = malloc(sizeof(Entity));
    entityB = entity;
    entityB->pos_x -= 3;
    return entityB;
} 