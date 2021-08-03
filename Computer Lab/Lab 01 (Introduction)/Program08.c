/*Write a program to read four integers from the user and display mean of the numbers*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int a, b, c, d;
    float mean;
    system("cls");
    printf("\nEnter four integers one by one:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    mean = (float)(a + b + c + d) / 4;
    printf("The mean of the given integers is: %.2f", mean);
    getch();
}