/*Write a program to convert the given centigrade measure into Farenheit using relation*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius;
    system("cls");
    printf("Temperature in Centigrade: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8 * celsius + 32;

    printf("\nTemperature in Farenheit: %.2f degree Fahrenheit. ", fahrenheit);

    printf("Press any key to exit...");

    getch();
    return 0;
}