/*This example illustrates different format specifications for printing real numbers.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float n = 123.9876;
    system("cls");
    printf("\nCase 1: %f", n);
    printf("\nCase 2: %e", n);
    printf("\nCase 3: %g", n);
    printf("\nCase 4: %15.4d", n);
    printf("\nCase 5: %-15.3d", n);
    printf("\nCase 6: %015.4ed", n);
    printf("\nCase 7: %.8d", n);
    printf("\nCase 8: %2.2d", n);
    
    getch();
    return 0;
}