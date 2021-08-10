
#include "mi.h"

Entity *generateExplosion(Win *app)
{
    Entity *explosion = malloc(sizeof(Entity));

    explosion->pos_x = 0;
    explosion->pos_y = 0;
    explosion->width = 80;
    explosion->height = 80;
    explosion->texture = loadTexture(app, "ressource/img/img_texture/0-explosion_adobespark");

    return explosion;
}
