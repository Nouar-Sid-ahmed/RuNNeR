#include "mi.h"

Entity *playerDamage(Win *app, Entity *player, Entity *ennemy, Entity *explosion)
{
    explosion->pos_x = 0;
    explosion->pos_y = 0;
    explosion->width = 200;
    explosion->height = 200;
    explosion->texture = loadTexture(app, "ressource/img/img_texture/0-explosion_adobespark");

    if (ennemy->pos_x <= 80)
    {
        if(inInterval(ennemy->pos_y,player->pos_y,(player->pos_y - 80)))
        {
            explosion->pos_y = moyen(ennemy->pos_y,player->pos_y);
            explosion->pos_x = moyen(ennemy->pos_x,player->pos_x);
        }
    }
    return explosion;
}