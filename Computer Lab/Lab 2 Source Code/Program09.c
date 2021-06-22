/*Write a program to read number of girls and boys in your class and display their ratio of girls to boys.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int girls_number, boys_number;
    float ratio;

    system("cls");

    printf("Enter the number of girls: ");
    scanf("%d", &girls_number);

    printf("Enter the number of boys: ");
    scanf("%d", &boys_number);

    system("cls");

    ratio = ((float)girls_number) / ((float)boys_number);

    printf("No. of Girls : %d\n", girls_number);
    printf("No. of Boys : %d\n", boys_number);
    printf("\nRatio: %.2f   #Girls to Boys\n", ratio);

    printf("Press any key to exit...");

    getch();
    return 0;
}