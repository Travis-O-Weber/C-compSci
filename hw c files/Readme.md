Statistical Calculator
A C program that calculates basic statistical measures (mean and standard deviation) for a set of 10 numbers.
Overview
This program takes 10 numerical inputs from the user and calculates:

Arithmetic mean (average)
Standard deviation

Results are displayed with 2 decimal place precision.
Features

Fixed array size of 10 elements
Floating-point precision calculations
Formatted decimal output
Uses math library for power and square root functions

Mathematical Calculations
Average (Arithmetic Mean)
The program calculates the arithmetic mean using:
Copyaverage = (x₁ + x₂ + ... + x₁₀) / 10
Standard Deviation
Standard deviation is calculated using:
Copystandard deviation = √[(Σ(xᵢ - μ)²) / n]

where:
- xᵢ represents each value
- μ is the mean
- n is the number of values (10)
Program Structure
The program uses:

#define LENGTH 10 for array size
float array for storing numbers
math.h for mathematical functions
pow() for square calculations
sqrt() for square root calculation

Compilation
To compile the program:
bashCopygcc main.c -o statistics -lm
Note: The -lm flag is required for math library functions.
Usage

Run the compiled program:

bashCopy./statistics

Enter 10 numbers when prompted:

CopyEnter array elements
1.5
2.7
3.2
...

The program will display:

Copyaverage: X.XX
standard deviation: Y.YY
Example
Input:
CopyEnter array elements
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
Copyaverage: 5.50
standard deviation: 2.87
Implementation Details
Variables

arr[LENGTH]: Float array to store input numbers
sum: Accumulator for average calculation
avg: Stores the calculated average
xi: Accumulator for squared differences
snd: Stores the calculated standard deviation

Process Flow

Accept 10 numerical inputs
Calculate sum and average
Calculate squared differences from mean
Calculate standard deviation
Display results

Limitations

Fixed array size (10 elements)
No input validation
No error handling for:

Invalid inputs
Overflow conditions
Extreme values


Single precision floating point
No data persistence

Future Improvements
Potential enhancements could include:

Dynamic array size
Input validation
Error handling for:

Non-numeric inputs
Overflow conditions
Invalid calculations


Additional statistical measures:

Median
Mode
Range
Variance


File input/output support
Higher precision options
Data visualization
