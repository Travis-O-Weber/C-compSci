Employee Management System
A C program that reads employee records from a file, identifies the employee with the highest salary, and writes their information to an output file.
Project Structure
.
├── main.c         # Main program driver
├── employee.c     # Employee operations implementation
├── employee.h     # Employee structure and function declarations
├── a6-input.txt   # Input file containing employee records
└── a6-output.txt  # Output file for highest-paid employee
Features

Read employee records from text file
Find employee with highest salary
Write selected employee data to output file
Dynamic memory allocation
Proper memory cleanup

Data Structure
The program uses an Employee structure:
ctypedef struct Employee {
    char name[10];    // Employee name (max 9 chars + null terminator)
    int id;           // Employee ID
    double salary;    // Employee salary
} Employee;
File Formats
Input File (a6-input.txt)
JohnDoe 101 55000.50
JaneSmith 102 62000.75
BobJones 103 48500.25

One employee per line
Fields separated by spaces
Name: no spaces, maximum 9 characters
ID: integer
Salary: decimal number

Output File (a6-output.txt)
JaneSmith 102 62001

Single line with highest-paid employee's data
Fields separated by spaces
Salary rounded to nearest integer

Core Functions
Read Employee Data
cEmployee* readData(char* filename, int* size)

Opens and reads input file
Dynamically allocates employee array
Returns pointer to employee array
Sets size parameter to number of records
Handles file operations and memory allocation

Find Best Employee
cEmployee getBestEmployee(Employee* emps, int size)

Takes array of employees and its size
Returns employee with highest salary
Uses linear search through array

Write Employee Data
cvoid writeData(char* filename, Employee emp)

Creates/overwrites output file
Writes single employee record
Formats salary as integer

Memory Management
The program implements proper memory handling:

Dynamic allocation for employee array
Memory cleanup after use
File pointer management
Resource deallocation

Usage

Create input file with employee records
Compile the program:

bashgcc main.c employee.c -o employee_program

Run the program:

bash./employee_program

Check output file for results

Example
Input (a6-input.txt):
JohnDoe 101 45000.50
JaneSmith 102 62000.75
BobJones 103 48500.25
Output (a6-output.txt):
JaneSmith 102 62001
Known Issues and Limitations

Fixed-size name field
No input validation
Basic error handling
Assumes well-formatted input file
No handling of:

File read errors
Memory allocation failures
Empty files
Duplicate salaries



Error Conditions
The program may fail under these conditions:

Input file doesn't exist
Insufficient permissions
Memory allocation failure
Malformed input data
File system errors

Future Improvements
Potential enhancements:

Robust error handling
Input validation
Support for:

Variable length names
Multiple output formats
Command line arguments
Configuration files


Additional features:

Sort by different fields
Filter employees
Multiple file formats
Data validation
Error logging
