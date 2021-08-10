#include "mi.h"

int input_handler_menu(Entity *entity, int cnt) 
{
    SDL_Event event;
    SDL_PollEvent(&event);
    int count = cnt;
    switch (event.type)
    {
    case SDL_QUIT :
        return -1;
    case SDL_KEYDOWN :
        switch (event.key.keysym.sym)
        {
        case SDLK_UP:
            if(count >= 0)
            {
                count--;
                entity->pos_y -= 80;
            }
            break;
        case SDLK_DOWN:
            if(count < 3)
            {
                count++;
                entity->pos_y += 80;
            }
            break;
        case SDLK_SPACE:
            count += 3;
            break;
        default:
            break;
        }
        break;
    case SDL_KEYUP: 
        break;
    default:
        break;
    }
    return count;
}