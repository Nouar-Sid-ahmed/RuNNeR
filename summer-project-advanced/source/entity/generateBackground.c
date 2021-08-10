#include "mi.h"

Entity *generateBackground(Win *app,Entity *background, int i)
{
    
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
    case 2:
        background->texture = loadTexture(app, "ressource/img/background/0-background-add");
        background->width = WINDOW_WIDTH_GAME;
        background->height = WINDOW_HEIGHT_GAME;
        break;
    case 3:
        background->texture = loadTexture(app, "ressource/img/background/2-background.jpeg");
        background->width = WINDOW_WIDTH_PERSONNALISATION;
        background->height = WINDOW_HEIGHT_PERSONNALISATION;
        break;
    default:
        break;
    }
    return background;
}