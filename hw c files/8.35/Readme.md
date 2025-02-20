Mathematical Functions Program
A C program that implements two mathematical functions:

Calculating the average of an array
Finding roots of a quadratic equation using the quadratic formula

Project Structure
.
├── main.c          # Main program with user input/output
├── functions.c     # Implementation of mathematical functions
└── functions.h     # Function declarations and constants
Features

Calculate average of a fixed-size array
Solve quadratic equations by finding both roots
User input for array elements and quadratic coefficients
Modular design with separate function implementations

Functions
Average Calculator
cint average(int array[])

Calculates the arithmetic mean of an array
Fixed array size of 5 elements (defined by LENGTH constant)
Returns the average as an integer

Quadratic Formula
cvoid quadraticFormula(double a, double b, double c, double *x1, double *x2)

Solves the quadratic equation ax² + bx + c = 0
Takes coefficients a, b, and c as input
Returns both roots through pointer parameters x1 and x2
Uses the formula: x = [-b ± √(b² - 4ac)] / 2a

Compilation
To compile the program using GCC:
bashgcc main.c functions.c -o math_program -lm
Note: The -lm flag is required for math library functions (sqrt, pow).
Usage
Run the compiled program:
bash./math_program
The program will:

Prompt for 5 integer numbers for the array
Request coefficients a, b, and c for the quadratic equation
Display the calculated average and both roots

Example interaction:
Enter 5 numbers: 1 2 3 4 5

Enter a,b and c values of quadratic equation: 1 -5 6

average: 3.00
x1: 3.00
x2: 2.00
Implementation Details
Constants

LENGTH: Defined as 5 in functions.h, determines the fixed array size

Data Types

Array elements: integers
Quadratic equation coefficients and roots: doubles
Average calculation: returns integer (truncates decimal)

Error Handling
The current implementation does not handle:

Invalid input validation
Division by zero (when a = 0)
Complex roots (when b² - 4ac < 0)

Limitations

Fixed array size (5 elements)
Integer truncation in average calculation
No input validation
No handling of edge cases in quadratic formula
Assumes real roots exist for quadratic equation

Future Improvements
Potential enhancements could include:

Dynamic array size for average calculation
Float/double support for array average
Input validation
Error handling for:

Division by zero
Complex roots
Invalid inputs


Support for complex numbers
Additional mathematical functions
Improved precision in calculations
