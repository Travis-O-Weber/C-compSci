#include<stdio.h>

#define PI 3.14;

#define MAX (5+5)

#define TRUE 1
#define FALSE 0

int main(int argc, char* argv[])
{
	/*
	double pi = 3.14;
	double a = PI * 2; // double a = 3.14; * 2;

	int b = MAX * 2; // int b = (5+5) * 2;
	*/

	// Take two integers from user 's' and 'N'
	// s -> starting number
	// N -> number of integers you want to print
	int M=0, N=0;
	printf("Enter M N : ");
	scanf("%d %d", &M, &N);
	// print 'N' integers starting from 1
	// 1 2 3 4 ... N
	// 1,1  1,2  1,3  1,4  1,5  ..  1,N

	// 1,1  1,3  1,5  1,7  1,9
	// 2,9  2,7  2,5  2,3  2,1
	// 3,1  3,3  3,5  3,7  3,9
	// 4,9  4,7  4,5  4,3  4,1

	int i,j; // iterator
	i = 1; // initialization
	for(j=1; j<=M; j++)
	{
		// deciding the line number
		if(j>=10)
			break;
		else if(j%2==0)
		{
			for(i=(2*N-1); i>=1; i=i-2)
			{
				printf("%d,%d\t", j, i);
			}
		}
		else
		{
			for(i=1; i<=(2*N-1); i=i+2) // initialization; condition; update
			{
				// printing the line one cell / column at a time
				printf("%d,%d\t", j, i); // loop body
			}
		}
		printf("\n");
	}
	/*
	int j=1;
	for(i=1; i<=N; i++)
	{
		printf("1,%d\t", j);
		j = j+2;
	} */
	return 0;
}
