/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Flight{
    char origin[4];
    char destination[4];
    char airline[3];
    int passengers;
}Flight;


int main(int argc, char* argv[])

{
   char buffer[1000];
   int size = 0;
   Flightplane;
   int i;
   char code[3]; 
   int numflights =0;
   int passengerCount = 0;
   if(argc!=3){
    printf(" Usage: ./exeName.inputFile.csv. outputFile.tx");
    return -1;
}
    FILEfileIn;
    fileIn = fopen(argv[1], "r");
    if( fileIn == NULL){
      printf(" Error openning");
    return -1;
}
    while(fgets(buffer, 1000, fileIn)!= NULL){
        size++;
}
    plane = (Flight)malloc((size)sizeof(Flight));
     while(fgets(buffer, 1000, fileIn)!= NULL){
         sscanf("%[^,],%[^,],%[^,],%d", plane[i].origin, plane[i].destination, plane[i].airline, &plane[i].passengers);
     }
     rewind(fileIn);
     fclose(fileIn);

    FILE*fileOut;
    fileOut= fopen(argv[1], "w");
    if( fileOut == NULL){
        printf(" Error openning");
        return -1;
    }
    printf("Enter two line code: %s", code); 
    scanf("%s", code);
    int j; 
    for(i=0; i< size; i++){
        if(strcmp (plane[i].airline, code) == 0)
        {
            numflights++;
            passengerCount += plane[i].passengers;
        }
    }
    printf("flights: %d\n", numflights);
    printf("passengers: %d\n", passengerCount);

    fclose(fileOut);
    return 0; 
}