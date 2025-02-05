/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include "cards.h"
void main()
{
int n;
printf("============= CARD BATTLE GAME ============\nHow many cards will each player start with? ");
scanf("%d",&n);
printf("\n============= PLAYER 1 V PLAYER 2 SHOWDOWN ============\n");
Card* player1=NULL;
Card* player2=NULL;
int rc=1;
player1=buildDeck( n );
printCards(player1);

player2=buildDeck( n );
printCards(player2);

while((player1!=NULL)&&(player2!=NULL))
{
   printf("ROUND %d \n",rc);
   Card* c1=player1;
   Card* c2=player2;
   player1=removeCard(player1);
   player2=removeCard(player2);
   if((c1->CT==ATTACK)&&(c2->CT==ATTACK))
   {
       if(c1->value<c2->value)
       {
       player1=removeCard(player1);
       Card* c=createCard();
       player2=addCard(player2,c);
       printf("Player 1 loses a Card Player 2 gains a card");
       }
       else if(c1->value>c2->value)
       {
       player2=removeCard(player2);
       Card* c=createCard();
       player1=addCard(player1,c);
       printf("Player 2 loses a Card Player 1 gains a card");
       }

   }
   if((c1->CT==ATTACK)&&(c2->CT==DEFEND))
   {
       if(c1->value<c2->value)
       {
       player1=removeCard(player1);
       Card* c=createCard();
       player2=addCard(player2,c);
       printf("Player 1 loses a Card Player 2 gains a card");
       }
       else if(c1->value>c2->value)
       {
       Card* c=createCard();
       player1=addCard(player1,c);
       printf("Player 1 gains a card");
       }

   }
   if((c1->CT==ATTACK)&&(c2->CT==RUN))
   {
       player2=removeCard(player2);
       printf("Player 2 loses a Card");
   }
   if((c1->CT==DEFEND)&&(c2->CT==ATTACK))
   {
       if(c1->value<c2->value)
       {
       Card* c=createCard();
       player2=addCard(player2,c);
       printf("Player 2 gains a card");
       }
       else if(c1->value>c2->value)
       {
       player2=removeCard(player2);
       Card* c=createCard();
       player1=addCard(player1,c);
       printf("Player 2 loses a Card Player 1 gains a card");
       }
   }
   if((c1->CT==DEFEND)&&(c2->CT==DEFEND))
   {
       //nothing happens
      
      
   }
   if((c1->CT=DEFEND)&&(c2->CT==RUN))
   {
       player2=removeCard(player2);
       Card* c=createCard();
       player1=addCard(player1,c);
       printf("Player 2 loses a Card Player 1 gains a card");
   }
   if((c1->CT==RUN)&&(c2->CT==ATTACK))
   {
       player1=removeCard(player1);
       printf("Player 1 loses a Card");
   }
   if((c1->CT==RUN)&&(c2->CT==DEFEND))
   {
       player1=removeCard(player1);
       Card* c=createCard();
       player2=addCard(player2,c);
       printf("Player 1 loses a Card Player 2 gains a card");

   }
   if((c1->CT==RUN)&&(c2->CT==RUN))
   {
       player1=removeCard(player1);
       printf("Player 1 loses a Card");
       player2=removeCard(player2);
       printf("Player 2 loses a Card");
      

   }
   printf("\n");
   rc=rc+1;  
   printCards(player1);
   printCards(player2);
}
if((player1==NULL)&&(player2==NULL))
printf("TIE\n");
else if(player1==NULL)
printf("Player 2 wins\n");
else if(player2==NULL)
printf("Player 1 wins\n");
}