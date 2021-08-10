#include "mi.h"

Player *setting(Player *user)
{
    Win *app = malloc(sizeof(Win));
    Entity *background = malloc(sizeof(Entity));

    int vitesse = 30;
    int choice = 0;
    char str[50];

    initSDL(app,0);

    user = initPlayer();
    background = generateBackground(app,background,3);
    
    while((choice = input_handler_setting(choice)) < 3)
    {
        prepareCanvas(app);
        drawEntity(app, background);
        user->nEnnemy = 3 + choice;
        drawString(app,"Number of ennemy :    ", 70, WINDOW_HEIGHT_PERSONNALISATION/2 - 50, 250, 50, 0);
        sprintf(str,"%d",user->nEnnemy);
        drawString(app,str, 320, WINDOW_HEIGHT_PERSONNALISATION/2 - 50, 60, 50, 1);
        presentCanvas(app);
        SDL_Delay(vitesse);
    }
    if (choice == 6)
        return 0;

    SDL_DestroyRenderer(app->renderer);
    SDL_DestroyWindow(app->window);
    free(app);
    free(background);

    return user;
}