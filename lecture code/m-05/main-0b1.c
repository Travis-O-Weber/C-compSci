#include<stdio.h>
#include<stdlib.h>
#include"functions.h"

// typedef oldType newType;
typedef int INT32;

typedef enum LIGHTCOLOR {RED, GREEN, YELLOW} LIGHTCOLOR;

int main(int argc, char* argv[])
{
	LIGHTCOLOR light=RED;
	//int light=0;
	if(light == RED)
	{}
	else if(light == GREEN)
	{}


	int n=0; // INT32 n=0;
	printf("Enter n : ");
	scanf("%d", &n);
	// int arr[n]; // NOT allowed
	int* arr = (int*)malloc(n*sizeof(int));

	int factor = 1;

	// initialize values in the array to be equal to the index * 1
	setArrayValues(arr, n, factor);
	printArrayValues(arr, n);

	// calculate average for all values in the array
	double average=0;
	calculateAverage(arr, n, &average);
	printf("Average = %lf\n\n", average);

	// update values of the array to be equal to the index * 2
	factor = 2;
	setArrayValues(arr, n, factor);
	printArrayValues(arr, n);

	// re-calculate average
	calculateAverage(arr, n, &average);
    printf("Average = %lf\n", average);

	free(arr);
	return 0;
}
