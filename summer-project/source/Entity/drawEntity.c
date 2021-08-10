#include "mi.h"

void drawEntity(Win *app,Entity *entity)
{
    SDL_Rect dest = {entity->pos_x, entity->pos_y, entity->width, entity->height};

    SDL_RenderCopy(app->renderer, entity->texture, NULL, &dest);
}