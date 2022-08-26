/*1-x^2/2+x^4/4!.............(-1)^i*x^(2i)/(2i)!      i =0,1,2,3.....*/


/*
Logic of the code:
 We just use this
    (-1)^i*x^(2i)/(2i)!
as our tn term result and do according

To print the + or  - on sequence we use if statement

    if power of -1 to i is -1
        print +
    else 
        print - 

    But this will print +or - after last term also we use
    if number of terms = laste term
        break // to break the loop

For factorial i have tgamma funtion from math.h
    Syntax:
    tgamma(value) = (value-1)!
    tgamme(4) = 3!

*/


/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    /*Variable declaration*/
    int x, n;

    system("cls");/*Clear the screen*/

    /*Taking the input from the user*/
    printf("Value of x: ");
    scanf("%d", &x);
    printf("Value of n: ");
    scanf("%d", &n);

    /*Just print the sequence till provided n term*/
    printf("\nSequence is :\n\n");

    for (int j = 0; j < n; j++)
    {
        if (j == 0)
        {
            printf("1 ");
        }
        else
        {
            printf("x^%d/(%d)! ", 2 * j, 2 * j);
        }

        /*For putting + or - after each term*/
        if (n == j + 1) /*This if to check whether the term is last or not*/
        {
            break;
        }
        else{
        if (pow(-1, j) > 0)
        {
            printf(" - ");
        }
        else
        {
            printf(" + ");
        }
        }
    }

    /*Print the respective term by calculation after putting value of x*/
    printf("\n\nRespective Value :\n");

    for (int k = 0; k < n; k++)
    {
        /*Below only for first term*/
        if (k == 0)
        {
            printf("1 ");
        }
        else
        {
            printf("%.8f ", pow(x, 2 * k) / tgamma(2 * k + 1));
        }

        /*For the + or - after each term*/

        if (n == k + 1) /*Check whether the term is last or not if last it just break the loop so tha no + ot - appear*/
        {
            break;
        }
        else
        {
            if (pow(-1, k) > 0)
            {
                printf(" - ");
            }
            else
            {
                printf(" + ");
            }
        }
    }

    getch();/*Wait till a key is pressed to exit*/
    return 0;
}