C Array Operations and Type Definitions
A collection of C programs demonstrating modular programming, array operations, type definitions, and enumerated types.
Project Structure
.
├── main-0b1.c     # Main program with type definitions
├── main-0c1.c     # Alternative main implementation
├── main-0d1.c     # Main with enum example
├── functions.c    # Array operation implementations
└── functions.h    # Function prototypes and type definitions
Core Features

Array manipulation functions
Custom type definitions
Enumerated types
Header file organization
Dynamic memory allocation
Constant parameters

Header File Organization
Type Definitions (functions.h)
ctypedef enum LIGHTCOLOR {
    RED,    // 0
    GREEN,  // 1
    YELLOW  // 2
} LIGHTCOLOR;

typedef int INT64;
Function Prototypes
cvoid setArrayValues(int arr[], int arrSize, int factor);
void printArrayValues(const int arr[], int arrSize);
void calculateAverage(const int arr[], int arrSize, double* average);
Array Operations
Set Array Values
cvoid setArrayValues(int arr[], int arrSize, int factor) {
    for(int i = 0; i < arrSize; i++) {
        arr[i] = i * factor;
    }
}
Print Array Values
cvoid printArrayValues(const int arr[], int arrSize) {
    printf("Array values : ");
    for(int i = 0; i < arrSize; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
Calculate Average
cvoid calculateAverage(const int arr[], int arrSize, double* average) {
    *average = 0;
    for(int i = 0; i < arrSize; i++) {
        *average += arr[i];
    }
    *average /= arrSize;
}
Usage Example
cint n = 5;
int* arr = (int*)malloc(n * sizeof(int));

setArrayValues(arr, n, 1);         // [0, 1, 2, 3, 4]
printArrayValues(arr, n);          // "Array values: 0, 1, 2, 3, 4"

double avg = 0;
calculateAverage(arr, n, &avg);    // avg = 2.0
printf("Average = %lf\n", avg);

free(arr);
Key Concepts
Header Guards
c#ifndef FUNCTIONS_H
#define FUNCTIONS_H
// Header content
#endif
Prevents multiple inclusion of header files
Constant Parameters
cvoid printArrayValues(const int arr[], int arrSize)
Protects array from modification within function
Type Definitions
ctypedef int INT32;
typedef enum LIGHTCOLOR {...} LIGHTCOLOR;
Creates aliases and custom types
Memory Management
Dynamic Allocation
cint* arr = (int*)malloc(n * sizeof(int));
// Use array
free(arr);  // Don't forget to free!
Parameter Passing

Arrays passed by reference
Use of const for read-only arrays
Pointer parameters for returning values

Best Practices

Header Organization

Use header guards
Declare function prototypes
Define constants and types
Keep implementation separate


Function Design

Use const for read-only parameters
Clear parameter naming
Consistent return types
Error checking


Memory Handling

Check malloc return values
Free allocated memory
Avoid memory leaks
Handle array bounds



Error Handling
Common scenarios to check:

NULL pointer returns from malloc
Invalid array sizes
Array bounds violations
Uninitialized variables
