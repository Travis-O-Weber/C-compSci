Airlines.exe: main.o route-records.o
	gcc main.o route-records.o -o Airlines.exe
main.o: main.c
	gcc -c main.c
route-records.o: route-records.c
	gcc -c route-records.c
clean:
	rm -f main.o route-records.o Airlines.exe