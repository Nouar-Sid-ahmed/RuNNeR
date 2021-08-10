#include "mi.h"

Ennemys *generateEnnemys(Win *app, int n)
{
    Ennemys *ennemys            = malloc(sizeof(Ennemys));
    Ennemys *ennemySortie       = ennemys;
    for (int k = 0 ; k < n ; k++)
    {
        ennemys->ennemy         = generateEnnemy(app, k, n);
        ennemys->vitesse        = (rand() % 7) + 3;
        ennemys->order          = k;
        ennemys->next           = malloc(sizeof(Ennemys));
        ennemys                 = ennemys->next;
    }
    ennemys = NULL;
    return ennemySortie;
}