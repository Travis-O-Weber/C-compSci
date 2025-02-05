//header guards
#ifndef SLL_LINKEDLIST_H
#define SLL_LINKEDLIST_H

//LLNode defination
 struct Node{
    int id;
    char name[10];
    double gpa;
    struct Node *next;

};
typedef struct Node LLNode;

//Other provided functions
LLNode* createNode(int,char[],double);
LLNode* insertNode(LLNode**,LLNode*);
double averageGPA(LLNode**);
void printLL(LLNode**);
LLNode* destroyLL(LLNode**);

#endif 
