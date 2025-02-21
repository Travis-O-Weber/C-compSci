Product Management System
A C program for managing product information and performing basic analysis on product data. The system allows users to input product details and find the most expensive product among the entries.
Features

Dynamic product creation based on user input
Product information management (ID, name, price)
Finding the most expensive product in the inventory
Memory-safe implementation with proper allocation and deallocation

Project Structure
The project consists of the following files:

main.c: Contains the main program logic
product.h: Header file with product structure and function declarations
product.c: Implementation of product-related functions

Technical Details
Product Structure
ctypedef struct Product {
    double price;
    int id;
    char name[20];
} Product;
Core Functions

Product* createProducts(int n): Allocates memory for n products
void setProductInfo(Product products[], int n): Sets product information through user input
Product mostExpensiveProduct(Product products[], int n): Finds the product with the highest price

Input Format
The program expects input in the following format:
<number of products>
<id>,<name>,<price>
<id>,<name>,<price>
...
Example:
2
5,iphone12,100
3,google pixel,500
Usage

Compile the program:
bashgcc main.c product.c -o product_manager

Run the executable:
bash./product_manager

Follow the prompts to:

Enter the number of products
Input product details in the specified format
View the most expensive product's information



Memory Management
The program implements proper memory management:

Dynamic memory allocation for product array
Memory deallocation after use
Protection against memory leaks

Error Handling
The program includes basic error handling for:

Input validation
Memory allocation checks
Array bounds checking

Development Notes

Uses standard C libraries: stdio.h, stdlib.h, string.h, time.h
Implements modular design with separate header and implementation files
Follows C programming best practices and conventions
