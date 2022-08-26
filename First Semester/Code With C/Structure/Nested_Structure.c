#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Structure One*/
struct Person
{
    char name[200];
    int age;
};

/*Structure Two*/
struct Student
{
    int roll;
    char section;
    struct Person p; /*Making object of Structure One*/
};

int main()
{
    struct Student s; /*Structure Variable*/

    system("cls");

    /*Taking Input*/
    printf("Name:");
    scanf("%[^'\n']", s.p.name);

    printf("Age:");
    scanf("%d", &s.p.age);

    printf("Section:");
    scanf(" %c", &s.section);

    printf("Roll:");
    scanf("%d", &s.roll);

    /*Printing the inputted data*/
    printf("\nName: %s", s.p.name);
    printf("\nAge: %d", s.p.age);
    printf("\nSection: %c", s.section);
    printf("\nRoll: %d", s.roll);

    getch();
    return 0;
}