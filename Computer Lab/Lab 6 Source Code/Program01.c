/*Program to print a multiplication table of MXN. Read the values of M and N from the user.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    system("cls");
    printf("Multiplication Table of : ");
    scanf("%d", &m);
    printf("Upto : ");
    scanf("%d", &n);
    printf("Multiplication Table of %d from 1 to %d is : \n", m, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d  *   %d  =   %d\n", m, i, m * i);
    }
    getch();
    return 0;
}
