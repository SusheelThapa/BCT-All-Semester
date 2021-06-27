/* 1,2,3,4,5,6...................n*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("\nNumber for 1 to n is listed below: \n\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    getch();
    return 0;
}