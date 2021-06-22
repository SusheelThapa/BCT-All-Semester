/*Write a program to read values of x and y from the user and evaluate the expression v=x^3+y^2-100/x*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    float x, y, expression_value;
    system("cls");
    printf("Enter the value of x and y respectively:");
    scanf("%f%f", &x, &y);
    expression_value = pow(x, 3) * pow(y, 2) - (float)100 / x;
    printf("Expression:\n v=(x^3+y^2)-(100/x)");
    printf("\n\nThe value of the expression is: %.2f", expression_value);
    getch();
}
