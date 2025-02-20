Employee Management System
A C program that reads employee records from a file, identifies the highest-paid employee, and writes their information to an output file.
Project Structure
.
├── main.c         # Main program execution flow
├── employee.c     # Employee operations implementation
├── employee.h     # Employee structure and function declarations
├── a6-input.txt   # Input file with employee records
└── a6-output.txt  # Output file for best employee data
Features

Read employee records from text file
Dynamic memory allocation for employee array
Find highest-paid employee
Write selected employee data to output file
Clean memory management

Data Structure
The program uses an Employee structure:
ctypedef struct Employee {
    char name[10];    // Employee name (max 9 chars + null terminator)
    int id;           // Employee ID
    double salary;    // Employee salary
} Employee;
File Formats
Input File (a6-input.txt)
name id salary
John 1001 50000
Jane 1002 55000

One employee per line
Fields separated by spaces
Salary as a decimal number

Output File (a6-output.txt)
name id salary

Single line with best employee's data
Fields separated by spaces
Salary rounded to whole number

Functions
Read Data
cEmployee* readData(char *filename, int *size)

Reads employee records from input file
Dynamically allocates employee array
Returns pointer to employee array
Sets size parameter to number of employees
Returns NULL on file error

Get Best Employee
cEmployee getBestEmployee(Employee *emps, int size)

Takes array of employees and size
Returns employee with highest salary
Linear search O(n) complexity

Write Data
cvoid writeData(char *filename, Employee emp)

Writes single employee record to file
Formats salary as integer
Creates new file or overwrites existing

Compilation
To compile the program:
bashgcc main.c employee.c -o employee_system
Usage

Prepare input file (a6-input.txt) with employee records
Run the compiled program:

bash./employee_system

Check output file (a6-output.txt) for result

Example
Input file (a6-input.txt):
John 1001 45000.50
Jane 1002 52000.75
Bob  1003 48500.25
Output file (a6-output.txt):
Jane 1002 52001
Implementation Details
Memory Management

Dynamic allocation for employee array
Proper memory cleanup
File handle management

Error Handling

File opening validation
NULL pointer checks
Memory allocation validation

Limitations

Fixed-size name field (9 characters max)
Basic error handling
No input validation
Single-threaded operation
Assumes well-formatted input file
No handling of duplicate salaries

Future Improvements
Potential enhancements could include:

Input validation
Error logging
Support for:

Variable length names
Multiple output formats
Additional employee fields
Sorting options
Filtering options


Database integration
Command line arguments
Configuration file
Multiple file formats
