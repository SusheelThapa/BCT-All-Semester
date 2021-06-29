/*
Question:
    2+4+6+8+10+....................+ 2n

*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Varaible declaration*/
    int n;
    system("cls");/*CLear the screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);
    
    printf("\nSequence is: \n\n");/*Information */

    /*Simple for loop*/
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);

        /*Below if to print + but we donot want for at after last term so we break the loop when we have last term*/
        if (n == i)
        {
            break;
        }
        else
        {
            printf("+ ");
        }
    }

    getch();
    return 0;
}
/*
Logic of code:
    The series is a purely a even number series
    Problem lies in adding +
        ~We can add + in print statement like
            printf("%d + ",<value>);

            but this will print the + after last term so we user and if condition

        ~if last term is reached break the loop
         if not, printf("+");

*/