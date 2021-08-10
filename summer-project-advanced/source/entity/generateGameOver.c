#include "mi.h"

Entity *generateGameOver(Win *app,Entity* gameOver)
{
    gameOver->pos_x = WINDOW_WIDTH_GAME*2/6;
    gameOver->pos_y = WINDOW_HEIGHT_GAME*2/6;
    gameOver->width = WINDOW_WIDTH_GAME*2/6;
    gameOver->height = WINDOW_HEIGHT_GAME*2/6;
    gameOver->texture = loadTexture(app, "ressource/img/background/0-gameOver");

    return gameOver;
}