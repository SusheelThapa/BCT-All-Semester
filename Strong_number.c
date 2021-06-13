/*Program to check whether the input number is strong number or not*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
    Logic of code:
        A strong number is when the sum of the factorials of each of its digits equals the original number.
        For example,
            1! +4! + 5! = 1 + 24 + 120 = 145 
            So 145 is strong.
    For this we use funtion from Factorial.c
*/

/*This function is taken from Factorial.c. Visit that code to know much about this function*/
int Factorial(int n)
{
    int fact;
    if (n == 1 || n == 0)
    {
        return 1;
    }

    fact = n * Factorial(n - 1);
    return fact;
}

/*This function just extract each element(remainder when divided by 10) and call the factorial funtion to find it value*/
int Strong(int n)
{
    int remainder, strong_value = 0;
    while (n != 0)
    {
        remainder = n % 10;
        strong_value = Factorial(remainder) + strong_value;
        n = n / 10;
    }
    return strong_value;
}
int main()
{
    /*Variable Declaration*/
    int number, strong_value;

    system("cls"); /*Clears the terminal*/

    /*User input*/
    printf("Enter the number to check whether it is strong or not?\n");
    scanf("%d", &number);
    
    system("cls"); /*Clears the terminal*/

    /*Check whether the number is negative or not. If found negative show a message and exit the code*/
    if (number<0){
        printf("Factorial of negative number isn't possible.\nSo, negative number cannot be strong number.");
        getch();
        exit(0);/*Forcefully exit the code.*/
    }

    strong_value = Strong(number); /*Calls the function strong and store the value in strong_value*/

    /*Print some info that help user to interpet the result*/
    printf("Number : %d\n",number);
    printf("Strong : %d\n\n",strong_value);

    /*Checking the condition*/
    if (number == strong_value)
    {
        printf("Result: It is Strong Number.");
    }
    else if (number != strong_value)
    {
        printf("Result: It isn't Strong Number.");
    }

    getch();
    return 0;
}