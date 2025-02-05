#ifndef CARDS_H_ /* Include guard */
#define CARDS_H_
#include<stdio.h>

typedef enum CardType { ATTACK='A', DEFEND='D', RUN='R'} CardType;
typedef struct Card{
int value;
CardType CT;
struct Card* next;
} Card;
Card* createCard();
Card* removeCard( Card* head );
Card* addCard( Card* head, Card* c );
int getLength( Card* head ) ;
void printCard( Card* head );
void printCards( Card* head );
Card* buildDeck( int n ) ;
Card* destroyCards( Card* head );
#endif