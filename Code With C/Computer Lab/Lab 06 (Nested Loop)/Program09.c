/*Write a program to find the sum of all positive number entered by the user. Read the numbers and keep calculating the sum until the user enter n.*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int  number,sum = 0, count = 0;
    char input_number;

    system("cls"); /*Clear the screen*/

    /*Continous while loop*/
    while (1)
    {
        /*Taking input form user*/
        printf("Positive Number : ");
        scanf(" %[n,0-9]", &input_number);

        /*Checking if the input is 0 as this is condition for termination of while loop*/
        if (input_number == 'n')
        {
            break;
        }
        else
        {
            number = input_number - 48; /*ASCII difference of charcter 1 and numeric 1 is 48 and same for other number*/
            sum = sum + number; /*Add all the value that are given by user*/
            count++;            /*Extra: Count the number of value enter by user excluding the termination condition value*/
        }
    }

    /*Simple print statement which provided us useful result*/
    printf("\nTotal sum is %d\n", sum);
    printf("Total number of positive number is %d", count);

    getch(); /*Waits till a key is pressed*/
    return 0;
}

/*

"Same logic as that of program 4 but here we exit when user input n"

~Here, we create a continous while loop by 
    while(1){
        
    }
 as the condition of while is never false

~Inside while we need to ask the user input 
    while(1){
        taking input from user
    }

~if user input is n then program exit

        While taking user input we use scanset so that user will input only n and 0 to 9

~After these we just use a simple print statement to print the result.

*/