/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "flights.h"

int main (int argc, char *argv[])
{
  Flight *FlightArr;
  // /Declare our array of 200 Words Struct/
  char str[200];
  int passengers = 0;
  int numflights = 0;
  int i=0;
  
    
  //If the program is run without any command line arguments,

  // arc will have the value 1. You can test it this way:/
  if (argc < 2)
    {
      printf ("ERROR NO ARGS");
      return 1;
    }

  //open file
  FILE *fileIn;
  fileIn = fopen (argv[1], "r");

  //check to see if file opens
  if (fileIn == NULL)
    {
      printf ("ERROR FILE NOT OPEN");
      return 1;
      fclose (fileIn);
    }
  //dynamically allocate an array of 200 Flight struct objects
  // sizeof() returns number of bytes for type
  // malloc() allocates specified number of bytes
  // cast void pointer to the desired pointer type
  FlightArr = (Flight *) malloc ((NUM_RECORDS) * sizeof (Flight));



  //read file ?? fscanf?
int ind =0;
while (fgets (str,200,fileIn )!= NULL)
{
    //sscanf (str, "%s,%s,%s,%d", FlightArr[ind].origin, FlightArr[ind].destination, FlightArr[ind].airline, &FlightArr[ind].passengers);
    char *data= strtok(str,",");
    strcpy (FlightArr[ind].origin,data);
    data = strtok(NULL, ",");
    strcpy (FlightArr[ind].destination,data);
    data = strtok(NULL, ",");
    strcpy (FlightArr[ind].airline,data);
    data = strtok(NULL, ",");
    FlightArr[ind].passengers = atoi(data);
    ind++;
}
char air[3];
 scanf("%s", air);
  for (i = 0; i < NUM_RECORDS; i++)
    {
        if(strcmp (FlightArr[i].airline, air) == 0)
        {
            numflights++;
            passengers+= FlightArr[i].passengers;
        }
    }
    printf ("airline: %s\nflights: %d\npassengers: %d\n", air, numflights, passengers);

  fclose (fileIn);
  return 0;
}
