#include "mi.h"

Entity *updateEnnemy(Entity *entity, int i)
{
    entity->pos_x -= i;
    return entity;
} 