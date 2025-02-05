#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

// function to read employee data from file and create and return a dynamic array of employees
Employee* readData(char* filename, int* size)
{
Employee emp;
*size = 0; // set size of array to 0
// open the input file in read mode
FILE *in = fopen(filename, "r");
// read till the end of file, counting the number of records in file
while(!feof(in))
{
fscanf(in,"%s %d %lf",emp.name, &emp.id, &emp.salary);
(*size)++;
}

// move the pointer to start of file
fseek(in, 0, SEEK_SET);
// create employee array of size
Employee *Employees = (Employee*)malloc((*size)*sizeof(Employee));

// loop to read employees from file into employees array
int count = 0;
while(!feof(in))
{
fscanf(in,"%s %d %lf",emp.name, &emp.id, &emp.salary);
Employees[count] = emp;
count++;
}

// close the file
fclose(in);
free(in);
return Employees;
}

// function to determine and return the best employee i.e employee with highest salary
Employee getBestEmployee(Employee* emps, int size)
{
// set first employee i.e employee at index 0 to be the best employee
Employee bestEmp = emps[0];
// loop over employee array
for(int i=1;i<size;i++)
{
if(emps[i].salary > bestEmp.salary) // ith employee's salary > bestEmp's salary, update bestEmp to ith employee
bestEmp = emps[i];
}

return bestEmp;
}

// function to output best employee's data to out[ut file
void writeData(char* filename, Employee emp)
{
FILE *out = fopen(filename, "w"); // open the file in write mode
// write name, id and salary(no decimal places) to file in the given order with a space in between
fprintf(out,"%s %d %.0f",emp.name, emp.id, emp.salary);
fclose(out); // close the file
free(out);
}