routesearch: main.o routeRecords.o
	gcc main.o routeRecords.o -o routesearch
main.o: main.c routeRecords.h
	gcc -c main.c -o main.o
routeRecords.o: routeRecords.c routeRecords.h
	gcc -c routeRecords.c -o routeRecords.o
