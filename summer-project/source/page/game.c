#include "mi.h"


void drawString(Win *app, char *str, int x, int y, int width, int height)
{
TTF_Font* police = TTF_OpenFont("ressource/police/stocky.ttf", 24);
SDL_Color White = {255, 255, 255, 255};
SDL_Surface* surfaceMessage = TTF_RenderText_Solid(police, str, White); 
SDL_Texture* Message = SDL_CreateTextureFromSurface(app->renderer, surfaceMessage);
SDL_Rect Message_rect;
Message_rect.x = x; 
Message_rect.y = y;
Message_rect.w = width;
Message_rect.h = height; 
SDL_RenderCopy(app->renderer, Message, NULL, &Message_rect);
TTF_Init();
}

int game(Player *user)
{
  //    Partie *partie = malloc(sizeof(Partie));

    Win *app = malloc(sizeof(Win));
    Entity *ennemy = malloc(sizeof(Entity));
    Entity *player = malloc(sizeof(Entity));
    Entity *background = malloc(sizeof(Entity));
    Entity *explosion = malloc(sizeof(Entity));
    Entity *gameOver = malloc(sizeof(Entity));
    
    int vitesse = 30;
    int count = 0;
    int score = 0;
    int vie = 1;

    char str[50];

    if (initSDL(app,1) < 0){
        return -1;
    }

    gameOver = generateGameOver(app);
    background = generateBackground(app,1);
    player = generatePLayer(app,user->spaceShip);
    ennemy = generateEnnemy(app);
    explosion = generateExplosion(app);
    

    while(input_handler(player) == 0 && vie > 0 )
    {
        score++;
        prepareCanvas(app);
        drawEntity(app, background);
        drawEntity(app, player);

        if (ennemy->pos_x <= 60)
        {
            if(inInterval(ennemy->pos_y,player->pos_y,player->pos_y - 70) || inInterval(ennemy->pos_y - ennemy->height,player->pos_y,player->pos_y - 70) || inInterval(player->pos_y ,ennemy->pos_y, ennemy->pos_y - ennemy->height) || inInterval(player->pos_y - 70,ennemy->pos_y, ennemy->pos_y - ennemy->height))
            {
                explosion->pos_y = moyen(ennemy->pos_y,player->pos_y);
                explosion->pos_x = moyen(ennemy->pos_x,player->pos_x);
                drawEntity(app,explosion);
                SDL_Delay(100);
                vie--;
                if (vie <= 0)
                {
                    drawEntity(app,gameOver);
                    vitesse = 1000;
                }
                count = 0;
                ennemy = generateEnnemy(app);
            }
        }

        if (count >= (WINDOW_WIDTH_GAME + ennemy->width))
        {
            count = 0;
            ennemy = generateEnnemy(app);
            if (vitesse > 12)
                vitesse -= 3;
        }
        
        drawEntity(app, ennemy);
        drawString(app,"Score :    ", 4, 0, 100, 50);
        sprintf(str,"%d",score);
        drawString(app,str, 104, 0, 60, 50);
        presentCanvas(app);
        SDL_Delay(vitesse);
        count+=3;
        ennemy = updateEnnemy(ennemy);
    }
    SDL_DestroyRenderer(app->renderer);
    SDL_DestroyWindow(app->window);
    menu();
    return 0;
}
