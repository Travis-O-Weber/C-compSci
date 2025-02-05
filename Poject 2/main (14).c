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
  Flight *Flightarray;
  // /Declare our array of 200 Words Struct/
  char str[200];
  int passengers;

  //If the program is run without any command line arguments,
  // arc will have the value 1. You can test it this way:/
  if (argc < 2)
    {
      printf ("ERROR NO ARGS\n");
      return 1;
    }

  //open file
  FILE *fileIn = NULL;
  fileIn = fopen ("passenger-data-short.txt", "r");

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
  Flightarray = (Flight *) malloc ((NUM_RECORDS + 1) * sizeof (Flight));



  //read file ?? fscanf?

  while (fscanf (fileIn, "%s, %d, %d", airlineArr, &Flight, &passengers) ==
	 !NULL)
    {
      for (i = 0; i < passengers; i++)
	{
	  if (strcpy (FlightArray[i].Flight, str) == 0)
	    {
	      Flightarray[i].passengers = Flightarray[i].passengers + 1;
	      break;
	    }
	}
      if (i == passengers)
	{
	  strcpy (Flightarray[i].Flight, str);
	  Flightarray[i].Flight = 1;
	  passengers++;
	}
    }
  for (i = 0; i < passengers; i++)
    {
      printf ("airline: %s\nflights: %d\npassengers: %d\n",
	      airlineArr[i].flight, flightarray[i].flight,
	      flightarray[i].passengers);
    }
  fclose (fileIn);
  return 0;
}
