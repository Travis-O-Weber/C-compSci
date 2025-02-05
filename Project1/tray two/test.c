
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"


int main(int argc, char* argv)
 {
 
ROUNDTYPE B  = DOUBLE;
ROUNDTYPE C  = REGULAR;

int P1=3;
int P2 = 4;
int die =2;
int pointAdder=400;
int output = getRoundPoints(B);
printf("%d\n",output);

 
 
 printPlayerPoints(P1, P2 );
 printRoundInfo(C,die,pointAdder );
 
 
  
   return 0;
 }

