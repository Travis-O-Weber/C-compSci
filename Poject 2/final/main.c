/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/ 
#include<stdio.h>
#include<stdlib.h>
#include"route-records.h"
  
int main (int argc, char *argv[]) 
{
  
    FILE * csv = NULL;
  
RouteRecord * routeRecord;
  
char choice[2];
  
int num;
  
int length;
  
char tempOrigin[4];
  
char tempDestination[4];
  
char tempAirline[3];
  
int TRUE = 1;
  
    if (argc < 2) //check argv 
    {
      
printf ("ERROR: Missing file name\n");
      
return 1;
    
}
  
  else if (argc > 2)
    {
      
printf ("ERROR: Too many arguments\n");
      
return 1;
    
}
    
    printf ("Opening %s\n", argv[1]); //open file using argv
  
csv = fopen (argv[1], "r");
  
    if (csv == NULL)// check to see if csv file opens 
    {
      
printf ("ERROR: Could not pen file\n");
      
return 1;
    
}
    routeRecord = createRecords (csv); //call create records 
  
    length = fillRecords (routeRecord, csv);//go through the CSV file again to fill in the values
  
printf ("Unique routes operated by airlines: %d\n\n", --length);
  
    fclose (csv); //cose file
    
    while (TRUE)// create loop
    
    {
      
printMenu ();		//print function 
      
scanf ("%s", choice);	// user input
      
num = atoi (choice);	// non int value 
      switch (num)
	
	{
	
case 1:
	  
printf ("Enter origin: ");
	  
scanf ("%s", tempOrigin);
	  
printf ("Enter destination: ");
	  
scanf ("%s", tempDestination);
	  
printf ("\n");
	  
searchRecords (routeRecord, length, tempOrigin, tempDestination,ROUTE);
	  
break;
	
 
case 2:
	  
printf ("Enter origin: ");
	  
scanf ("%s", tempOrigin);
	  
printf ("\n");
	  
searchRecords (routeRecord, length, tempOrigin, tempDestination,ORIGIN);
	  
break;
	
 
case 3:
	  
printf ("Enter destination: ");
	  
scanf ("%s", tempDestination);
	  
printf ("\n");
	  
searchRecords (routeRecord, length, tempDestination, tempOrigin,DESTINATION);
	  
break;
	
 
case 4:
	  
printf ("Enter airline: ");
	  
scanf ("%s", tempAirline);
	  
printf ("\n");
	  
searchRecords (routeRecord, length, tempAirline, tempDestination,AIRLINE);
	  
break;
	
 
case 5:
	  
printf ("Good-bye!\n");
	  
TRUE = 0;
	  
break;
	
 
default:
	  
printf ("Invalid choice.\n");
	  
break;
	
}
    
}
  
free (routeRecord);
  
return 0;

}
