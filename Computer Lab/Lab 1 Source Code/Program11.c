/*Write a program to read time given for C programming study a day at your home in hours, minutes and seconds and display the total time in seconds in 30 days.
Source code:*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float h, m, s, month;
    system("cls");
    printf("\nEnter time you study C programming per day in hours minutes and seconds:");
    scanf("%f%f%f", &h, &m, &s);
    month = (h * 3600 + m * 60 + s) * 30;
    printf("\n\nThe seconds studied for C programming in a month is: %.3f seconds", month);
    getch();
}
