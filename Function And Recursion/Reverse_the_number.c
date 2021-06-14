/*
    Program to reverse the user input number
*/

/*Importing the header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
    Logic of the code:
        We have, 
            number = 1234 and the output should be 4321
        We proceed by finding the remainder,
        remainder = number % 10 = 1234  %  10 = 4 (% is mod which give the remainder)
        number = number / 10 = 1224/10 = 123 (since it is int/int so integer part is only taken. This number is used in next iteration.)
        reverse = reverse * 10 + remainder = 4 (Since in second iteration we will get 3 as remainder so to make 43 we use reverse *10 +remainder =  4 * 10 + 3 )

        Packing this logic in a while loop and running till number is not equal to 0 (number != 0)
            while(number != 0){
            remainder = number % 10number = number / 10
            reverse = reverse * 10 + remainder
            }
        Example with number = 678;
        Iterations        remainder      number        reverse
             1              8              67          8
             2              7              6           87
             3              6              0           876

             Reverse number = 876
*/


/*Explained Above*/
int reverse(int number)
{
    int reverse, remainder;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    return reverse;
}

int main()
{
    /*Declaration of the variable*/
    int number, reversed, remainder;

    system("cls"); /*Clear the contents of terminal*/

    /*Taking the user input*/
    printf("Enter the number:");
    scanf("%d", &number);

    reversed = reverse(number); /*Calling the function and storing the value in reversed*/

    system("cls");

    /*Printing the value*/
    printf("Orginal Number: %d\n", number);
    printf("Reversed Number: %d", reversed);

    getch();
    return 0;
}