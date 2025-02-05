#include<stdio.h>
#include"dicegame.h"

ROUNDTYPE getRoundType()
{
    int t = getRandomNumber(1,10);
    if(t>=1 && t <= 2)
        return BONUS;
    else if(t>=3 && t<=5)
        return DOUBLE;
    else
        return REGULAR;
}
