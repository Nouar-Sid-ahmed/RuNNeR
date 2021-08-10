#include "mi.h"

void prepareCanvas(Win *app)
{
    SDL_SetRenderDrawColor(app->renderer, 96, 128, 255,255);
    SDL_RenderClear(app->renderer);
}

void presentCanvas(Win *app)
{
    SDL_RenderPresent(app->renderer);
}