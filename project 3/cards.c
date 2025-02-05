#include <stdio.h>
#include<stdlib.h>
#include "cards.h"
int rand_prob()
{
int c=rand();
if(c>=RAND_MAX/2)//50 percent
return 1;
else if((c<RAND_MAX/2)&&(c>RAND_MAX/10))
return 0;
else
return 2;

}
Card* createCard()
{
   Card* new_card= (Card*) malloc(sizeof(Card));
   int r=rand();
   r=(r%8)+1;
   new_card->value=r;
   int c=rand_prob();
   if(c==0)new_card->CT=ATTACK;
   else if(c==1)new_card->CT=DEFEND;
   else new_card->CT=RUN;
   return new_card;
}
Card* removeCard( Card* head )
{
   head=head->next;
   return head;
}
Card* addCard( Card* head, Card* c )
{
   Card* temp=head;
   Card* pre_temp=NULL;
   if(head!=NULL)
   {
       while(temp->value>c->value)
       {
           pre_temp=temp;
           temp=temp->next;
       }
       c->next=temp;
       if(pre_temp!=NULL)
       {
           pre_temp->next=c;
       }
       else
       {
           head=c;
       }
  
   }
   else
   {
       c->next=head;
       head=c;
   }
      
return head;  
}
int getLength( Card* head )
{
   int len=0;
   Card* temp=head;

if(temp==NULL)
   {
   return 0;
   }
   while(temp!=NULL)
   {
       len=len+1;
       temp=temp->next;
   }
  
   return len;
  
}
void printCard( Card* head )
{
   printf("%c",head->CT);
   printf("%d",head->value);
   printf("\t");
}
void printCards( Card* head )
{
   Card* temp=head;
   while(temp!=NULL)
   {
       printCard(temp);
       temp=temp->next;
   }
printf("\n");
  
}
Card* buildDeck( int n )
{
   Card* head=NULL;
   int i=0;
   while(i<n)
   {
   Card* c=createCard();
   //printCard(c);
   //printf("\n");
   head=addCard( head, c );
   //printCard(head);
   //printf("\n");

   i++;
  
   }
   return head;

}
Card* destroyCards( Card* head )
{
   head=NULL;
   return head;
}