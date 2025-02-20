Statistical Calculator
A C program that calculates basic statistical measures (average and standard deviation) for a set of numbers.
Overview
This program takes 10 numbers as input and calculates:

Arithmetic mean (average)
Standard deviation

The program uses floating-point arithmetic for precise calculations and displays results with two decimal places.
Features

Fixed-size array input (10 numbers)
Floating-point calculations for better precision
Formatted output with 2 decimal places
Uses standard mathematical functions from math.h

Mathematical Formulas
Average (Arithmetic Mean)
average = (x₁ + x₂ + ... + x₁₀) / 10
Standard Deviation
standard deviation = √[(Σ(xᵢ - μ)²) / n]

where:
- xᵢ is each value in the dataset
- μ is the mean
- n is the number of values (10)
Compilation
To compile the program, use GCC:
bashgcc main.c -o stats_calculator -lm
Note: The -lm flag is required for the math library (sqrt, pow functions).
Usage

Run the compiled program:

bash./stats_calculator

Enter 10 numbers when prompted:

Enter array elements
1.5
2.3
3.7
...

The program will output:

average: X.XX
standard deviation: Y.YY
Example
Input:
Enter array elements
1.0
2.0
3.0
4.0
5.0
6.0
7.0
8.0
9.0
10.0
Output:
average: 5.50
standard deviation: 2.87
Implementation Details
Constants

LENGTH: Set to 10, defines the size of the input array

Variables

arr[]: Float array to store input numbers
avg: Stores the calculated average
snd: Stores the calculated standard deviation
sum: Accumulator for calculating the average
xi: Accumulator for sum of squared differences

Key Functions Used

pow(): Calculates squared differences
sqrt(): Calculates final standard deviation
printf(): Formats output to 2 decimal places

Limitations

Fixed array size (10 elements)
No input validation
Assumes all inputs are valid numbers
No error handling for extreme values
No handling of memory constraints

Future Improvements
Potential enhancements could include:

Dynamic array size
Input validation
Error handling for:

Invalid inputs
Overflow conditions
Extreme values


Additional statistical calculations:

Median
Mode
Range
Variance


Option to read input from file
Support for larger datasets
Improved precision options
