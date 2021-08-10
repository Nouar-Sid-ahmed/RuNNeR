#include "mi.h"

int menu()
{
    Player *user = malloc(sizeof(Player));
    Win *app = malloc(sizeof(Win));
    Entity *curser = malloc(sizeof(Entity));
    Entity *background = malloc(sizeof(Entity));

    int vitesse = 30;
    int choice = 0;

    if (initSDL(app,0) < 0){
        return -1;
    }
    user = initPlayer();
    background = generateBackground(app,0);
    curser = generateCurser(app);
    while((choice = input_handler_menu(curser,choice)) < 3)
    {
        prepareCanvas(app);
        drawEntity(app, background);
        drawEntity(app, curser);
        presentCanvas(app);
        SDL_Delay(vitesse);
    }

    switch (choice % 3)
    {
    case 0:
        SDL_DestroyRenderer(app->renderer);
        SDL_DestroyWindow(app->window);
        game(user);
        break;
    case 1:
        //setting();
        break;
    case 2:
        //user();
        break;
    default:
        break;
    }
    return 0;
}
