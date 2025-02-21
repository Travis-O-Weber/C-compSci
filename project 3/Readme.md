Card Battle Game
A two-player card battle game implemented in C where players compete using cards with different types (Attack, Defend, Run) and values. The game continues until one player runs out of cards.
Game Overview
Each card has two properties:

Type (Attack, Defend, or Run)
Value (1-8)

Players draw cards and battle each other based on their cards' types and values, with different interactions possible depending on the combination.
Game Rules
Card Type Interactions

Attack vs Attack

Higher value wins
Winner gains a new card
Loser loses an additional card


Attack vs Defend

If Attack > Defend: Attacker gains a card
If Defend > Attack: Defender gains a card, Attacker loses a card


Attack vs Run

Running player automatically loses a card


Defend vs Defend

No effect


Defend vs Run

Running player loses a card
Defender gains a card


Run vs Run

Both players lose a card



Project Structure

main.c: Contains the game loop and battle logic
cards.h: Header file with card structure and function declarations
cards.c: Implementation of card-related functions

Technical Implementation
Card Structure
ctypedef enum CardType { ATTACK='A', DEFEND='D', RUN='R'} CardType;
typedef struct Card {
    int value;
    CardType CT;
    struct Card* next;
} Card;
Core Functions

Card* createCard(): Creates a new card with random type and value
Card* buildDeck(int n): Builds a deck with n cards
Card* addCard(Card* head, Card* c): Adds a card to the deck
Card* removeCard(Card* head): Removes a card from the deck
void printCards(Card* head): Displays all cards in the deck

How to Play

Compile the game:
bashgcc main.c cards.c -o card_battle

Run the executable:
bash./card_battle

Follow the prompts:

Enter the number of starting cards for each player
Watch the battle unfold automatically
Game ends when one player runs out of cards



Card Display Format
Cards are displayed in the format:

[Type][Value] (e.g., "A5" for Attack-5, "D3" for Defend-3, "R7" for Run-7)

Game Flow

Players start with equal number of cards
Each round:

Top card from each player is drawn
Battle resolves based on card types and values
Cards are added/removed according to battle results
Remaining cards are displayed


Game continues until one player has no cards

Technical Features

Linked list implementation for card decks
Dynamic memory management
Random card generation with weighted probabilities
Sorted card insertion based on value

Memory Management
The game implements proper memory handling:

Dynamic allocation for new cards
Proper deallocation when cards are removed
Memory cleanup when game ends

Probability Distribution
Card generation probabilities:

Attack: 40%
Defend: 50%
Run: 10%

Card values range from 1 to 8 with equal probability.
Error Handling

Null pointer checks for card operations
Proper linked list management
Memory allocation validation

Limitations

Text-based interface only
No save/load functionality
Cannot modify cards during gameplay
Fixed probability distribution
