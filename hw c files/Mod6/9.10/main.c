/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "point.h"

int main()
{
    struct Point p1,p2,temp;
    
    scanf("%lf",&p1.x);
    scanf("%lf",&p1.y);
    scanf("%lf",&p1.z);
    
    
    scanf("%lf",&p2.x);
    scanf("%lf",&p2.y);
    scanf("%lf",&p2.z);
    
    midpoint(p1,p2,&temp);
    printf("midpoint: %.2f, %.2f, %.2f",temp.x,temp.y,temp.z);
    
    double dist;
    distance(p1,p2,&dist);
    printf("\ndistance: %.2f",dist);
    
    return 0;

}