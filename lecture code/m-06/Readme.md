Product Management System
A C program that manages product information using structures, demonstrating dynamic memory allocation and structure manipulation.
Project Structure
.
├── main-0b1.c    # Main program with basic product operations
├── main-0c1.c    # Alternative implementation
├── main-0d1.c    # Implementation with memory cleanup
├── product.c     # Product operations implementation
└── product.h     # Product structure and function declarations
Product Structure
The program uses a Product structure to store item information:
ctypedef struct Product {
    int price;          // Product price
    int id;            // Product identifier
    char name[20];     // Product name (max 19 chars)
} Product;
Core Functions
Create Products Array
cProduct* createProducts(int n)

Dynamically allocates array of n products
Returns pointer to Product array
Memory must be freed after use

Set Product Information
cvoid setProductInfo(Product* products, int n)

Sets random prices (1-100)
Assigns random IDs (1-10)
Sets default product names
Demonstrates structure pointer manipulation

Find Most Expensive Product
cProduct mostExpensiveProduct(Product products[], int n)

Returns product with highest price
Linear search through array
Returns complete Product structure

Usage Example
c// Create products array
int n = 5;
Product* products = createProducts(n);

// Initialize product information
setProductInfo(products, n);

// Find most expensive product
Product best = mostExpensiveProduct(products, n);
printf("Best product: ID=%d, Price=%d, Name=%s\n", 
       best.id, best.price, best.name);

// Clean up
free(products);
Memory Management
Dynamic Allocation
cProduct* prods = (Product*)malloc(n * sizeof(Product));
Structure Access Methods
c// Three equivalent ways to access structure members:
products[i].price = value;           // Array notation
(products+i)->price = value;         // Pointer arithmetic with arrow
(*(products+i)).price = value;       // Pointer dereferencing
Memory Cleanup
cfree(products);  // Free allocated memory when done
Random Generation
The program uses random generation for:

Product prices (1-100 range)
Product IDs (1-10 range)
Seeded with current time for unique sequences

Implementation Details
Header Organization (product.h)

Structure definition
Function prototypes
Header guards
Type definitions

Product Operations (product.c)

Memory allocation
Structure manipulation
Array processing
String handling

Main Program

User interaction
Memory management
Function coordination
Result display

Build and Run
bash# Compile the program
gcc -o product_system main-0b1.c product.c

# Run the program
./product_system
Example Output
Enter the number of products: 3
Product with the highest price: ID=7, Price=87, Name=someProduct
Error Handling
Current implementation should check for:

Memory allocation failures
Invalid array sizes
NULL pointer returns
Array bounds

Limitations

Fixed-size product name
Basic error handling
No input validation
Limited product attributes
No data persistence
Hardcoded random ranges
No search functionality
