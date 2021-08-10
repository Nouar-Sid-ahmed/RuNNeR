#include "mi.h"

Entity *updateBackground(Entity *background,int i)
{

    if (background->pos_x <= -1*WINDOW_WIDTH_GAME)
        background->pos_x = WINDOW_WIDTH_GAME;
    background->pos_x -= i;    
    return background;
} 