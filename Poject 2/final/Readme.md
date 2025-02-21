Airline Route Records System
A C-based program for analyzing international flight route data from US Airports. The system processes CSV data containing flight routes, passenger counts, and airline information, providing various search and analysis capabilities.
Description
This program processes data from the US Department of Transportation's international flight records, allowing users to:

Search for specific flight routes
Look up flights by origin/destination airports
Search for all routes operated by specific airlines
View passenger statistics across a 6-month period

Data Format
The program reads CSV files with the following structure:

Column 1: Month (1-6, representing January to June)
Column 2: Origin Airport (3-letter IATA code)
Column 3: Destination Airport (3-letter IATA code)
Column 4: Airline (2-letter IATA code)
Column 5: Passenger Category
Column 6: Total Passengers

Example:
csvMonth,Origin,Destination,Airline,Type,Passengers
1,JFK,LHR,BA,International,50000
Project Structure

main.c: Program entry point and command-line interface
route-records.h: Data structures and function declarations
route-records.c: Core implementation
Makefile: Build configuration

Key Data Structures
ctypedef struct RouteRecord_struct {
    char origin[4];
    char destination[4];
    char airline[3];
    int passengers[6];
} RouteRecord;

typedef enum SearchType {
    ROUTE,
    ORIGIN,
    DESTINATION,
    AIRLINE
} SearchType;
Building the Project
Prerequisites

GCC compiler
Make utility

Compilation
bashmake
Usage

Run the program with a CSV file:
bash./route-records data.csv

Use the interactive menu to:

Search routes by origin-destination pair
Search by origin airport
Search by destination airport
Search by airline
View detailed passenger statistics



Menu Options
######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit
Example Searches

Route Search:

Enter origin airport code
Enter destination airport code
View matching routes and statistics


Airport Search:

Enter airport code
View all routes from/to that airport


Airline Search:

Enter airline code
View all routes operated by that airline



Output Format
For each search, the program displays:

Matching routes in format: AIRLINE (ORIGIN-DESTINATION)
Number of matches found
Total passenger statistics
Monthly passenger breakdowns
Average passengers per month

Core Functions
Data Processing

createRecords(): Initializes route record array
fillRecords(): Populates records from CSV
findAirlineRoute(): Recursively searches for routes

Search and Analysis

searchRecords(): Performs searches and generates statistics
printMenu(): Displays user interface
getMenuOption(): Handles user input

Error Handling
The program includes robust error checking for:

Command line arguments
File operations
Memory allocation
CSV parsing
User input validation

Memory Management

Dynamic allocation for route records
Proper cleanup and deallocation
Memory leak prevention
Array bounds checking

Limitations

Fixed-size strings for codes (3-4 characters)
Single CSV file processing
Six-month data period
In-memory data processing
No data persistence

Development Notes
Code Style

Consistent indentation
Descriptive variable names
Comprehensive comments
Function documentation

Best Practices

Header guards
Error checking
Memory management
Input validation
Modular design
