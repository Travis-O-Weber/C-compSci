#include<stdio.h>

#define PI 3.14;
#define MAX (5 + 5)
#define TRUE 1
#define FALSE 0

int main(int argc, char* argv[])
{
	//double a = PI * 2; // a = 3.14; * 2;
	int b = MAX * 2; // b = (5 + 5) * 2;

	// Get 'N' and starting number 's' from user
	int s=0, N=0;
	// 1,1  1,3  1,5  1,7  1,9  1,11 .. 1,2N-1
	// 2,2N-1  2,2N-1-2  2,2N-1-4  2,2N-1-6  2,2N-1-8  2,2N-1-10 .. 2,1
	// ...
	// N,1  N,3  N,5  N,7  N,9  N,11 .. N,2N-1
	printf("Enter N : ");
	scanf("%d", &N);
	int i;
	int j;

/*
N=3
  *
 * *
* * *	

N=4
   *
  * *
 * * *
* * * *
*/

/*
N=3
  *
 ***
*****

N=4
   *
  ***
 *****
*******
*/

	for(j=1; j<=N; j++)
	{
		if(j%2 == 0)
		{
			for(i=(2*N-1); i>=1; i=i-2)
			{
				printf("%d,%d\t", j, i);
			}
		}
		else
		{
			// deciding the line number that we want to print
			for(i=1; i<=(2*N-1); i=i+2)
			{
				// deciding how each column for a given/any line is being printed
				printf("%d,%d\t", j,i);
			}
		}
		printf("\n");
	}
	/*
	printf("Enter s N : ");
	scanf("%d %d", &s, &N);
	// Print 'N' integers starting from 's'
	// s=5, N=10 (s+N)=15
	int i; // i -> iterator
	i = s; // loop initialization
	while(i<(s+2*N)) // loop condition
	{
		printf("%d ", i); // loop body
		i = i+2; // loop iterator update
	}
	printf("\n");
	int j; // j -> iterator
	i=s;
	for(j=0; j<N; j++) // initialization; condition; update
	{
		printf("%d ", i); // loop body
		i = i+2;
	}
	printf("\n");
	*/
	return 0;
}
