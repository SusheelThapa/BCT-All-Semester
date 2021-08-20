#include <stdio.h>
struct employee
{
    char name[100];
    int age;
    int salary;
};

void sort(struct employee e[])
{
    struct employee temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (e[i].salary > e[j].salary)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
void main()
{
    struct employee e[3];

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Employee %d:\n", i + 1);
        printf(" Name: ");
        gets(e[i].name);
        printf(" Age: ");
        scanf("%d", &e[i].age);
        printf(" Salary: ");
        scanf("%d", &e[i].salary);
    }
    sort(e);
    printf("\n\nSorted Date:\n");

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Employee %d:\n", i + 1);
        printf(" Name: ");
        puts(e[i].name);
        printf(" Age: ");
        printf("%d", e[i].age);
        printf(" Salary: ");
        printf("%d\n", e[i].salary);
    }
}