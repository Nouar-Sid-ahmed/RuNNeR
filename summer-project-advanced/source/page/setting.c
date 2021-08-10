#include "mi.h"

Player *setting(Player *user)
{/*
    Win *app = malloc(sizeof(Win));
    Entity *curser = malloc(sizeof(Entity));
    Entity *background = malloc(sizeof(Entity));

    int vitesse = 30;
    int choice = 0;

    if (initSDL(app,0) < 0){
        return -1;
    }

    user = initPlayer();
    background = generateBackground(app,background,0);
    curser = generateCurser(app,curser);
    
    while((choice = input_handler_menu(curser,choice)) < 3)
    {
        prepareCanvas(app);
        drawEntity(app, background);
        drawEntity(app, curser);
        presentCanvas(app);
        SDL_Delay(vitesse);
    }
    if (choice == 6)
        return 0;

    SDL_DestroyRenderer(app->renderer);
    SDL_DestroyWindow(app->window);
    free(app);
    free(curser);
    free(background);

    switch (choice % 3)
    {
    case 0:
        menu(game(user));
        break;
    case 1:
        menu(setting(user));
        break;
    case 2:
        menu(personalisation(user));
        break;
    default:
        break;
    }
    //saveUser(user);
    return 0;*/
    return user;
}