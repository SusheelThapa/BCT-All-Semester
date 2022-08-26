/*Write a program to calculate the volume of sphere of radius r.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<stdlib.h>
void main()
{
    float volume, radius;
    system("cls");
    printf("Radius of Sphere: ");
    scanf("%f", &radius);
    volume = (float)4 / 3 * M_PI * pow(radius, 3);
    printf("\n\nThe volume of the sphere is:%.2f m^3", volume);
    getch();
}