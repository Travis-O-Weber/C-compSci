#include<stdio.h>

int main(int argc, char* argv[]) // (String[] args)
{
	// String a; a.length(); args.length();
	printf("BYE CS 1714\n"); // System.out.print();

	int a=10, b; // garbage -> no default value
	char c = 'i';
	double d = 0.0;

	// System.out.print("value of a = " + a + " test"); "value of a = ?? test"
	printf("value of a = %d  test\n", a);
	printf("values of b, c, d = %d, %c, %lf\n", b, c, d);

	// get values from user
	// a = s.nextInt();
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b c d : ");
	scanf("%d %c %lf", &b, &c, &d);

	printf("\nUser values -> a = %d, b = %d, c = %c, d = %lf\n", a, b, c, d);
	return 0;
}
