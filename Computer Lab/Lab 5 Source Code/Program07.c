/*Write a program to display the fibonacci series*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 1, c;
    int n;

    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    printf("Fibonacci Number: ");
    for (int i = 0; i <n;i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
        getch();
    return 0;
}