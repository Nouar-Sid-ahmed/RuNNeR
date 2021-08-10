#include "mi.h"

Entity *generatePLayer(Win *app,int i)
{
    Entity *player = malloc(sizeof(Entity));

    player->pos_x = 0;
    player->pos_y = WINDOW_HEIGHT/2-40;
    player->width = 80;
    player->height = 80;
    switch (i)
    {
    case 0:
        player->texture = loadTexture(app, "ressource/img/spaceship/0-spaceship_adobespark");
        break;
    case 1:
        player->texture = loadTexture(app, "ressource/img/spaceship/1-spaceship_adobespark");
        break;
    case 2:
        player->texture = loadTexture(app, "ressource/img/spaceship/2-spaceship_adobespark");
        break;
    case 3:
        player->texture = loadTexture(app, "ressource/img/spaceship/3-spaceship_adobespark");
        break;
    default:
        break;
    }
    
    return player;
}