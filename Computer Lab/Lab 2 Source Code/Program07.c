/*Write a program to compute equivalent resistance of two resistor R1 and R2 when they are in series and in parallel*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float resistance_one, resistance_two, resistance_series, resistance_parallel;

    system("cls");

    printf("Value of Resistance One : ");
    scanf("%f", &resistance_one);
    printf("Value of Resistance Two: ");
    scanf("%f", &resistance_two);

    resistance_series = resistance_one + resistance_two;
    resistance_parallel = (resistance_one * resistance_two) / (resistance_one + resistance_two);

    printf("\nResistence in Series: %f\n", resistance_series);
    printf("Resistence in Parallel: %f", resistance_parallel);

    printf("Press any key to exit...");

    getch();
    return 0;
}