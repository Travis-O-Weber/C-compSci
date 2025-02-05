#include<stdio.h>

int main(int argc, char* argv[]) // String args[]
{
	// String a; a.length() 
	
	printf("BYE CS 1714\n"); // System.out.print();
	
	int a=10, b; // garbage -> no default value
	double d;
	d = 0.0;
	
	char c = '1';

	// System.out.print("value of a = " + a + " test"); // "value of a = 10"
	printf("value of a = %d test\n", a);

	// System.out.print("value of a = " + a + " b = " + b);
	printf("value of b = %d, a = %d, and c = %c \n", b, a, c);

	// a = s.nextInt();
	printf("Enter a : ");
	scanf("%d", &a);
	printf("\nEnter b c d : ");
	scanf("%d %c %lf", &b, &c, &d);
	
	printf("\nValues from user -> a = %d, b = %d, c = %c, d = %lf\n", a, b, c, d); 
	
	return 0;
}
