/*
Question_Three.c

Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
*/

#include <stdio.h>

struct StudentSemesterExamRecord
{
    char name[20];
    int marks_obtained_in_c_programming;
} student[5];

int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Name of Student %d: ", i + 1);
        scanf("%s", student[i].name);

        printf("Marks obtained in C 'Programming : ");
        scanf("%d", &student[i].marks_obtained_in_c_programming);
    }

    printf("\n%-20s %-6s\n", "Name", "Marks");

    for (int i = 0; i < 5; i++)
    {
        printf("%-20s %-6d\n", student[i].name, student[i].marks_obtained_in_c_programming);
    }

    return 0;
}