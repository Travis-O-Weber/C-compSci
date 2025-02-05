/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/ 
#ifndef ROUTERECORDS_H
#define ROUTERECORDS_H
#include<stdlib.h>
#include<stdio.h>
  
typedef enum SearchType
{ ROUTE, ORIGIN, DESTINATION, AIRLINE } SearchType;

 
typedef struct RouteRecord_struct
{
  
char origin[4];
   
char destination[4];
   
char airline[3];
   
int passengers[6];
 
} RouteRecord;

 
RouteRecord * createRecords (FILE *);

int fillRecords (RouteRecord *, FILE *);

int findAirlineRoute (RouteRecord *, int, const char *, const char *,const char *, int);

void searchRecords (RouteRecord *, int, const char *, const char *,SearchType);

void printMenu ();

 
#endif	
