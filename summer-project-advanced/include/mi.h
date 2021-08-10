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

// canvas
void prepareCanvas(Win *app);
void presentCanvas(Win *app);
int initSDL(Win *app,int i);
// image
void drawEntity(Win *app, Entity *entity);
void drawString(Win *app, char *str, int x, int y, int width, int height, int colorID);
SDL_Texture *loadTexture(Win *app, char *img_path);
// move
int input_handler();
int input_handler_menu(Entity *entity, int cnt);
int input_handler_personatisation(int choice);
// event
Player *initPlayer();
Entity *updateEnnemy(Entity *entity, int i);
Entity *updateBackground(Entity *background,int i);
Entity *playerDamage(Win *app,Entity *player, Entity *ennemy, Entity *explosion);
Ennemys *updateEnnemys(Win *app, Ennemys *ennemyEntre, int n, int vitesse);
void gameOver(Win *app);
void explosion(Win *app, Entity *player, Entity *ennemy);
// page
Player *game(Player *player);
int menu(Player *user);
Player *setting(Player *user);
Player *personalisation(Player *user);
// gerator
Entity *generateBackground(Win *app,Entity *background, int i);
Entity *generateEnnemy(Win *app, int k, int n);
Ennemys *generateEnnemys(Win *app, int n);
Entity *generatePLayer(Win *app, Entity* player,int i);
Entity *generateExplosion(Win *app, Entity* explosion);
Entity *generateCurser(Win *app, Entity *curser);
Entity *generateGameOver(Win *app, Entity* gameOver);
// outiMath
int moyen(int a, int b);
int inInterval(int numbre, int max, int min);
#endif