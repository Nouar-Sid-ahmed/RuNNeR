#include "mi.h"

int input_handler_personatisation(int choice)
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
            if(count < 3)
            {
                count++;
            }
            break;
        case SDLK_SPACE:
            count += 4;
            break;
        case SDLK_ESCAPE:
            count = 8;
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