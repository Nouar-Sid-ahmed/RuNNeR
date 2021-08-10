#include "mi.h"

void drawString(Win *app, char *str, int x, int y, int width, int height, int colorID)
{
TTF_Font* police = TTF_OpenFont("ressource/police/stocky.ttf", 24);
int r = 0;
int g = 0;
int b = 0;
int a = 0;

switch (colorID)
{
case 0:
    /* White */
    r = 255;
    g = 255;
    b = 255;
    a = 255;
    break;
case 1:
    /* blue */
    r = 42;
    g = 122;
    b = 173;
    a = 255;
    break;
case 2:
    /* red */
    r = 173;
    g = 44;
    b = 42;
    a = 255;
    break;
default:
    break;
}
SDL_Color color = {r, g, b, a};
SDL_Surface* surfaceMessage = TTF_RenderText_Solid(police, str, color); 
SDL_Texture* Message = SDL_CreateTextureFromSurface(app->renderer, surfaceMessage);
SDL_Rect Message_rect;
Message_rect.x = x; 
Message_rect.y = y;
Message_rect.w = width;
Message_rect.h = height; 
SDL_RenderCopy(app->renderer, Message, NULL, &Message_rect);
TTF_Init();
}