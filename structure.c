// function inside structure 
#include <stdio.h>
typedef struct Student
{
    int rollNo;
    int marks;
    char *name;
    int (*isPass)(int);
} student;

int isPass(int marks)
{
    return marks > 33;
}
int main()
{
    student s;
    s.isPass = isPass;
    s.name = "John Doe";
    s.rollNo = 12;
    s.marks = 65;

    if (s.isPass(s.marks))
    {
        printf("\nConngratualation! You are passed");
    }
    else
    {
        printf("\nSorry! You are failed");
    }

    return 0;
}