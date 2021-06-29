/*
Question:
    1-1/1!+1/2!-1/3!......................(-1)^n/(n-1)!, n =0,1,2,3......
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Variable Declaration*/
    int n;

    system("cls"); /*Clear the screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("\n\nSequence is :\n"); /*Information*/

    /*For loop to print the sequence without calculation*/
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1 ");
        }
        else
        {
            printf("1/(%d)! ", (i - 1));
        }
        if (n == i + 1)
        {
            break;
        }
        else
        {
            if (i % 2 != 0)
            {
                printf(" + ");
            }
            else
            {
                printf(" - ");
            }
        }
    }

    printf("\n\nRespective Value :\n"); /* Information*/

    /*For loop that print the value of eaach term*/
    for (int i = 0; i < n; i++)
    {

        printf("%f ", ((float)1 / tgamma(i+1))); /*Print the value

        /*If condition to print + or - after the number and to break loop is number is last term*/
        if (n == i+1)
        {
            break;
        }
        else
        {
            if (i%2!= 0)
            {
                printf(" + ");
            }
            else
            {
                printf(" - ");
            }
        }
    }
    getch();
    return 0;
}
/*
First for loop is not necessary, for fun I have done it.

Here is explanation of second loop,
    As seen in sequence we have 
        t(n) = 1/(n+1)!

    So we iterate for loop from 0 to n(user will provide)
        for(int i = 0;i<n;i++){
            //code
        }

    We use tgamma to find factorial
        tgamma(n) = (n-1)!
        i.e, tgamma(i+1) = 0! for first value of i 
            And 
            Similary other goes

        So,
            printf("%f",1/tgamma(i+1)); inside place of //code
        
    Since the sign is alternating for even value of i it is - and odd value of i we have +
    So,
        if i is even print '-'
        if not print '+'

        Note: the + and - is printed after the first term is written
            1 +(odd)    2   +(even) 3   +(odd)  4   ..........

    But this will print a sign after last term so we put a condition

        if  last term then break the loop
        if not print'+' for even and '-' for odd value of i.

*/