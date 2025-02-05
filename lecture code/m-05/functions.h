#ifndef FUNCTIONS_H //if(!defined) {
#define FUNCTIONS_H //define

//typedef existingType newType;
//typedef int INT64;
typedef enum LIGHTCOLOR {RED, GREEN, YELLOW} LIGHTCOLOR; 

/*
//functions.c
{
	//line5	
	LIGHTCOLOR light = RED; //0-RED, 1-GREEN, 2-YELLOW 
	//line200
	if(light==RED)
	{}
	else if(light==GREEN)
	{}
	else if(light==YELLOW)
	{}
}
*/
void setArrayValues(int arr[], INT64 arrSize, int factor);
void printArrayValues(const int arr[], int arrSize);
void calculateAverage(const int arr[], int, double*);

#endif //}
