/*
WAP that creates four user defined funtion to perform add, sub, mul and div. Use switch case to perform the necessary arithematic operation in the main.

*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Note :
    sum = a+b;
    return sum;
IS EQUIVALENT TO 
    return sum;
*/

/*Function declaration and initialization and return value with above note*/
float addition(float a, float b) { return a + b; } 
float subtraction(float a, float b) { return a - b; }
float multiplication(float a, float b) { return a * b; }
float division(float a, float b) { return a / b; }


int main()
{
    /*Variable Declaaration */
    float number_one, number_two;
    float result;
    char operator;

    system("cls");/*Clear the terminal*/

    /*Taking input form user*/
    printf("Number one : ");
    scanf("%f", &number_one);
    printf("\nOperator(+ - * /): ");
    scanf(" %c", &operator);
    printf("\nNumber two : ");
    scanf("%f", &number_two);

    /*Switch case to call respective function on the basis of operator and store return value in result variable*/
    switch (operator)
    {
    case '+':
    {
        result = addition(number_one, number_two);
        break;
    }
    case '-':
    {
        result = subtraction(number_one, number_two);
        break;
    }
    case '*':
    {
        result = multiplication(number_one, number_two);
        break;
    }
    case '/':
    {
        result = division(number_one, number_two);
        break;
    }

    default:
    {
        printf("\t\t!!!ERROR!!!\n");
        printf("You didnot give correct operator to perform task.");
        break;
    }
    }

    /*Print meaningful result*/
    printf("\nValue of %.2f %c %.2f is  %.3f.", number_one, operator, number_two, result);

    getch();
    return 0;
}