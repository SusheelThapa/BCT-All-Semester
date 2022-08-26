/*Write a program that ask the user a arithemetic operator and two operands and perform the correspinding operation*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int operand_one, operand_two;
    char operator;
    float answer;

    system("cls");

    printf("Operand one: ");
    scanf("%d", &operand_one);
    printf("Operand two: ");
    scanf("%d", &operand_two);
    printf("Operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        answer = operand_one + operand_two;
        break;
    case '-':
        answer = operand_one - operand_two;
        break;
    case '*':
        answer = operand_one * operand_two;
        break;
    case '/':
        if (operand_two == 0)
        {
            printf("\nError! Zero Division error");
            exit(0);
        }
        else
        {
            answer = (float)operand_one / operand_two;
            break;
        }
    default:
        printf("\nYou didn't give correct operator.");
        exit(0);
    }
    printf("\nValue is %.2f.", answer);

    getch();
    return 0;
}