Airline Route Records System
A C-based application for processing and analyzing international flight data. The system allows users to search and analyze flight routes, passenger statistics, and airline information from CSV-formatted flight data.
Features

Process CSV flight data with route information and passenger counts
Multiple search functionalities:

Search by specific route (origin-destination pair)
Search by origin airport
Search by destination airport
Search by airline


Statistical analysis including:

Total passenger counts
Monthly passenger distributions
Average passengers per month


Interactive command-line interface
Memory-efficient data structures

Data Format
The system processes CSV files with the following columns:

Month (1-6, representing January to June)
Origin Airport (3-letter IATA code)
Destination Airport (3-letter IATA code)
Airline (2-letter IATA code)
Passenger Category
Total Passengers

Example CSV format:
csvMonth,Origin,Destination,Airline,Type,Passengers
1,JFK,LHR,BA,International,5000
Project Structure

main.c: Program entry point and user interface
routeRecords.h: Header file with data structures and function declarations
routeRecords.c: Implementation of core functionality
data.csv: Sample flight data file

Key Data Structures
ctypedef struct RouteRecord_struct {
    char origin[4];
    char destination[4];
    char airline[4];
    int passengers[7];
} RouteRecord;

typedef enum SearchType {
    ROUTE,
    ORIGIN,
    DESTINATION,
    AIRLINE,
    QUIT
} SearchType;
Core Functions
Data Processing

RouteRecord* createRecords(FILE* fileIn): Initializes the record array
int fillRecords(RouteRecord* flights, FILE* fileIn): Populates records from CSV
int findAirlineRoute(RouteRecord* flights, int length, char* origin, char* destination, char* airline): Searches for existing routes

Search and Analysis

void searchRecords(RouteRecord* flights, int length, char* key1, char* key2, SearchType st): Performs searches and generates statistics
void printMenu(): Displays user interface options
SearchType getMenuOption(char* key1, char* key2): Handles user input

Building and Running
Prerequisites

GCC compiler
Make utility

Compilation
bashmake
Running the Program
bash./airline_routes <data_file.csv>
Usage Example

Start the program with data file:
bash./airline_routes data.csv

Select search option (1-5):
######### Airline Route Records Database MENU #########
1. Search by Route
2. Search by Origin Airport
3. Search by Destination Airport
4. Search by Airline
5. Quit

Enter search criteria when prompted:

For routes: Enter origin and destination airports
For airports/airlines: Enter single search term


View results including:

Matching routes
Total passenger counts
Monthly distribution
Averages



Error Handling
The system includes robust error handling for:

File operations
Memory allocation
Input validation
CSV parsing
Search operations

Memory Management

Dynamic allocation for route records
Proper deallocation of resources
Prevention of memory leaks
Efficient data structure usage

Limitations

Fixed-size strings for airport and airline codes
Single CSV file processing at a time
In-memory data processing (no persistent storage)
Six-month data period limitation

Contributing
When contributing to this project:

Maintain consistent code style
Add appropriate comments
Follow memory management practices
Include error handling
Update documentation as needed

Code Style Guide

Use consistent indentation (4 spaces)
Add function documentation
Follow naming conventions:

snake_case for functions and variables
UPPERCASE for constants and enums
PascalCase for types and structs
