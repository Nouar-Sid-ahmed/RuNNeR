#ifndef WINDOW
#define WINDOW

#define WINDOW_WIDTH 540
#define WINDOW_HEIGHT 360
#define WINDOW_NAME "RuNNeR"
#define WINDOW_WIDTH_GAME 760
#define WINDOW_HEIGHT_GAME 428
#define WINDOW_WIDTH_PERSONNALISATION 650
#define WINDOW_HEIGHT_PERSONNALISATION 406

typedef struct 
{
    SDL_Renderer *renderer;
    SDL_Window *window;
} Win;

#endif