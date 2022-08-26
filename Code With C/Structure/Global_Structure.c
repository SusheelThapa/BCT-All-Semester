/*
WAP to store record of a student that contains name, roll, section and marks using structure(Global)
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*This will declared global structure*/
struct StudentRecord
{
    char student_name[100];
    int student_roll_number;
    char student_section;
    float student_marks;
};

int main()
{
    struct StudentRecord s; /*Structure Variable*/

    system("cls");

    /*Taking input from user*/
    printf("Name:");
    scanf("%[^'\n']", s.student_name);

    printf("Roll Number:");
    scanf("%d", &s.student_roll_number);

    printf("Section:");
    scanf(" %c", &s.student_section);

    printf("Marks:");
    scanf("%f", &s.student_marks);

    /*Printing the result*/
    printf("\nName of student: %s", s.student_name);
    printf("\nRoll Number: %d", s.student_roll_number);
    printf("\nSection: %c", s.student_section);
    printf("\nMarks: %.2f", s.student_marks);

    getch();
    return 0;
}

/*Only in Turbo C to link the pointer if it show error in linking files*/
void linkfloat()
{
    float x = 0, *y;
    y = &x;
    x = *y;
}