/*Write  a program to calcualte x^n/n!, where x is floating point number and n is integerr*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x;
    int n, factorial=1;
    system("cls");
    printf("Value of x: ");
    scanf("%f", &x);
    printf("Value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <=n;i++){
        factorial = factorial * i;
    }
    printf("Value x^n / n! is %.3f.",( pow(x, n) / (double)factorial));
    getch();
    return 0;
}