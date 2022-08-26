/*
WAP that creates four user defined funtion to perform add, sub, mul and div. Use switch case to perform the necessary arithematic operation in the main.
The operation should be perform repeatedly till user enter n

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
    char operator, user_choice;

    system("cls"); /*Clear the terminal*/

    /*Taking operator value  as our operator is condition in do while loop*/
    printf("Operator(+ - * /): ");
    scanf(" %c", &operator);
    do
    {
        /*Taking input form user*/
        printf("\nNumber one : ");
        scanf("%f", &number_one);
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

        getch();/*Waits till a key is pressed*/  // IMPORTANT LINE
        system("cls"); /*Clear the terminal*/
        /*Asking user whether to continue or not*/
        printf("Do you want to continue(y/n)?\n");
        scanf(" %c", &user_choice);

        /*If statement to work as per the user*/
        if (user_choice == 'n')
        {
            break; /*Break the while loop*/
        }
        else if (user_choice == 'y')
        {
            /*Asking the operator*/
            printf("\nOperator(+ - * /): ");
            scanf(" %c", &operator);
        }
    } while (operator!= 'e');

    printf("Program ended! \nPress any key ..."); /*Meaningful result*/

    getch(); /*Waits till a character in pressed*/
    return 0;
}