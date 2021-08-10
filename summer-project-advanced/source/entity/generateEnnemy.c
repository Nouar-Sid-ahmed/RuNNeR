#include "mi.h"

Entity *generateEnnemy(Win *app, int k, int n)
{
    Entity *ennemy = malloc(sizeof(Entity));
    char *imgEn0 = "ressource/img/asteriod/0-asteriod";
    char *imgEn1 = "ressource/img/asteriod/1-asteriod";
    char *imgEn2 = "ressource/img/asteriod/2-asteriod";
    ennemy->pos_x = (rand() % WINDOW_WIDTH_GAME) + WINDOW_WIDTH_GAME;
    ennemy->width = (rand() % ((WINDOW_HEIGHT_GAME/n) - 10)) + 10;
    ennemy->height = (rand() % ((WINDOW_HEIGHT_GAME/n) - 10)) + 10;
    ennemy->pos_y = (rand() % ((WINDOW_HEIGHT_GAME - ennemy->height)/n)) + (k*((WINDOW_HEIGHT_GAME - ennemy->height)/n));
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