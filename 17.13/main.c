/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "linkedlist.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main(int argc,char *argv[]) {
    if (argc < 2) {
        printf("ERROR NO ARGS\n");
        exit(0);
    } else {
        LLNode *head = NULL, *node;

        FILE *fptr;
        fptr = fopen(argv[1], "r");
        char line[256];
        while (fgets(line, sizeof(line), fptr)) {
            char *token = strtok(line, ",");
            int id = atoi(token);
            char *name = strtok(NULL, ",");
            double gpa = atof(strtok(NULL, ","));
            node = createNode(id, name, gpa);
            insertNode(&head, node);




        }
        printf("Average = %.2lf\n", averageGPA(&head));
        printLL(&head);
        destroyLL(&head);
    }
}