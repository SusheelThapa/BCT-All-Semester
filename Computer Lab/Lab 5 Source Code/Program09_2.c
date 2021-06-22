/*Write a program to read  number and check whether it is Armstrong or not*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int armstrong = 0, remainder, number, copy_number;
    system("cls");
    printf("Number: ");
    scanf("%d", &number);
    copy_number = number;
    while (copy_number != 0)
    {
        remainder = copy_number % 10;
        armstrong = pow(remainder, 3) + armstrong;
        copy_number = copy_number / 10;
    }
    printf("\n\nNumber: %d\nArmstrong: %d\n\n", number, armstrong);

    if (number == armstrong)
    {
        printf("It is armstrong.");
    }
    else
    {
        printf("It isn't armstrong.");
    }
    getch();
    return 0;
}