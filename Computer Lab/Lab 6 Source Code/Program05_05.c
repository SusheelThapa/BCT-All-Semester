/*1,1/3,1/5............,1/(2n-1)*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("\nSequence is: \n\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("1/%d ", 2 * i -1);
    }
    getch();
    return 0;
}