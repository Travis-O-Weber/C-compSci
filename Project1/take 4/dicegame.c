#include<stdio.h>
#include"dicegame.h"
#include <stdlib.h>

int getRandomNumber( int min, int max )
{
return (rand()%(max-min+1))+min;
}
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
int getRoundPoints(ROUNDTYPE getRoundType)// maybe error
{
  int t = getRandomNumber(1,10);

  if (getRoundType == BONUS)
  {
    return 200;
  }
  if(getRoundType == DOUBLE)
  {
    return t*2;
  }
  if (getRoundType == REGULAR)
  {
    return t;
  }
}
void printPlayerPoints(int p1,int p2)
{
printf("P1    : %d\n", p1);
printf("P2    : %d\n", p2);
}
void printRoundInfo(ROUNDTYPE t, int dice,int points)
{
printf("Type    : %d\n",t);
printf("DICE    : %d\n",dice);
printf("POINTS  : %d\n",points);
}

