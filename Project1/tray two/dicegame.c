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
int getRoundPoints(ROUNDTYPE roundType)
{
  int t = getRandomNumber(1,10);

  if (roundType == BONUS)
  {
    return 200;
  }
  if(roundType == DOUBLE)
  {
    return t*2;
  }
  if (roundType == REGULAR)
  {
    return t;
  }
}
void printPlayerPoints(int P1,int P2)
{
printf("P1    : %d\n", P1);
printf("P2    : %d\n", P2);
}
void printRoundInfo(ROUNDTYPE t, int die,int pointAdder)
{
printf("Type    : %d\n",t);
printf("DICE    : %d\n",die);
printf("POINTS  : %d\n",pointAdder);
}

int getRandomNumber( int min, int max )
{
return 99;
}