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
    int         nEnnemy;
    char        *armement;
} Player;

typedef struct Ennemys
{
    Entity  *ennemy;
    int     order;
    int     vitesse;
    struct Ennemys *next;
}Ennemys;

#endif