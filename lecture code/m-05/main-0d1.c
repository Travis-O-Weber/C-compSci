#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

/*
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void setArrayValues(int arr[], int arrSize, int factor);
void printArrayValues(const int arr[], int arrSize);
void calculateAverage(const int[], int, double*);

#endif
*/

// typedef oldType newTpe;
typedef int INT32;

typedef enum LIGHTCOLOR {RED, GREEN, YELLOW} LIGHTCOLOR;

int main(int argc, char* argv[])
{
	int n=0;
	//INT32 n=0;
	LIGHTCOLOR light = RED; // 0 - RED, 1-GREEN, 2-YELLOW
	
	// line 200
	if(light==RED)
	{}
	else if(light==GREEN)
	{}
	else if(light==YELLOW)
	{}

	printf("Enter n : ");
	scanf("%d", &n);
	// int arr[n]; //NOT allowed
	int* arr = (int*)malloc(n*sizeof(int));
	double avg = 0;

	setArrayValues(arr, n, 1);
	printArrayValues(arr, n);
	calculateAverage(arr, n, &avg); // *(&average) = 10;
	printf("Average = %lf\n", avg);

    setArrayValues(arr, n, 2);
    printArrayValues(arr, n);
	calculateAverage(arr, n, &avg);
    printf("Average = %lf\n", avg);
	
	free(arr);
	return 0;
}
/*
// functions.c
#include<stdio.h>
//#include"functions.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void setArrayValues(int arr[], int arrSize, int factor);
void printArrayValues(const int arr[], int arrSize);
void calculateAverage(const int[], int, double*);

#endif
*/

