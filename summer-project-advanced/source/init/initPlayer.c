#include "mi.h"

Player *initPlayer()
{
    Player *player = malloc(sizeof(Player));
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    file = fopen("include/save", "r+");
    if (file == NULL){
        printf("Invalid file or empty\n");
        exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, file)) != -1){
        if (line[0] != '#'){
            player->vieBonus = atoi(strtok(line, ","));
            player->spaceShip = atoi(strtok(NULL, ","));
            player->money = atoi(strtok(NULL, ","));
            player->armement = strtok(NULL, ",");
            player->nEnnemy = atoi(strtok(NULL, ","));
        }
    }
    
    free(line);
    fclose(file);
    return player;
}

