/*Write a program to read l,b and h of  a cuboid and display its volume.
Source code:*/

#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
void main()
{
    float l, b, h, volume;
    system("cls");
    printf("Enter the length:");
    scanf("%f", &l);
    printf("Enter the breadth:");
    scanf("%f", &b);
    printf("Enter the height:");
    scanf("%f", &h);
    volume = (l * b * h);
    printf("\nThe volume of the cuboid is: %.2f", volume);
    getch();
}