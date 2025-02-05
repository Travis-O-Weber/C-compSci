#ifndef FLIGHTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_RECORDS 200
#define FLIGHTS_H

typedef struct Flights_struct
{
char origin[3];
char destination[3];
char airline[3];
int passengers = 0;
} Flights;

#endif