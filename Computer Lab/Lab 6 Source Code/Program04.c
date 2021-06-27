/*Write a program to find the sum of all positive number entered by the user. Read the numbers and keep calculating the sum until the user enter 0.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number, sum = 0, count = 0;
    system("cls");
    while (1)
    {
        printf("Number : ");
        scanf("%d", &number);
        if (number == 0)
        {
            break;
        }
        else if (number > 0)
        {
            sum = sum + number;
            count++;
        }
    }
    printf("\nTotal sum is %d\n", sum);
    printf("Total number of positive number is %d", count);
    getch();
    return 0;
}