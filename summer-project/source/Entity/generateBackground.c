#include "mi.h"

Entity *generateBackground(Win *app, int i)
{
    Entity *background = malloc(sizeof(Entity));

    background->pos_x = 0;
    background->pos_y = 0;
    switch (i)
    {
    case 0:
        background->texture = loadTexture(app, "ressource/img/background/1-background.jpeg");
        background->width = WINDOW_WIDTH;
        background->height = WINDOW_HEIGHT;
        break;
    case 1:
        background->texture = loadTexture(app, "ressource/img/background/0-background.jpeg");
        background->width = WINDOW_WIDTH_GAME;
        background->height = WINDOW_HEIGHT_GAME;
        break;
    default:
        break;
    }
    

    return background;
}