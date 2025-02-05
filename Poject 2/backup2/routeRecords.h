#ifndef ROUTERECORDS_H
#define ROUTERECORDS_H
typedef enum SearchType
{
ROUTE,
ORIGIN,
DESTINATION,
AIRLINE,
QUIT
} SearchType;

typedef struct RouteRecord_struct
{
char origin[4];
char destination[4];
char airline[3];
int passengers[6];
} RouteRecord;

void printMenu();
int checkFileOpening(FILE *inputFile);
int getFileLength(FILE *inputFile);
int checkCSVHeader(FILE* inputFile);
RouteRecord *createRecords(FILE *inputFile);
void searchRecords(RouteRecord *flights, int flightsLength, char *key1, char *key2, SearchType st);
int fillRecords(RouteRecord *flights, FILE *inputFile);
int findAirlineRoute(RouteRecord *flights, int flightsLength, char *origin, char *destination, char *airline);
SearchType getMenuOption();
int createRecordsTest(FILE *inputFile);
RouteRecord* fillRecordsTest(RouteRecord *flights, FILE *inputFile);
void stringUpper(char *lowered);
#endif