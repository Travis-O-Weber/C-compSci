Pointers and Dynamic Memory Allocation in C
A collection of C programs demonstrating fundamental concepts of pointers, dynamic memory allocation, and array manipulation.
Program Files
.
├── main-0b1.c  # Basic pointer operations and dynamic arrays
├── main-0c1.c  # Memory address manipulation and pointer arithmetic
└── main-0d1.c  # Dynamic memory allocation with multiple data types
Key Concepts
Pointers and Memory

Pointer Declaration

cint* ptrA;     // Integer pointer
double* ptrB;  // Double pointer

Memory Operators

c&variable  // Address operator - gets memory address
*pointer   // Dereference operator - gets value at address

Dynamic Memory Allocation

cptrA = (int*)malloc(sizeof(int));       // Single integer
ptr = (int*)malloc(n * sizeof(int));    // Array of integers
Memory Visualization
Single Variables
Variable:   [ value ]
            ^
Pointer:    [ address ]
Arrays
Memory:     [100][104][108][112][116]  // Addresses
Values:     [ 1 ][ 2 ][ 3 ][ 4 ][ 5 ]  // Array contents
            ^
Pointer:    [ 100 ]                    // Points to first element
Core Operations
Dynamic Array Creation
cint n;                              // Size of array
scanf("%d", &n);                    // Get size from user
int* ptr = (int*)malloc(n * sizeof(int));  // Allocate memory
Array Access Methods
c// These are equivalent:
ptr[i] = value;       // Array notation
*(ptr + i) = value;   // Pointer arithmetic
Memory Address Manipulation
cptr + i       // Moves i positions (scaled by type size)
&ptr[i]       // Gets address of ith element
(ptr + i)     // Gets address of ith element
Program Features
1. Basic Memory Operations

Pointer declaration and initialization
Dynamic memory allocation
User input through pointers
Memory address printing

2. Array Manipulation

Dynamic array creation
Array initialization
Array traversal
Pointer arithmetic

3. Type Support

Integer pointers
Double pointers
Array pointers
Type casting

Usage Examples
Basic Pointer Operations
cint* ptrA = (int*)malloc(sizeof(int));
printf("Enter integer: ");
scanf("%d", ptrA);
printf("Value: %d\nAddress: %p\n", *ptrA, ptrA);
Dynamic Array Creation
cint n;
printf("Enter array size: ");
scanf("%d", &n);
int* ptr = (int*)malloc(n * sizeof(int));
// Initialize and use array
free(ptr);  // Don't forget to free!
Common Pitfalls

Memory Leaks

Failing to free allocated memory
Losing pointer references


Invalid Access

Accessing freed memory
Going beyond array bounds
Using uninitialized pointers


Type Mismatches

Incorrect pointer types
Invalid type casting
Wrong sizeof calculations



Best Practices

Memory Management

Always initialize pointers
Free allocated memory
Check malloc return values


Safety

Validate array indices
Check for NULL pointers
Use constant pointers when appropriate


Style

Clear pointer naming
Consistent type casting
Well-documented memory operations



Debugging Tips

Memory Issues

Use valgrind for leak detection
Print addresses for verification
Track allocation/deallocation


Pointer Problems

Check initialization
Verify arithmetic
Validate array bounds
