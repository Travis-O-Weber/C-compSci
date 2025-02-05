#include<stdio.h>
#include"functions.h"

// set array values to equal the index * 1
void setArrayValues(int arr[], int arrSize, int factor)
{
    int i=0; // INT32 i=0;
    for(i=0; i<arrSize; i++)
        arr[i] = i * factor; // *(arr+i) = i;
}

// print array values
void printArrayValues(const int arr[], int arrSize)
{
    int i=0;
    printf("Array values : ");
    for(i=0; i<arrSize; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

// calculate average for the array values
void calculateAverage(const int arr[], int arrSize, double* average) // double* average = &avg;
{
    // arr[0] = 100;
    (*average) = 0; // *(&avg) = 0;
    int i=0;
    for(i=0; i<arrSize; i++)
        (*average) += arr[i];
    (*average) /= arrSize;
    arrSize = 100;
}

