#include "mi.h"

SDL_Texture *loadTexture(Win *app, char *img_path)
{
    
    SDL_Texture *texture;

    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading: %s", img_path);
    texture = IMG_LoadTexture(app->renderer, img_path);
    if (texture == NULL)
    {
        printf("Failed to load texture %s\n", IMG_GetError());  
    }
    return texture;
}