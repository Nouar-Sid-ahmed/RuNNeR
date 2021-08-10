#include "mi.h"

void explosion(Win *app, Entity *player, Entity *ennemy)
{
    Entity *explosion = malloc(sizeof(Entity));
    explosion = generateExplosion(app,explosion);
    explosion->pos_y = moyen(ennemy->pos_y,player->pos_y);
    explosion->pos_x = moyen(ennemy->pos_x,player->pos_x);
    drawEntity(app,explosion);
    free(explosion);
}