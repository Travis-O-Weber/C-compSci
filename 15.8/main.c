/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//include student.c
#include "student.c"

//main function storing command line argument
int main(int argc, char *argv[])
{
    //check if argument is given or not
    if(argc<=1)
    {
    // if agrc is less than or equal to 1 means file name is not there
        printf("input file name not specified ....exiting the program\n");
       exit(0);
    }


   char fileName[100];//stores filename

   //argv[1] will have filename...store the value in fileName
   strcpy(fileName,argv[1]);

FILE *fptr;//declare the file pointer

 fptr= fopen(fileName,"r");//open the file...initialize the file pointer
 if(fptr==NULL)//check if fptr is null or not
 {
     //fptr is null  denotes file cannot be opened
     printf("cannot open the file");
     exit(0);

 }
 char info[1000];//stores one line in file
int n=0;//counts the number of students

//read until end of file is reached
 while(fscanf(fptr,"%s",info)!=EOF)
 {
  n++;//increment the n

 }
//move the filepointer at the beginning of the file
 fseek(fptr,0,SEEK_SET);
 //dynamically allocate the size of students array
 Student *students=(Student *)(malloc(sizeof(Student)*n));

 int count=0;//denotes the current student

 //again read the file until end of file is reached
 while(fscanf(fptr,"%s",info)!=EOF)
 {
   int index=0;//denotes index in info
   int id=0;//stores id of student
   int i=0;
   for(i=0;info[i]!='\0';i++)
   {
       if(info[i]==',')//check comma is reached or not
       {
           index=i;
        break;
       }
       //converting the id to int while iterating
        id=id*10+(info[i]-'0');


   }

   //stores name of student
   char name[10];
   int c=0;//denotes index in name
   //int i=0;
   for(i=index+1;info[i]!='\0';i++)
   {
       name[c++]=info[i];

   }
   //assign null character at the end of name
   name[c]='\0';

   //assign the id and name of current student to students array
   students[count].id=id;
   strcpy(students[count].name,name);

count++;
 }
 fclose(fptr);

//print the students data
print(students,n);

//sort the students data
sortStudents(students,n);

//print the students data
print(students,n);

int search_id;
//get the id to search
scanf("%d",&search_id);

//get the required student
Student desired=searchStudent(students,n,search_id);

//print the students information in required format
printf("(%d,%s)",desired.id,desired.name);

//free the dynamic array
free(students);

    return 0;
}