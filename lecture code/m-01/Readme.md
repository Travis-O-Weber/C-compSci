Introduction to C Programming: Basic I/O and Variables
This repository contains introductory C programs demonstrating fundamental programming concepts, with comparisons to Java for CS1714 students transitioning between languages.
Learning Objectives

Understand basic C program structure
Learn variable declarations and initialization
Master input/output operations in C
Compare C and Java syntax differences
Understand memory addresses and references

Program Files
Copy.
├── 08-25-2021-0b1.c  # Basic I/O example 1
├── 08-25-2021-0c1.c  # Basic I/O example 2
└── 08-25-2021-0d1.c  # Basic I/O example 3
Key Concepts
Program Structure
cCopy#include<stdio.h>

int main(int argc, char* argv[]) {
    // program code
    return 0;
}
Java equivalent:
javaCopypublic class Main {
    public static void main(String[] args) {
        // program code
    }
}
Variable Declaration and Initialization
C:
cCopyint a = 10;        // initialized
int b;             // uninitialized (garbage value)
char c = '1';      // character
double d = 0.0;    // double precision float
Java equivalent:
javaCopyint a = 10;        // initialized
int b = 0;         // default value 0
char c = '1';      // character
double d = 0.0;    // default value 0.0
Input/Output Operations
Output in C vs Java
C:
cCopyprintf("value of a = %d\n", a);
printf("values: %d, %c, %lf\n", b, c, d);
Java equivalent:
javaCopySystem.out.println("value of a = " + a);
System.out.println("values: " + b + ", " + c + ", " + d);
Input in C vs Java
C:
cCopyscanf("%d", &a);                   // integer input
scanf("%d %c %lf", &b, &c, &d);   // multiple inputs
Java equivalent:
javaCopya = scanner.nextInt();             // integer input
b = scanner.nextInt();             // multiple inputs
c = scanner.next().charAt(0);
d = scanner.nextDouble();
Format Specifiers in C
SpecifierTypeExample%dIntegerprintf("%d", 42);%cCharacterprintf("%c", 'A');%lfDoubleprintf("%lf", 3.14);%sStringprintf("%s", "Hello");
Key Differences from Java

Memory Management:

C requires manual memory management
Variables don't have default values
Must use & operator for input addresses


Input/Output:

C uses format specifiers
Java uses string concatenation
C requires explicit newline (\n)


Variable Initialization:

C variables have garbage values if uninitialized
Java variables have default values



Common Mistakes to Avoid

Forgetting & in scanf:

cCopyscanf("%d", a);    // Wrong
scanf("%d", &a);   // Correct

Using wrong format specifiers:

cCopyprintf("%d", 3.14);    // Wrong
printf("%lf", 3.14);   // Correct

Missing newline characters:

cCopyprintf("Hello");     // No line break
printf("Hello\n");   // With line break
Compilation and Execution
To compile:
bashCopygcc -o program filename.c
To run:
bashCopy./program
Example Usage
bashCopy$ gcc -o example 08-25-2021-0b1.c
$ ./example
BYE CS 1714
value of a = 10 test
Enter a: 42
Enter b c d: 15 A 3.14

User values -> a = 42, b = 15, c = A, d = 3.140000
Debugging Tips

Check variable initialization
Verify format specifier matches
Ensure & is used with scanf
Look for garbage values
Check for buffer overflow

Additional Resources

C Programming Tutorial
Format Specifiers Reference
Memory Management in C
C vs Java Comparison Guide
