#include "mi.h"

Ennemys *updateEnnemys(Win *app, Ennemys *ennemyEntre, int n, int vitesse)
{   
    Ennemys *ennemySortie      = ennemyEntre;
    for(int k = 0 ; k < n; k++)
    {

        if(ennemyEntre->ennemy->pos_x <= 0 - ennemyEntre->ennemy->width)
        {
            ennemyEntre->ennemy     = generateEnnemy(app,k,n);
        }
        ennemyEntre->ennemy = updateEnnemy(ennemyEntre->ennemy,ennemyEntre->vitesse + vitesse);
        ennemyEntre = ennemyEntre->next;
    }
    return ennemySortie;
}