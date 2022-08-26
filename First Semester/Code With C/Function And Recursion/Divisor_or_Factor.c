/*
    Program to find the factors/divisors of the user input number
*/


/*Including Header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*
    Logic of code:
    Factors of the number are those number which exactly divides the number leave 0 reaminder.
    Here, 
    -->We just divide the number from 1 to n(user_input_number) and store the remainder
    --> Check remainder is equals to 0 
        True: It is divisor/factor. And we just print it 
        False: It is not the divisior. We iterate over next number.

    We keep all the logic in a function divisor_or_factor
*/


/*Function to calculate the divisor or factor of number*/
void divisor(int number)
{
    /*Prints the factor/divisor in a good order*/
    printf("Factors/Divisors: ");

    for (int i = 1; i < number; i++)
    {
        if ((number % i) == 0)
        {
            printf("%d, ", i);
        }
    }
    /*Above loop doesn't contain the user input number so keeping it at last using printf statement*/
    printf("%d\n", number);
}


int main()
{
    /*Variable Declaration*/
    int number;

    // system("cls"); /*Clear the terminal screen*/

    /*Taking the user input*/
    printf("Enter the postive integers whose factor you want to know: ");
    scanf("%d", &number);

    // system("cls"); /*CLear the terminal*/

    /*Main Code*/
    printf("Number : %d\n\n", number); /*Prints the user input number*/

    divisor(number); /*Calling the function with value number*/

    getch();/*Waits till a key is pressed*/
    return 0;
}