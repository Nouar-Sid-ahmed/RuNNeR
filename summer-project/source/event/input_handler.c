#include "mi.h"

int input_handler(Entity *entity) 
{
    SDL_Event event;
    SDL_PollEvent(&event);
    int responce = 0;
    switch (event.type)
    {
    case SDL_QUIT :
        return -1;
    case SDL_KEYDOWN :
        switch (event.key.keysym.sym)
        {
        case SDLK_UP:
            if(entity->pos_y - 10 >= 0)
                entity->pos_y -= 10;
            break;
        case SDLK_DOWN:
            if((entity->pos_y + 80)+ 10 <= WINDOW_HEIGHT_GAME)       
                entity->pos_y += 10;
            break;
        case SDLK_ESCAPE:
            responce = 1;
            break;
        }
        break;
    case SDL_KEYUP: 
        break;
    default:
        break;
    }
    return responce;
}