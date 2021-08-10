#ifndef DRAW
#define DRAW

#include "window.h"
#include <SDL2/SDL_image.h>

typedef struct draw
{
    int         pos_x;
    int         pos_y;
    int         width;
    int         height;
    SDL_Texture *texture;
} Entity;

typedef struct player
{
    int         vieBonus;
    int         spaceShip;
    int         money;
    char        *armement;
} Player;

#endif