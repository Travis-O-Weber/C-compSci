#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//include student header file
#include "student.h"

//function to swap two structure variables
void swap(Student *s1,Student *s2)
{
    //logic is same as swaping two variables with the help of third variable

    //swap the id
    int temp=s1->id;
    s1->id=s2->id;
    s2->id=temp;

    //swap the name
    char t[10];
    strcpy(t,s1->name);
    strcpy(s1->name,s2->name);
    strcpy(s2->name,t);
}

//function to sort Students with respect to id in increasing order with the help of selection sort
void sortStudents(Student students[],int n)
{
    //Selection sort
      int i=0;    
     for(i=0;i<n-1;i++)//iterate upto n-1 items
     {
         int min_index=i;//assume minimum id at ith index
         int j=i+1;
          for(j;j<n;j++)//iterate through i+1 to n-1 index
          {
              //check if jth index has smaller id then min_index's id
              if(students[j].id < students[min_index].id)
              {
                  min_index=j;//assign min_index as j

              }

          }

          //if min_index not equal to i then swap these two
         if(min_index!=i)
         {
             swap(&students[min_index],&students[i]);

         }

     }

}


//function to print Students data
void print(Student students[], int n)
{
    //print the data as required in output
    int i=0;
     for(i=0;i<n-1;i++)
     {
         printf("(%d,%s) -> ",students[i].id,students[i].name);

     }
    printf("(%d,%s)\n",students[n-1].id,students[n-1].name);

}

//function to  return Student with desired id
Student searchStudent(Student students[],int n,int id)
{

    //linear search
    //iterate through each item and check whether id is equal to desired id
    int i=0;
    for(i=0;i<n;i++)
    {
        if(students[i].id==id)
        {
            return students[i];

        }
    }
//this part of code indicates id doesnot match with any student
//just return first student
    return students[0];

}
