/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h> 
#define LENGTH 10 //using define preprocessor directive to define constant value LENGTH as 10


int main(void)
{
//declaring and initialization of necessary variables

int i;
float avg;
float xi;
float snd;
float sum=0;
  
//declaring an array arr with size LENGTH which takes decimal values(float)
float arr[LENGTH];
  
//taking input from the user
    printf("Enter array elements\n");
    for(i=0;i<LENGTH;i++)
    {
        scanf("%f",&arr[i]);
    }
  
//calculating sum of elements in the array to find the average
    for(i=0;i<LENGTH;i++)
    {
        sum=sum+arr[i];
    }
  
//Calculating average
    avg=sum/LENGTH;
  
//printing the average with 2 decimal values(%.2f)
    printf("average: %.2f\n",avg);


  
// calculating \sum_{i=1}^{n}(xi-u)^2


    for (i = 0; i < 10; ++i)
    {
        xi=xi+pow(arr[i]-avg,2); //pow(x,2) calculates square of x
    }
  
//Calculating standard deviation
    snd=sqrt(xi/LENGTH);
  
//Displaying standard deviation with 2 decimal values(%.2f)
    printf("standard deviation: %.2f\n",snd);


}
