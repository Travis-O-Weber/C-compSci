/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "routeRecords.h"
int main(int argc, char *argv[])
{
char inputName[20];
strcpy(inputName, argv[1]);
FILE *inputFile;
printf("Opening passenger-data.csv... \n");
inputFile = fopen(inputName, "r");
checkFileOpening(inputFile);
RouteRecord *flights;
flights = createRecords(inputFile);
int flightsLength;
flightsLength = fillRecords(flights, inputFile);
int i;
char key1[5];
char key2[5];
SearchType searchKind = 0;
while (searchKind != 5)
{
searchKind = getMenuOption(key1, key2);
stringUpper(key1);
stringUpper(key2);
searchRecords(flights, flightsLength, key1, key2, searchKind);
}
return 0;
}