#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARR_SIZE 10

int main(int argc, char* argv[])
{
	/*
	int a=10, b=20;
	// scanf("%d", &a);
	printf("value = %d\t%d\n", a, b);
	printf("address = %p\t%p\n", &a, &b);
	*/

	printf("\nUse of Pointers\n");	
	int* ptrA; // integer pointer
	ptrA = (int*)malloc(sizeof(int)); //malloc returns (void*)
	double* ptrB; // pointer to a double
	ptrB = (double*)malloc(sizeof(double));
	printf("Enter integer and double = ");
	scanf("%d%lf", ptrA, ptrB);
	//ptrA = &a; // pointing to the memory address of int 'a'
	//ptrB = &b; // pointing to the int 'a'
	// & -> address for the value / variable
	// * -> value at the address
	printf("values = %d\t%lf\n", *ptrA, *ptrB); // * dereference a pointer
	printf("address = %p\t%p\n", ptrA, ptrB);
	
	int n=0;
	printf("\nEnter the size of the array = ");
	scanf("%d", &n);
	// int arr[n]; // NOT allowed -- size needs to be a constant
	// dynamic memory allocation
	int* ptr = (int*)malloc(n*sizeof(int));	
	int i=0;
	for(i=0; i<n; i++)
		ptr[i] = i*2; // *(ptr+i) = i*2;
	for(i=0; i<n; i++)
		printf("%d,%p\t", *(ptr+i), (ptr+i));
	/*
	int arr[5] = {1,2,3,4,5}; // 100, 104, 108, 112, 116
	// arr = &arr[0] 
	int* ptr = arr; // &arr[0]=100
	int i=0;
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
		a = (rand() % (19-15+1)) + 15;
		printf("%d\t", a);
	}
	*/
	printf("\n");
	return 0;
}
