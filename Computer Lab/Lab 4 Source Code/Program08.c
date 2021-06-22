/*Write a program thatprompts the user to input any integer from 1-7 and display the corresponding day in week.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int day_number;
    // system("cls");
    printf("Number from 1-7: ");
    scanf("%d", &day_number);
    printf("\n\nCorresponding Day in Week\n\n\n\t");
    switch (day_number)
    {
    case 1:
        printf("SUNDAY");
        break;
    case 2:
        printf("MONDAY");
        break;
    case 3:
        printf("TUESDAY");
        break;
    case 4:
        printf("WEDNESDAY");
        break;
    case 5:
        printf("THURSDAY");
        break;
    case 6:
        printf("FRIDAY");
        break;
    case 7:
        printf("SATURDAY");
        break;

    default:
        printf("\t!!!ERROR!!!\n\n\tYou didn't give asked number.\n");
        break;
    }

    getch();
    return 0;
}