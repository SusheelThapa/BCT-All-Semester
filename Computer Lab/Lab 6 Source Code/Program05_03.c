/*1,2,5,10,17,26.......*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, first = 1;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("Sequence is \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        first = first + (2 * i + 1);
    }
    getch();
    return 0;
}