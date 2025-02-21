Pattern Printing Programs with Preprocessor Directives
A collection of C programs demonstrating preprocessor directives, pattern printing, and control structures.
Program Files
.
├── main-0b1.c  # Pattern printing with preprocessor examples
├── main-0c1.c  # Alternate row pattern implementation
└── main-0d1.c  # Enhanced pattern with break condition
Preprocessor Directives
The programs demonstrate the use of #define directives:
c#define PI 3.14
#define MAX (5 + 5)
#define TRUE 1
#define FALSE 0
Important notes:

Constants are substituted before compilation
Parentheses in MAX prevent operator precedence issues
No semicolon in #define statements
Common convention for TRUE/FALSE definitions

Pattern Printing Logic
The programs print coordinate patterns with alternating sequences:
For Odd-Numbered Rows (j%2 == 1):
1,1  1,3  1,5  1,7  1,9    (increasing by 2)
3,1  3,3  3,5  3,7  3,9
5,1  5,3  5,5  5,7  5,9
For Even-Numbered Rows (j%2 == 0):
2,9  2,7  2,5  2,3  2,1    (decreasing by 2)
4,9  4,7  4,5  4,3  4,1
Program Structure
Input Parameters

M: Number of rows
N: Determines pattern width (2N-1 columns)

Core Logic
cfor(j=1; j<=M; j++) {
    if(j%2 == 0) {
        // Even rows: descending sequence
        for(i=(2*N-1); i>=1; i=i-2) {
            printf("%d,%d\t", j, i);
        }
    } else {
        // Odd rows: ascending sequence
        for(i=1; i<=(2*N-1); i=i+2) {
            printf("%d,%d\t", j, i);
        }
    }
    printf("\n");
}
Usage Examples
Example 1: M=3, N=3
Enter M N: 3 3
1,1  1,3  1,5
2,5  2,3  2,1
3,1  3,3  3,5
Example 2: M=4, N=4
Enter M N: 4 4
1,1  1,3  1,5  1,7
2,7  2,5  2,3  2,1
3,1  3,3  3,5  3,7
4,7  4,5  4,3  4,1
Program Variations
main-0b1.c

Basic pattern implementation
Includes commented pyramid pattern examples
Features complete preprocessor examples

main-0c1.c

Streamlined implementation
Focuses on pattern logic
Simplified variable usage

main-0d1.c

Enhanced with break condition (j>=10)
Additional error checking
More comprehensive comments

Key Concepts Demonstrated

Preprocessor Directives

Constant definitions
Macro expressions
Symbolic constants


Control Structures

Nested loops
Conditional statements
Break statements


Pattern Logic

Coordinate generation
Alternating sequences
Tabular output formatting



Compilation and Execution
To compile:
bashgcc -o pattern main-0b1.c
To run:
bash./pattern
Common Issues and Solutions

Pattern Alignment

Use \t for consistent spacing
Count columns carefully
Check boundary conditions


Sequence Generation

Verify increment/decrement
Check loop boundaries
Test edge cases


Input Validation

Check for negative numbers
Handle large inputs
Validate M and N



Future Improvements
Potential enhancements:

Input validation
Dynamic formatting
Additional patterns
Error handling
Pattern customization
Visual enhancements
File output support
