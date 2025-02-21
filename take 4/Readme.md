Dice Game
A two-player turn-based dice game implemented in C, featuring different round types (Bonus, Double, Regular) and point-based scoring system.
Game Overview
Players take turns rolling dice and accumulating points based on round types and dice outcomes. The game features:

Multiple round types (Bonus, Double, Regular)
Random dice rolls
Point-based scoring system
Dynamic turn switching
Variable game length

Game Rules
Setup

Players start with 0 points
Number of rounds is determined by player input
Starting player is determined by random coin flip

Round Types

BONUS Round (20% chance)

Fixed 200 points
Points added/subtracted based on dice roll


DOUBLE Round (30% chance)

Points are doubled
Random base points (1-10)


REGULAR Round (50% chance)

Standard points
Random points (1-10)



Turn Mechanics

Players roll a die (1-6)
For Player 1:

Odd roll: Add points and keep turn
Even roll: Subtract points and lose turn


For Player 2:

Even roll: Add points and keep turn
Odd roll: Subtract points and lose turn



Project Structure
.
├── main.c          # Game loop and main logic
├── dicegame.h      # Header file with game definitions
├── dicegame.c      # Game function implementations
└── Makefile        # Build configuration
Core Components

Main Game Loop (main.c)

Handles game initialization
Manages turns and rounds
Processes scoring
Determines winner


Game Functions (dicegame.c)

Random number generation
Round type determination
Point calculation
Display functions


Game Definitions (dicegame.h)

Round type enumeration
Function prototypes
Game constants



Building and Running
Prerequisites

C compiler (GCC recommended)
Make utility

Compilation
bashmake
Running the Game
bash./dicegame
Game Flow

Game Start:
Enter the number of rounds: [user input]
P1    : 0
P2    : 0

Each Round:
ROUND 1
--------
Type  : [BONUS/DOUBLE/REGULAR]
Points: [calculated points]
Dice  : [1-6]

Game End:
[Winner announcement]
GAME OVER!!


Function Reference
Core Functions
c// Generate random number within range
int getRandomNumber(int min, int max);

// Determine round type
ROUNDTYPE getRoundType();

// Calculate round points
int getRoundPoints(ROUNDTYPE roundType);

// Display player scores
void printPlayerPoints(int P1, int P2);

// Display round information
void printRoundInfo(ROUNDTYPE t, int die, int pointAdder);
Implementation Details
Round Type Distribution

BONUS: 20% chance (rolls 1-2)
DOUBLE: 30% chance (rolls 3-5)
REGULAR: 50% chance (rolls 6-10)

Point Calculation

BONUS: Fixed 200 points
DOUBLE: (Random 1-10) × 2
REGULAR: Random 1-10

Random Number Generation

Uses srand(time(0)) for true randomness
Dice rolls: 1-6 range
Point generation: 1-10 range

Error Handling
The program includes basic error checking for:

Input validation
Random number generation
Point calculation
Turn management

Limitations

Text-based interface
No save/load functionality
No tie-breaking mechanism
Fixed point calculation formulas
