#include<stdio.h>
#include<stdlib.h> // srand, rand
#include<time.h> // time

#define ARR_SIZE 10

int main(int argc, char* argv[])
{
	/*
	int a = 10, b = 20;
	printf("value = %d\t%d\n", a, b);
	printf("address = %p\t%p\n", &a, &b);
	*/

	printf("\nUse of Pointers\n");
	int* ptrA; // integer pointer
	ptrA = (int*)malloc(sizeof(int)); // void*
	double* ptrB; // pointer to a double
	ptrB = (double*)malloc(sizeof(double));
	// ptrA = &a; // pointing to the memory location where 'a' is stored
	// ptrB = &b; // pointing to variable 'b'
	printf("Enter an integer value = ");
	scanf("%d", ptrA);
	printf("Enter a double value = ");
	scanf("%lf", ptrB);
	printf("value = %d\t%lf\n", *ptrA, *ptrB); // * dereference a pointer
	printf("address = %p\t%p\n", ptrA, ptrB);
	
	
	int n=0;
	printf("Enter the array size = ");
	scanf("%d", &n);
	// int arr[n]; // NOT allowed -- array size needs to be a constant, not a variable
	// dynamic memory allocation
	int* ptr;
	ptr = (int*)malloc(n*sizeof(int));
	int i=0;
	for(i=0; i<n; i++)
		ptr[i] = i; // *(ptr+i) = i;
	for(i=0; i<n; i++)
		printf("%d,%p\t", *(ptr+i), (ptr+i));
	/*
	int arr[5] = {1,2,3,4,5};
	int* ptr;
	ptr = arr; // &arr[0];

	printf("\nStarting address of array (address of the first value) = %p\n", arr); // arr = &arr[0]
	for(i=0; i<5; i++)
		printf("%d,%p\t", arr[i], &arr[i]); // *(arr+i), (arr+i) 
	
	printf("\n\nUse of Pointers\n");
	for(i=0; i<5; i++)
		printf("%d,%p\t", *(ptr+i), (ptr+i)); // ptr[i], &ptr[i] 
	*/
	/*
	srand(time(0));
	for(i=0; i<5; i++)
	{
		a = rand();
		a = (a%(20-6+1)) + 6;
		printf("%d\t", a);
	}
	*/
	printf("\n");
	return 0;
}
