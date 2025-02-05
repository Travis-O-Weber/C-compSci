
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"

int main(int argc, char* argv)
 {
    int die = 0; //rand 1-6 variable 
    int pointRand = 0; //rand 1-10 variable
    int typeRand = 0; //rand 1-10 variable
    
    int coinFlip = 0; //rand 1-2 variable
    
    int i=0; //incrimate for round numbers 
    
    int turn;
    
    int P1 = 0;
    int P2 = 0;
    
    int roundNUM; //user Input for round numbers
    int pointAdder; //use to add point
     
    srand(time(0));
    
    coinFlip = (rand()%2)+1; //rand 1-2
    
    
    printf("Enter the number of rounds: ");
    scanf("%d", &roundNUM);
    
    printf("P1    : %d\n", P1);// print starting score
    printf("P2    : %d\n", P2);// print starting score
    
        if (coinFlip ==1)
          {
              turn =1;
          }
        else
         {
             turn =2;
         } 
          
         //printf("p1 = %d\n",coinFlip); //usefor debugging 
         //printf("p2 = %d\n",turn); //usefor debugging 
    
      
     
     for (i=0; i<(roundNUM); i++)
      {
          printf("\nROUND %d\n--------\n",i+1);//roundnum with the dashes
          
          //typeRand = (rand()%10)+1; //rand 1-10



          die = (rand()%6)+1; //rand 1-6
          pointRand = (rand()%10)+1; //rand 1-10
          
          if (typeRand <= 2)//bounus
          {
              printf("Type  : BONUS\n");// print rand
              pointAdder = ((pointRand*10)+200);
          }
          
          if (typeRand >= 3 && typeRand <= 5)//Double
          {
              printf("Type  : DOUBLE\n");// print rand
              pointAdder = ((pointRand*10)*2);
          }
          
          if (typeRand > 5 && typeRand <= 10)//Regular
          {
              printf("Type  : REGULAR\n");// print rand
              pointAdder = (pointRand*10);
          }

          
           //printf("Type RandNumber: %d\n", typeRand); //usefor debugging 
          printf("Points  : %d\n", pointAdder); //usefor debugging 
           //printf("Point RandNumber: %d\n", pointRand); //usefor debugging 
          
          printf("Dice  : %d\n", die);// print rand
          printf("Player %d\n",turn);
          printf("\n");// new line 
       
       
       
       if (turn == 1 && die%2 !=0) //P1 Success
        {
            P1 = P1+pointAdder;
            turn =1;
            
            
            
            printf("P1 = %d", P1);
            printf("\n");// new line 
            printf("P2 = %d", P2);
            printf("\n");// new line 
        }
        else if (turn ==1 && die%2 ==0) //P1 Fail
        {
           P1 = P1-pointAdder;
           turn = 2;
           
            
            printf("P1 = %d", P1);
            printf("\n");// new line 
            printf("P2 = %d", P2);
            printf("\n");// new line 
        }
        
        else if (turn == 2  && die%2==0) //P2 Success
        {
            P2 = P2+pointAdder;
            turn =2;
            
            
            printf("P1 = %d", P1);
            printf("\n");// new line 
            printf("P2 = %d", P2);
            printf("\n");// new line 
        }
        
        
        else if (turn ==2  && die%2!=0) //P2 Fail
        {
            P2 = P2-pointAdder;
            turn = 1;
            
            
            
            printf("\n");//new line
            
            printf("P1 = %d", P1);
            printf("\n");// new line 

            printf("P2 = %d", P2);
            printf("\n");// new line 
        }

      }
      
        if (P1>P2)
        {
            printf("Player 1 wins");
        }
        else
        {
            printf("Player 2 wins");
        }
    
    
    printf("\nGAME OVER!!\n");
 
    return 0;
    }
    
