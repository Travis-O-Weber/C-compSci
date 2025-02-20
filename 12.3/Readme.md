# Flight Data Processor

## Overview
This C program processes flight data from a CSV file, allowing users to search for flights by airline and calculate total passenger counts.

## Features
- Reads flight data from CSV files
- Processes airline, origin, destination, and passenger information
- Dynamically allocates memory for flight records
- Calculates total flights and passengers for a specified airline

## Structure

### Files
- `flights.h`: Header file containing the Flight struct definition
- `main.c`: Main program logic
- `passengerdatashort.csv`: Sample data file

### Data Structure
The program uses a `Flight` struct with the following fields:
- `origin` (3 char array): Departure airport code
- `destination` (3 char array): Arrival airport code 
- `airline` (3 char array): Airline code
- `FlightArr` (int array): Array for flight data
- `passengers` (int): Number of passengers

## Usage

### Compilation
```bash
gcc main.c -o flight_processor
Running the Program
bash./flight_processor passengerdatashort.csv
Input

Program requires a CSV file as command line argument
After loading the file, enter an airline code when prompted

Output
Program will display:

Airline code
Number of flights
Total passengers

Error Handling

Checks for command line arguments
Validates file opening
Handles memory allocation

Technical Details

Written in C
Uses dynamic memory allocation
Maximum 200 flight records
CSV parsing using string tokenization

Sample Data Format
The CSV file should have the following format:
Origin,Destination,Airline,Passengers
JFK,LHR,BA,80736
Limitations

Maximum 200 flight records
Fixed-length airport and airline codes (3 characters)
Basic error handling
