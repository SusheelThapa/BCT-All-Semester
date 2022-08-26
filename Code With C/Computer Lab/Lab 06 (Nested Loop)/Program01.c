/*Program to print a multiplication table of MXN. Read the values of M and N from the user.*/

/*Import Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
Logic of Code: 
Here we just use a single for loop and iterate over n times(user given input)
And we just print the value of multiplication table of x(user given) upto n(user given)

    for(int i =1;i<=n;i++)
    {
        printf("%d  *   %d  =   %d",x,i,x*i);
    }
*/

int main()
{
    /*Variable Declaration*/
    int m, n;

    system("cls"); /*Clears the screen*/

    /*Taking input from user*/
    printf("Multiplication Table of : ");
    scanf("%d", &m);
    printf("Upto : ");
    scanf("%d", &n);

    /*Printing the result*/
    printf("Multiplication Table of %d from 1 to %d is : \n", m, n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d  *   %d  =   %d\n", m, i, m * i); /*Prints the value in well formated way*/
    }

    getch(); /*Waits till a key is pressed*/
    return 0;
}
