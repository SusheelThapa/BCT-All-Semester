/*
Write a program to read the name of 10 students in main(). Pass the name list to function that sorts the array to ascending order. Display the sorted array from main().
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void sort(char name[][100])
{
    "Compare each string and arrange in alphabatical order. BUBBLE SORT TECHNIQUE";

    char temp[100];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (strcmpi(name[i], name[j]) < 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}

int main()
{
    /*Variable Declaration*/
    char student_name[10][100];

    system("cls");

    /*Taking Input*/
    for (int i = 0; i < 10; i++)
    {
        fflush(stdin);

        printf("Name: ");
        scanf("%[^'\n']", student_name[i]);
    }

    /*Function call*/
    sort(student_name);

    /*Printing Result*/
    printf("\nName in Alphabetical Order\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", student_name[i]);
    }

    getch();
    return 0;
}