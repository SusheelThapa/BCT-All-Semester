/*
Create a structure employee containing names as character string , telephone as character string and salary as intger. Input the records of 10 employees. After that display the name,telephone and salary of employee with highest salary and lowest salary and display the average salary of all 10 employee
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    /*Member of structure*/
    char name[100];
    char telephone_number[100];
    int salary;
};

int main()
{
    struct Employee e[10];
    int highest_salary, lowest_salary;

    float average_salary = 0;

    system("cls");

    /*Taking input from user*/
    for (int i = 0; i < 10; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^'\n']", e[i].name);

        printf("Telephone Number: ");
        scanf(" %[^'\n']", e[i].telephone_number);

        printf("Salary: ");
        scanf("%ld", &e[i].salary);
    }

    highest_salary = e[0].salary;
    lowest_salary = e[0].salary;

    system("cls");

    for (int i = 0; i < 10; i++)
    {
        (highest_salary < e[i].salary) ? (highest_salary = e[i].salary) : (highest_salary = highest_salary);
        (lowest_salary > e[i].salary) ? (lowest_salary = e[i].salary) : (lowest_salary = lowest_salary);

        average_salary = (average_salary * i + e[i].salary) / (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        if (e[i].salary == highest_salary)
        {
            printf("\n<---Highest Salary Employee---->\n");
            printf("Name: %s\n", e[i].name);
            printf("Telephone Number: %s\n", e[i].telephone_number);
            printf("Salary: %d\n", e[i].salary);
        }
        if (e[i].salary == lowest_salary)
        {
            printf("\n<----Lowest Salary Employee---->\n");
            printf("Name: %s\n", e[i].name);
            printf("Telephone Number: %s\n", e[i].telephone_number);
            printf("Salary: %d\n", e[i].salary);
        }
    }

    printf("\nAverage Salary of the employee: %f\n", average_salary);

    getch();
    return 0;
}