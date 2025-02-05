/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include "functions.h"

int main(){
   //Required variables
   int array[5];

   double a,b,c,x1,x2,avg;  
  
   //Read array elements

   for(int i = 0;i<5;i++){
      
       scanf("%d",&array[i]);
   }              
   //Read quardatic expression co-efficients
   printf("\nEnter a,b and c values of quadratic equation : ");
   scanf("%lf%lf%lf",&a,&b,&c);
  
   //Call average(),quadraticFormula() and standardDeviation() methods
   avg = average(array);
   quadraticFormula(a,b,c,&x1,&x2);
  
   //Print the output
   printf("average: %.2lf\n",avg);
   printf("x1: %.2lf\n",x1);
   printf("x2: %.2lf\n",x2);

   return 0;


}