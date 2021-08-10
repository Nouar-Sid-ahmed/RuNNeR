#include "mi.h"

Entity *generatePLayer(Win *app, Entity *player, int i)
{
    player->pos_x = 0;
    player->pos_y = WINDOW_HEIGHT/2-40;
    player->width = 80;
    player->height = 80;
    switch (i)
    {
    case 0:
        player->texture = loadTexture(app, "ressource/img/spaceship/0-spaceship");
        break;
    case 1:
        player->texture = loadTexture(app, "ressource/img/spaceship/1-spaceship");
        break;
    case 2:
        player->texture = loadTexture(app, "ressource/img/spaceship/2-spaceship");
        break;
    case 3:
        player->texture = loadTexture(app, "ressource/img/spaceship/3-spaceship");
        break;
    default:
        break;
    }
    
    return player;
}