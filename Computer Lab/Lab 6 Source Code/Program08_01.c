/*
1
1   2
1   2   3
1   2   3   4   
1   2   3   4   5
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("Sequence is :\n\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}