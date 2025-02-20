3D Point Calculator
A C program that performs calculations with points in three-dimensional space, including finding midpoints and calculating distances between points.
Project Structure
.
├── main.c     # Main program with user input/output
├── point.c    # Implementation of point calculations
└── point.h    # Point structure and function declarations
Features

3D point representation (x, y, z coordinates)
Calculate midpoint between two points
Calculate Euclidean distance between two points
Double precision floating-point calculations
Output formatted to two decimal places

Data Structure
The program uses a Point structure to represent 3D coordinates:
cstruct Point {
    double x;    // x-coordinate
    double y;    // y-coordinate
    double z;    // z-coordinate
};
Mathematical Functions
Midpoint Calculation
midpoint = ((x₁ + x₂)/2, (y₁ + y₂)/2, (z₁ + z₂)/2)
Distance Calculation
distance = √[(x₂ - x₁)² + (y₂ - y₁)² + (z₂ - z₁)²]
Compilation
To compile the program using GCC:
bashgcc main.c point.c -o point_calculator -lm
Note: The -lm flag is required for the math library functions (sqrt, pow).
Usage

Run the compiled program:

bash./point_calculator

Enter the coordinates when prompted:

First point (x y z):  1.0 2.0 3.0
Second point (x y z): 4.0 5.0 6.0

The program will output:

midpoint: 2.50, 3.50, 4.50
distance: 5.20
Functions
Midpoint Calculator
cvoid midpoint(struct Point p1, struct Point p2, struct Point *temp)

Takes two points as input
Calculates the midpoint coordinates
Returns result through pointer parameter temp

Distance Calculator
cvoid distance(struct Point p1, struct Point p2, double *d)

Takes two points as input
Calculates the Euclidean distance between them
Returns result through pointer parameter d

Example
Input:
0.0 0.0 0.0
3.0 4.0 0.0
Output:
midpoint: 1.50, 2.00, 0.00
distance: 5.00
In this example:

First point is at origin (0,0,0)
Second point is at (3,4,0)
Midpoint is (1.5,2,0)
Distance is 5 units (forms a 3-4-5 triangle)

Implementation Details

Uses double precision for all calculations
Pass-by-pointer for returning results
Results formatted to two decimal places
Uses math.h functions for calculations

Limitations

No input validation
Fixed output precision (2 decimal places)
No error handling for:

Invalid inputs
Overflow conditions
Extreme values


No support for complex numbers
No handling of memory constraints

Future Improvements
Potential enhancements could include:

Input validation
Error handling
Additional geometric calculations:

Angle between points
Area of triangle formed by points
Vector operations


Support for different coordinate systems
Visualization of points
File input/output support
Batch processing of multiple points
