/*Write a program to read a unsigned integer (suppose n) and display from 1 to n and n to 1*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("From 1 to %d",n);
    printf("\t\tFrom %d to 1",n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n %3d\t\t\t%3d\n", i, (n - i + 1));
    }
    getch();
    return 0;
}