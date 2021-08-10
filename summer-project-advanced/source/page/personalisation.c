#include "mi.h"

Player *personalisation(Player *user)
{
    Win *app = malloc(sizeof(Win));
    Entity *player = malloc(sizeof(Entity));
    Entity *background = malloc(sizeof(Entity));

    int choice = 0;

    initSDL(app,0);

    user = initPlayer();
    background = generateBackground(app,background,3);
    
    while((choice = input_handler_personatisation(choice)) < 4)
    {
        prepareCanvas(app);
        drawEntity(app, background);
        user->spaceShip = choice;
        player          = generatePLayer(app,player,user->spaceShip);
        player->pos_x   = WINDOW_WIDTH_PERSONNALISATION/3;
        player->pos_y   = WINDOW_HEIGHT_PERSONNALISATION/3;
        player->height  = WINDOW_HEIGHT_PERSONNALISATION/3;
        player->width   = WINDOW_WIDTH_PERSONNALISATION/3;
        drawEntity(app, player);
        presentCanvas(app);
        SDL_Delay(15);
    }
    if (choice == 8)
        return 0;

    SDL_DestroyRenderer(app->renderer);
    SDL_DestroyWindow(app->window);
    free(app);
    free(player);
    free(background);

    //saveUser(user);
    return user;
}