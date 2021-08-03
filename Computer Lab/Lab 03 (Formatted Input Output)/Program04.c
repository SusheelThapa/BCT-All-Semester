/*This illustrates different format specifications for printing integer numbers.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a = 12345;
    system("cls");

    printf("\nCase 1: %d", a);
    printf("\nCase 2: %i", a);
    printf("\nCase 3: %15d", a);
    printf("\nCase 4: %-15d", a);
    printf("\nCase 5: %015d", a);
    printf("\nCase 6: %-+15d", a);
    printf("\nCase 7: %3d", a);
    getch();
    return 0;
}