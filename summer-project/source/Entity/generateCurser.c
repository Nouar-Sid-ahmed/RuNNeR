#include "mi.h"

Entity *generateCurser(Win *app)
{
    Entity *curser = malloc(sizeof(Entity));

    curser->pos_x = 50;
    curser->pos_y = ((WINDOW_HEIGHT/4)-25);
    curser->width = 50;
    curser->height = 50;
    curser->texture = loadTexture(app, "ressource/img/img_texture/0-curseur_adobespark");

    return curser;
}