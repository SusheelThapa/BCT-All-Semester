/* 2,4,6,8,10 ..................,2n*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("\nNumber for 2 to 2n is listed below: \n\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
    }

    getch();
    return 0;
}