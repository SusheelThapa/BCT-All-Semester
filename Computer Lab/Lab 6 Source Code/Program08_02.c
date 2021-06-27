/*
5   4   3   2   1   
5   4   3   2     
5   4   3      
5   4     
5   
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
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j>i; j--)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
    getch();
    return 0;
}