/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <math.h>
#include "functions.h"

//Implementation of average
int average (int array[])
{
  //Required variables
  int i, sum = 0;
  double average;
  //Loop through each array element and add the element to sum
  for (i = 0; i < LENGTH; i++)
    {
      sum += array[i];
    }
  //Find average
  average = sum / LENGTH;
  //Return average
  return average;
}

//Implementation of quadratic formula
void quadraticFormula (double a, double b, double c, double *x1, double *x2)
{
  //Find square root part
  double squareRt = sqrt (pow (b, 2) - 4 * a * c);
  //Root 1
  *x1 = (-b + squareRt) / (2 * a);
  //Root 2
  *x2 = (-b - squareRt) / (2 * a);
}
