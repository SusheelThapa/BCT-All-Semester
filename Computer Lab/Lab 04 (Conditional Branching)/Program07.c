/*Write a program to evaluate the following function(F(x)) given by*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float number, function_value;
    // system("cls");

    printf("To calculate:\n \t\tF(x)\n\n");
    printf("X = ");
    scanf("%f", &number);

    if (number <= 0)
    {
        function_value = 0;
    }
    else if (number > 0 && number <= 10)
    {
        function_value = number * (number - 10) * (number - 15);
    }
    else if (number > 10 && number <= 15)
    {
        function_value = (number - 10) * (number - 15) * (number - 20);
    }
    else if (number > 15 && number <= 20)
    {
        function_value = (number - 30) * (number - 15) * (number - 20);
    }
    else if (number > 20 && number <= 30)
    {
        function_value = (number - 30) * (number - 20) * (number - 40);
    }
    else
    {
        function_value = 0;
    }
    printf("\nThe value of function is %f.", function_value);
    getch();
    return 0;
}