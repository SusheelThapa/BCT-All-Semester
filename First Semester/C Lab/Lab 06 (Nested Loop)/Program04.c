/*Write a program to find the sum of all positive number entered by the user. Read the numbers and keep calculating the sum until the user enter 0.*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int number, sum = 0, count = 0;

    system("cls"); /*Clear the screen*/

    /*Continous while loop*/
    while (1)
    {
        /*Taking input form user*/
        printf("Positive Number : ");
        scanf("%d", &number);

        /*Checking if the input is 0 as this is condition for termination of while loop*/
        if (number == 0)
        {
            break;
        }
        else if (number > 0)
        {
            sum = sum + number;/*Add all the value that are given by user*/
            count++;    /*Extra: Count the number of value enter by user excluding the termination condition value*/
        }
    }

    /*Simple print statement which provided us useful result*/
    printf("\nTotal sum is %d\n", sum);
    printf("Total number of positive number is %d", count);

    
    getch();/*Waits till a key is pressed*/
    return 0;
}

/*
~Here, we create a continous while loop by 
    while(1){
        
    }
 as the condition of while is never false

~Inside while we need to ask the user input 
    while(1){
        taking input from user
    }

~if user input is zero we termination the program else we have to find the sum of value entered by user
    while(1){
        taking input from user
        if input = 0--> exit while loop
        if not input>0 --> sum = sum+input   (initially value of sum will be 0)
    }

~After these we just use a simple print statement to print the result.

*/