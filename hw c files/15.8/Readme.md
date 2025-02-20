Student Management System
A simple C program that manages student records by reading from CSV files, sorting by student ID, and providing search functionality.
Features

Read student records from CSV files
Display student records in a linked format
Sort students by ID using selection sort
Search for students by ID
Memory-efficient implementation with dynamic allocation

Project Structure
.
├── main.c          # Main program logic and file handling
├── student.c       # Student operations implementation
├── student.h       # Student structure and function declarations
└── a09input.csv    # Sample input file
Input File Format
The program expects a CSV file with the following format:
id,name
1004,John

ID: Integer value
Name: String (up to 9 characters)
Values are comma-separated with no spaces

Compilation
To compile the program, use GCC:
bashgcc main.c -o student_management
Usage
Run the program with an input file name as a command line argument:
bash./student_management a09input.csv
The program will:

Read and display the initial list of students
Sort and display the sorted list
Prompt for an ID to search
Display the found student's information

Functions
Main Operations

main(): Handles file operations and program flow

Validates command line arguments
Reads CSV file
Manages memory allocation
Coordinates sort and search operations



Student Operations

sortStudents(Student students[], int n):

Sorts students by ID using selection sort
Time complexity: O(n²)


print(Student students[], int n):

Displays students in format: (id,name) -> (id,name) -> ...


searchStudent(Student students[], int n, int id):

Performs linear search for student by ID
Returns first student if ID not found
Time complexity: O(n)



Helper Functions

swap(Student *s1, Student *s2):

Swaps two student records
Used in sorting operation



Data Structure
The Student structure is defined as:
cstruct Student {
    int id;           // Student ID
    char name[10];    // Student name (max 9 chars + null terminator)
};
Error Handling
The program includes basic error handling for:

Missing command line arguments
File opening failures
Dynamic memory allocation (implicitly)

Memory Management

Uses dynamic allocation for student array
Properly frees allocated memory before program termination

Limitations

Fixed-size name field (9 characters maximum)
Basic error handling
Linear search implementation
No data validation for CSV format
Returns first student if search ID not found

Example Output
Initial list:
(1001,Alice) -> (1003,Bob) -> (1002,Carol)

Sorted list:
(1001,Alice) -> (1002,Carol) -> (1003,Bob)

Enter ID to search: 1002
(1002,Carol)
Future Improvements
Potential enhancements could include:

Binary search implementation for better search performance
More robust CSV parsing
Input validation
Error handling for malformed data
Support for variable-length names
Additional sorting criteria (by name, etc.)
File output capabilities
Delete and update operations
