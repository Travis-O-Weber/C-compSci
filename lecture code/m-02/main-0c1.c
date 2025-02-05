#include<stdio.h>

#define PI 3.14;
#define MAX (5+5)

int main(int argc, char* argv[])
{
	/*
	double a = PI * 2; // double a = 3.14; * 2;
	int b = MAX*2; // int b = (5+5)*2;
	*/
	// print 'N' integers starting with 's'
	int M=0, N=0;
	printf("Enter M N : ");
	scanf("%d %d", &M, &N);

	// 1,1  1,3  1,5  1,7  ..  1,2*N-1
	// 2,2*N-1  2,prev-2  2,prev-2  2,prev-2  ..  2,1
	// ...
	// N,1  N,3  N,5  N,7  ..  N,2*N-1
	int i,j; // i -> iterator

	for(j=1; j<=M; j++)
	{
		// select the line/row number -> j
		if(j%2 == 0)
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
				// printing cells/columns for any line/row
				printf("%d,%d\t", j, i);
			}
		}
		printf("\n");
	}
	return 0;
}
