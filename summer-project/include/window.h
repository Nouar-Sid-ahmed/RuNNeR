#ifndef WINDOW
#define WINDOW

#define WINDOW_WIDTH 540
#define WINDOW_HEIGHT 360
#define WINDOW_NAME "RuNNeR"
#define ICON "img/img_texture/icon.jpg"
#define WINDOW_WIDTH_GAME 852
#define WINDOW_HEIGHT_GAME 480

typedef struct 
{
    SDL_Renderer *renderer;
    SDL_Window *window;
} Win;

#endif