/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include"route-records.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

RouteRecord * createRecords (FILE * fileIn)
{
  int numRecords = 0;

  while (!feof (fileIn))
    {
      char line[40];
      fgets (line, 39, fileIn);
      if (line[0] == '\n')
	{
	  continue;
	}
      else
	{
	  numRecords++;
	}
    }

  rewind (fileIn);		//rewind file

  RouteRecord *records = malloc (sizeof (RouteRecord) * numRecords);	//memory for records

  int i = 0;			//i has to be outside due to moba 

  for (i = 0; i < numRecords; i++)	// go through the array 
    {
      int j;
      for (j = 0; j < 6; j++)
	{
	  records[i].passengers[j] = 0;
	}
    }


  rewind (fileIn);		//rewind file 


  return records;		//returns array values
}


int fillRecords (RouteRecord * r, FILE * fileIn)
{

  int indx = 0;
  int month = 0;
  char tempOrigin[4];
  char tempDestination[4];
  char tempAirline[3];
  char passenger[10];
  int tempPassengers;
  char tmp[500];
  while (fgets (tmp, 499, fileIn) != NULL)
    
    {

      sscanf (tmp, "%d,%[^,],%[^,],%[^,],%[^,],%d", &month, tempOrigin,tempDestination, tempAirline, passenger, &tempPassengers);

      int index = findAirlineRoute (r, indx, tempOrigin, tempDestination, tempAirline, 0);	//call findarirlines 
      if (index == -1)		// afd flight to array 
	{


	  strcpy (r[indx].origin, tempOrigin);
	  strcpy (r[indx].destination, tempDestination);
	  strcpy (r[indx].airline, tempAirline);

	  r[indx].passengers[month - 1] = tempPassengers;
	  ++indx;
	}
      else
	{


	  r[index].passengers[month - 1] += tempPassengers;	// add passengers 

	}
    }
  rewind (fileIn);
  return indx;
}


int findAirlineRoute (RouteRecord * r, int length, const char *origin,const char *destination, const char *airline, int i)
{

  if (i == length)
    {
      return -1;
    }

  else if (strcmp (r[i].origin, origin) == 0 && strcmp (r[i].destination, destination) == 0 && strcmp (r[i].airline, airline) == 0)	//return index
    {
      return i;
    }
  else
    {
      return findAirlineRoute (r, length, origin, destination, airline,
			       i + 1);
    }

}				//recursive funcction 


void searchRecords (RouteRecord * r, int length, const char *key1,
	       const char *key2, SearchType st)
{
  switch (st)
    {
    case ORIGIN:
      printf ("Search by origin...\n");	//orgin print
      break;

    case ROUTE:
      printf ("Search by route...\n");	// route print
      break;

    case AIRLINE:
      printf ("Search by airline...\n");	// airline print
      break;

    case DESTINATION:
      printf ("Search by destination...\n");	//destination print
      break;
    }

  int month[6] = { 0, 0, 0, 0, 0, 0 };	// hold tot passengers 
  int numMatches = 0;
  int i = 0;


  for (i = 0; i < length; i++)	// go through array 
  {
      switch (st)
	{
	case 0:		//route
	  if (strcmp (r[i].origin, key1) == 0
	      && strcmp (r[i].destination, key2) == 0)
	    {
	      printf ("%s (%s-%s) ", r[i].airline, r[i].origin,r[i].destination);
	      numMatches++;
	      int j;
	      
        for (j = 0; j < 6; j++)
		{
		  month[j] += r[i].passengers[j];
		}
	    }
	  break;

	case 1:		//orgin
	  if (strcmp (r[i].origin, key1) == 0)
	    {
	      printf ("%s (%s-%s) ", r[i].airline, r[i].origin,r[i].destination);
	      numMatches++;
	      int j;
	      for (j = 0; j < 6; j++)
		{
		  month[j] += r[i].passengers[j];
		}
	    }
	  break;

	case 2:		//destination 
	  if (strcmp (r[i].destination, key1) == 0)
	    {
	      printf ("%s (%s-%s) ", r[i].airline, r[i].origin,r[i].destination);
	      numMatches++;
	      int j;
	      for (j = 0; j < 6; j++)
		{
		  month[j] += r[i].passengers[j];
		}
	    }
	  break;

	case 3:		//airline
	  if (strcmp (r[i].airline, key1) == 0)
	    {
	      printf ("%s (%s-%s) ", r[i].airline, r[i].origin,r[i].destination);
	      numMatches++;
	      int j;
	      for (j = 0; j < 6; j++)
		{
		  month[j] += r[i].passengers[j];
		}
	    }
	  break;
	}
    }
  printf ("\n%d matches were found.\n", numMatches);	//print 
  printf ("\nStatistics\nTotal Passengers:%22d\n", month[0] + month[1] + month[2] + month[3] + month[4] + month[5]);
  printf ("Total Passengers in Month 1: %10d\n", month[0]);
  printf ("Total Passengers in Month 2: %10d\n", month[1]);
  printf ("Total Passengers in Month 3: %10d\n", month[2]);
  printf ("Total Passengers in Month 4: %10d\n", month[3]);
  printf ("Total Passengers in Month 5: %10d\n", month[4]);
  printf ("Total Passengers in Month 6: %10d\n\n", month[5]);
  printf ("Average Passengers per Month: %9d\n",(month[0] + month[1] + month[2] + month[3] + month[4] + month[5]) / 6);
}

void printMenu ()
{
  printf ("\n\n######### Airline Route Records Database MENU #########\n");	//print menu
  printf ("1. Search by Route\n");
  printf ("2. Search by Origin Airport\n");
  printf ("3. Search by Destination Airport\n");
  printf ("4. Search by Airline\n");
  printf ("5. Quit\n");
  printf ("Enter your selection: ");
}
