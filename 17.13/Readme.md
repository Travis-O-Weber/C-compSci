# Linked List Student Management System

## Overview
A C program that implements a sorted linked list to manage student records including IDs, names, and GPAs. The program reads student data from a CSV file and maintains the list in alphabetical order by student names.

## Features
- Reads student data from CSV files
- Maintains alphabetically sorted linked list
- Calculates average GPA of all students 
- Dynamic memory allocation and deallocation
- Prints formatted student records

## Files Structure
- `linkedlist.h` - Header file containing node structure and function declarations
- `linkedlist.c` - Implementation of linked list operations
- `main.c` - Main program with file handling and program control

## Data Structure
### Node Structure
```c
struct Node {
    int id;         // Student ID
    char name[10];  // Student Name
    double gpa;     // Student GPA
    struct Node *next;  // Pointer to next node
};
Functions

createNode() - Creates new node with student data
insertNode() - Inserts node maintaining alphabetical order
averageGPA() - Calculates average GPA of all students
printLL() - Displays the current linked list
destroyLL() - Frees memory used by the list

Usage
Compilation
bashgcc main.c linkedlist.c -o student_manager
Running the Program
bash./student_manager input.csv
Input File Format
The CSV file should contain one student record per line:
StudentID,StudentName,GPA
Example:
1001,John,3.5
1002,Alice,3.8
Error Handling

Checks for command line arguments
Handles empty linked lists
Memory allocation validation
File opening verification

Memory Management

Dynamic allocation for each node
Complete memory cleanup on program termination

Limitations

Fixed size character array for names (10 characters)
Requires properly formatted CSV input
No duplicate name handling specified
