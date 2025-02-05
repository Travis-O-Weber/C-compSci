#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

/*
if(! defined)
{
define
function prototypes
}
*/

// typedef int INT32; // typedef oldType newType;

int main(int argc, char* argv[])
{
	int n=0;
	printf("Enter n : " );
	scanf("%d", &n);
	// int arr[n]; // NOT Allowed
	int* arr = (int*)malloc(n*sizeof(int));
	double avg = 0;
	setArrayValues(arr, n, 1);
	printArrayValues(arr, n);
	calculateAverage(arr, n, &avg);
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
if(!defined)
{
define 
function prototypes
}
...
...
..
*/

