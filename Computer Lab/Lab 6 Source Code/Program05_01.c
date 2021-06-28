/* 
Question:
    1,2,3,4,5,6...................n
    
*/


/*Importing Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
    /*Varaible Declaration*/
    int n;

    system("cls"); /*Clear the terminal Screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("\nNumber for 1 to n is listed below: \n\n", n); //Information

    /*Simple for loop to print form 1 to n*/
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    getch(); //Waits till a character is pressed*/
    return 0;
}
/*
Logic of code:

    We just use simple for loop from 1 to n and print all the value from 1 to n.

*/