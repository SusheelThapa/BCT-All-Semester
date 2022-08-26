/*Program that inputs seconds as input and convert to minutes.*/
#include <stdio.h>
#include <conio.h>

void main(void)
{
    int seconds, min;

    system("cls");

    printf("Enter number of seconds: ");
    scanf("%d", &seconds);

    min = seconds / 60;     /*Integer Division*/
    seconds = seconds % 60; /*Integer Division*/

    printf("\nMinutes= %d", min);
    printf("\nSeconds= %d", seconds);

    printf("Press any key to exit...");

    getch();
}
