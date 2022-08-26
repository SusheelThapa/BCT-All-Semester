/*Type,run and observe the output of the following program.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float a;
    char b;
    long int c;
    unsigned int e;

    system("cls");

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf(" %c", &b);
    printf("Enter the value of c and e: ");
    scanf("%ld%u", &c, &e);

    printf("Value of a: %f\nValue of b:%c\nValue of c: %ld\nValue of e: %u", a, b, c, e);

    printf("Press any key to exit...");

    getch();
    return 0;
}