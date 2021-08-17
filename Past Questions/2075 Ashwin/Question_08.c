/*
A filename employee.txt stores employee name, employee id and employee salary. Wrtie a program to display the detail of all employee in th eorder of their salary.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char name[40];
    int id;
    int salary;
};

int main()
{
    struct Data employee[4];

    FILE *out_employee;

    out_employee = fopen("employee.txt", "r");

    if (out_employee == NULL)
    {
        printf("Some error occured.");
    }

    for (int i = 0; i < 4; i++)
    {

        fscanf(out_employee, "%s%d%d", employee[i].name, &employee[i].id, &employee[i].salary);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s %d %d\n", employee[i].name, employee[i].id, employee[i].salary);
    }
    fclose(out_employee);
    getch();
    return 0;
}
// Susheel 156 12000 Niraj 196 1400 Saroja 756 15000 Shree 16 4000