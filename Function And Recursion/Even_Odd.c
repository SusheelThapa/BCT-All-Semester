/*
Write  a program  to print even or odd in given range using recursion
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>


/*
Logic:
For printing odd number:
    we print number between n to 1 is reverse pattern so our terminating condition is value of n must be less than 1

        if (n<1){} // Terminating condition 
        else
        {
            //Other code that print the odd number
        }
    We can also write :

        if (n>=1){
            //Code that print the odd number
        }

    `if number is odd: --> if (n%2 ==1)
        Since n is odd so  next number will be n-2 so

            print n
            function call with value n-2
    `if number is even:--> if (n%2==0)
        Since n is even so we print n-1 and call next even number n-2

            print n-1
            function call with value n-2
    

Same logic goes for printing even number.

*/

/*Function to print the odd number*/
void oddNumber(int n)
{
    if (n >= 1)
    {
        if (n % 2 == 1)
        {
            printf("%d ", n);
            oddNumber(n - 2);
        }
        if (n % 2 == 0)
        {
            printf("%d ", (n - 1));
            oddNumber(n - 2);
        }
    }
}

/*Function to print the even number*/
void evenNumber(int n)
{
    if (n >= 2)
    {
        if (n % 2 == 0)
        {
            printf("%d ", n);
            evenNumber(n - 2);
        }
        if (n % 2 == 1)
        {
            printf("%d ", n - 1);
            evenNumber(n - 2);
        }
    }
}


int main()
{
    /*Variable declaration*/
    int n;

    system("cls");/*Clear the terminal*/

    /*Taking input from user*/
    printf("Input the range to print stating from 1 to n: ");
    scanf("%d", &n);

    /*Calling an printing meaningful information*/
    printf("\nAll odd numbers from 1 to %d are: ", n);
    oddNumber(n);
    printf("\nAll even numbers from 1 to %d are: ", n);
    evenNumber(n);

    getch();/*Waits till a key is pressed*/
    return 0;
}