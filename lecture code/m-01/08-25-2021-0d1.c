#include<stdio.h>

int main(int argc, char* argv[]) // (String args[])
{
	// String a; a.length();
	printf("Hello CS 1714\n"); // System.out.print()

	int a=0, b; // garbage -> no default value
	double d = 0.0;
	char c = '1';

	// System.out.print("value of variable a = " + a + " test"); "value of variable a = 10" 
	printf("value of variable a = %d  test\n", a);

	printf("values for b = %d, c = %c, d = %lf\n", b, c, d);

	// a = s.nextInt(); 
	printf("Enter a : ");
	scanf("%d", &a); // a -> value, &a -> address where value is stored
	printf("Enter b, c, d : ");
	scanf("%d %c %lf", &b, &c, &d);

	printf("\nUser values -> a = %d, b = %d, c = %c, d  = %lf\n", a, b, c, d);
	return 0;
}
