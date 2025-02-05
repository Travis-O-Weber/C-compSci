#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARR_SIZE 10

int main(int argc, char* argv[])
{
	/*
	//char c='t'; //99
	int a=10; //100
	scanf("%d", &a);
	double b=20.0, d=15; //104, 112 
	printf("values = %d\t%lf\t%lf\n", a, b, d);
	printf("address = %p\t%p\t%p\n", &a, &b, &d);
	*/

	int* ptrA; // pointer to an integer
	ptrA = (int*)malloc(sizeof(int)); // void*
	*ptrA = 10;
	printf("Enter integer = ");
	scanf("%d", ptrA);
	double* ptrB; // double pointer
	ptrB = (double*)malloc(sizeof(double));
	*ptrB = 5.5;
	//ptrA = &a; // ptrA points to int 'a'
	//ptrB = &b; // ptrB stores memory address of 'b'
	printf("values = %d\t%lf\n", *ptrA, *ptrB); // * dereferences a pointer
	printf("address = %p\t%p\n", ptrA, ptrB);
	
	// & -> address for a value / variable 
	// * -> value at any address

	
	int n=0;
	printf("\nEnter the size of the array : ");
	scanf("%d", &n);
	int* ptr = (int*)malloc(n*sizeof(int));
	int i=0;
	// initialize values of array to be equals to the index
	for(i=0; i<n; i++)
		ptr[i] = i; // *(ptr+i) = i;
	for(i=0; i<n; i++)
		printf("%d,%p\t", *(ptr+i), (ptr+i));
	/*
	//int arr[n]; // NOT allowed -- size needs to be a constant, not variable.
	// dynamic memory allocation - malloc
	int arr[5] = {1,2,3,4,5};//100,104,108.112,116
	int* ptr = arr; //&arr[0];
	//ptr+1 = 104
	//ptr+2 = 108
	int i=0;
	for(i=0; i<5; i++)
		printf("%d,%p\t", arr[i], &arr[i]); // *(arr+i), (arr+i)
	printf("\n\nUse of pointers\n");
	for(i=0; i<5; i++)
		printf("%d,%p\t", *(ptr+i), (ptr+i)); // ptr[i], &ptr[i] 
	*/	

	/*
	srand(time(0));
	for(i=0; i<5; i++)
	{
		a = (rand() % (14-10 + 1)) + 10;
		printf("%d\t", a);
	}
	*/
	printf("\n");
	return 0;
}
