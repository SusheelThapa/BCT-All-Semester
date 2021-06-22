/*Write a program to calculate the area, circumference of a circle of radius r.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    float area, circumference, r;

    system("cls");

    printf("Radius of circle:");
    scanf("%f", &r);

    area = M_PI * pow(r, 2);
    circumference = 2 * M_PI * r;
    printf("\nArea of Circle: %.2f m^2\n", area);
    printf("\nCircumference of circle: %.2f m.", circumference);
    getch();
}
