/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

int
main ()
{
  int size;
// create an employee array by reading data from file
  Employee *emps = readData ("a6-input.txt", &size);
// get the best employee
  Employee bestEmp = getBestEmployee (emps, size);
// output the best employee details to file
  writeData ("a6-output.txt", bestEmp);
// free the employee array
  free (emps);
  return 0;
}
