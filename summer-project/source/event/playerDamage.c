#include "mi.h"

Entity *playerDamage(Win *app, Entity *player, Entity *ennemy, Entity *explosion)
{
    Entity *explosion_0 = malloc(sizeof(Entity));
    explosion->pos_x = 0;
    explosion->pos_y = 0;
    explosion->width = 200;
    explosion->height = 200;
    explosion->texture = loadTexture(app, "ressource/img/img_texture/0-explosion_adobespark");

    if (ennemy->pos_x <= 80)
    {
        if(inInterval(ennemy->pos_y,player->pos_y,(player->pos_y - 80)))
        {
            explosion_0->pos_y = moyen(ennemy->pos_y,player->pos_y);
            explosion_0->pos_x = moyen(ennemy->pos_x,player->pos_x);
        }
    }
    return explosion_0;
}