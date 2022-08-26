//Write a Program to find the greatest of four number entered by the user


/*Importing header files*/ 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    //Declaration of variable
    int firstNumber, secondNumber, thirdNumber, fourthNumber;

    system("cls"); //Simply this is cls command run that is run in cmd.exe

    //Taking the input from the user
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    printf("Enter the third number: ");
    scanf("%d", &thirdNumber);

    printf("Enter the fourth number: ");
    scanf("%d", &fourthNumber);

    //Checking the condition of greatest
    if (firstNumber > secondNumber && firstNumber > thirdNumber && firstNumber > fourthNumber)
    {
        printf("%d is greatest number.", firstNumber);
    }
    else if (secondNumber > thirdNumber && secondNumber > fourthNumber)
    {
        printf("%d is greatest number.", secondNumber);
    }
    else if (thirdNumber > fourthNumber)
    {
        printf("%d is greatest number.", thirdNumber);
    }
    else
    {
        printf("%d is greatest number.", fourthNumber);
    }
    getch();
    return 0;
}

