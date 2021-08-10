#include "mi.h"

int moyen(int a, int b)
{
    return (a + b)/2;
}
int inInterval(int numbre, int max, int min)
{
    if (numbre <= max && numbre >= min)
        return 1;
    return 0; 
}