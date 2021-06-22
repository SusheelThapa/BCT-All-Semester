/*Write a program to calculate the simple interest. Read values of P,T,R*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float principal, time, rate, simple_interest;
    system("cls");
    printf("Principal: ");
    scanf("%f", &principal);
    printf("Time in years: ");
    scanf("%f", &time);
    printf("Rate per annum: ");
    scanf("%f", &rate);

    simple_interest = (principal * time * rate) / 100;
    printf("\n\nThe simple interest is: Rs%.2f", simple_interest);
    getch();
}
