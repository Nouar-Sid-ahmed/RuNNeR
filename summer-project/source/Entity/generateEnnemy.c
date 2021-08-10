#include "mi.h"

Entity *generateEnnemy(Win *app)
{

    Entity *ennemy = malloc(sizeof(Entity));
    char *imgEn0 = "ressource/img/asteriod/0-asteriod_adobespark";
    char *imgEn1 = "ressource/img/asteriod/1-asteriod_adobespark";
    char *imgEn2 = "ressource/img/asteriod/2-asteriod_adobespark";

    ennemy->pos_x = WINDOW_WIDTH_GAME;
    ennemy->width = (rand() % 100) + 50;
    ennemy->height = (rand() % 100) + 50;
    ennemy->pos_y = rand() % (WINDOW_HEIGHT_GAME - ennemy->height);
    switch (rand()%3)
    {
        case (0):
            ennemy->texture = loadTexture(app, imgEn0);
            break;
        case (1):
            ennemy->texture = loadTexture(app, imgEn1);
            break;
        case (2):
            ennemy->texture = loadTexture(app, imgEn2);
            break;
    }
    return ennemy;
}