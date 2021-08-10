#include "mi.h"

int input_handler_setting(int choice)
{
    SDL_Event event;
    SDL_PollEvent(&event);
    int count = choice;
    switch (event.type)
    {
    case SDL_QUIT :
        return -1;
    case SDL_KEYDOWN :
        switch (event.key.keysym.sym)
        {
        case SDLK_LEFT:
            if(count > 0)
            {
                count--;
            }
            break;
        case SDLK_RIGHT:
            if(count < 2)
            {
                count++;
            }
            break;
        case SDLK_SPACE:
            count += 3;
            break;
        case SDLK_ESCAPE:
            count = 6;
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