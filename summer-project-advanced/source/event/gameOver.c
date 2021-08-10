#include "mi.h"

void gameOver(Win *app)
{
    Entity *gameOver = malloc(sizeof(Entity));
    gameOver = generateGameOver(app,gameOver);
    drawEntity(app,gameOver);
    free(gameOver);
}