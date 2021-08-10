#include "mi.h"



Player *game(Player *user)
{
  //    Partie *partie = malloc(sizeof(Partie));
    Win *app = malloc(sizeof(Win));
    initSDL(app,1);

    int score   = 0;
    int vie     = 3;
    int status  = 0;
    int vitesse = 1;
    char str[50];

    Entity *background1     = malloc(sizeof(Entity));
    Entity *background2     = malloc(sizeof(Entity));
    Entity *backgroundAdd1  = malloc(sizeof(Entity));
    Entity *backgroundAdd2  = malloc(sizeof(Entity));
    background1             = generateBackground(app,background1,1);
    background2             = generateBackground(app,background2,1);
    backgroundAdd1          = generateBackground(app,backgroundAdd1,2);
    backgroundAdd2          = generateBackground(app,backgroundAdd2,2);
    background2->pos_x      = WINDOW_WIDTH_GAME;
    backgroundAdd2->pos_x   = WINDOW_WIDTH_GAME;

    Entity *player          = malloc(sizeof(Entity));
    player                  = generatePLayer(app,player,user->spaceShip);
    
    Ennemys *ennemys        = generateEnnemys(app,user->nEnnemy);
    Ennemys *ennemysB       = malloc(sizeof(Ennemys));
    

    while((status = input_handler(player)) >= 0 && vie > 0 )
    {
        
        // pause
        //while (input_handler(player)) {}
        score++;
        if (score % 200 == 0)
        {
            score = 0;
            user->money++;
        }
        prepareCanvas(app);

        // background
        drawEntity(app, background1);
        drawEntity(app, background2);
        drawEntity(app, backgroundAdd1);
        drawEntity(app, backgroundAdd2);
        background1     = updateBackground(background1,1);
        background2     = updateBackground(background2,1);
        backgroundAdd1  = updateBackground(backgroundAdd1,2);
        backgroundAdd2  = updateBackground(backgroundAdd2,2);
        
        // player
        drawEntity(app, player);

        // ennemy

        ennemys  = updateEnnemys(app,ennemys,user->nEnnemy,vitesse);
        ennemysB = ennemys;
        for (int k = 0 ; k < user->nEnnemy ; k++)
        {
            if (ennemysB->ennemy->pos_x <= 60)
            {
                if(inInterval(ennemysB->ennemy->pos_y,player->pos_y,player->pos_y - 70) || inInterval(ennemysB->ennemy->pos_y - ennemysB->ennemy->height,player->pos_y,player->pos_y - 70) || inInterval(player->pos_y ,ennemysB->ennemy->pos_y, ennemysB->ennemy->pos_y - ennemysB->ennemy->height) || inInterval(player->pos_y - 70,ennemysB->ennemy->pos_y, ennemysB->ennemy->pos_y - ennemysB->ennemy->height))
                {
                    explosion(app,player,ennemysB->ennemy);
                    SDL_Delay(100);
                    vie--;
                    if (vie <= 0)
                        gameOver(app);
                    ennemysB->ennemy = generateEnnemy(app, ennemysB->order,user->nEnnemy);
                }
            }
            drawEntity(app, ennemysB->ennemy);
            ennemysB = ennemysB->next;
        }
        // score
        drawString(app,"Money :    ", 4, 0, 100, 50, 0);
        sprintf(str,"%d",user->money);
        drawString(app,str, 104, 0, 60, 50, 1);

        // vie
        if (vie > 0){
            drawString( app,"vie :  ", WINDOW_WIDTH_GAME*(9-vie-1)/10, 0, WINDOW_WIDTH_GAME*2/10, 50, 0);
            for(int k = 0; k < vie; k++)
            {
                drawString( app,"I", WINDOW_WIDTH_GAME*(9-k)/10, 2, WINDOW_WIDTH_GAME/10, 50, 2);
            }
        }
        presentCanvas(app);
        if (vie <= 0)
            SDL_Delay(1500);
        SDL_Delay(15);
    }
    /*if (vie == 0 && (status = input_handler(player)) >= 0)
    {
        drawString(app,"Play Again",WINDOW_WIDTH_GAME/5,WINDOW_HEIGHT_GAME*4/6,WINDOW_WIDTH_GAME/5,WINDOW_HEIGHT_GAME/6,0);
    }*/
    SDL_DestroyRenderer(app->renderer);
    SDL_DestroyWindow(app->window);

    free(app);
    free(background1);
    free(background2);
    free(backgroundAdd1);
    free(backgroundAdd2);
    free(player);
    return user;
}



