//header guards
//these are used to prevent multiple declarations of same part of code
#ifndef Student_H
#define Student_H

//structure to store Student information
struct Student{

int id;//to store id
char name[10];//to store name

};

//setting alias name for struct Student
typedef struct Student Student;

//prototype for sortStudents function
void sortStudents(Student [],int);

//prototype for print function
void print(Student [],int);

//prototype for searchStudent function
Student searchStudent(Student [],int ,int );

#endif // Student_H