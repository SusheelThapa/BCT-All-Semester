#include <stdio.h>

struct Date
{
    int day, month, year;
};
struct college
{
    char name[100];
    struct Date estDate;
    char location[100];
};

void main()
{
    struct college c[10];

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("College Name: ");
        gets(c[i].name);
        printf("Established Date: \n");
        printf(" Day: ");
        scanf("%d", &c[i].estDate.day);
        printf(" Month: ");
        scanf("%d", &c[i].estDate.month);
        printf(" Year: ");
        scanf("%d", &c[i].estDate.year);

        fflush(stdin);
        printf("Location: ");
        gets(c[i].location);
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("%-25s%-25s%2d/%2d/%4d\n", c[i].name, c[i].location, c[i].estDate.day, c[i].estDate.month, c[i].estDate.year);
    }
}