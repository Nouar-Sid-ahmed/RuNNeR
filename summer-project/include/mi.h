#ifndef MI
#define MI

#include <stdio.h>
#include<stdlib.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>


#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"


void prepareCanvas(Win *app);
void presentCanvas(Win *app);
void drawEntity(Win *app, Entity *entity);
SDL_Texture *loadTexture(Win *app, char *img_path);
int input_handler();
int input_handler_menu(Entity *entity, int cnt);
int initSDL(Win *app,int i);
Player *initPlayer();
Entity *updateEnnemy(Entity *entity);
Entity *playerDamage(Win *app,Entity *player, Entity *ennemy, Entity *explosion);
// game step
int game(Player *player);
int menu();
// gerator
Entity *generateBackground(Win *app, int i);
Entity *generateEnnemy(Win *app);
Entity *generatePLayer(Win *app,int i);
Entity *generateExplosion(Win *app);
Entity *generateCurser(Win *app);
Entity *generateGameOver(Win *app);
// outiMath
int moyen(int a, int b);
int inInterval(int numbre, int max, int min);
#endif