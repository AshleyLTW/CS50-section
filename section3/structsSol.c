#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int id;
    string name;
    float gpa;
}
student;

int main(void)
{
    student students[3];

    students[0].name = "Alice";
    students[0].id = 10;
    students[0].gpa = 3.6;

    students[1].name = "Bob";
    students[1].id = 20;
    students[1].gpa = 3.7;

    students[2].name = "Charlie";
    students[2].id = 30;
    students[2].gpa = 3.8;

    // Print here
    for (int i = 0; i < 3; i++)
    {
        printf("%s %d %.1f\n", students[i].name, students[i].id, students[i].gpa);
    }
}