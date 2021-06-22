/*This example illustrate different format specifier for printing string*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str[20] = "I love Balgung.";
    system("cls");
    printf("\nCase 1: %s", str);
    printf("\nCase 2: %18s", str);
    printf("\nCase 3: %-18s", str);
    printf("\nCase 4: %18.8s", str);
    printf("\nCase 5: %-18.9s", str);
    printf("\nCase 6: %5s", str);
    printf("\nCase 7: %10s", str);
    getch();
    return 0;
}