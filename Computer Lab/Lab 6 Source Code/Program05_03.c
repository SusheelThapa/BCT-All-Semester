/*
Question:
    1,2,5,10,17,26.......

*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int n, term = 1;

    system("cls");/*CLear the system*/

    /*Taking user input*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Sequence is \n\n");/*GIves information*/

    for (int i = 0; i < n; i++)
    {
        printf("%d ", term); /* Just prints statement to print the series*/
        term = term + (2 * i + 1);  /*Condition for nest term*/
    }

    getch();/*Waits for a key to be pressed*/
    return 0;
}
/*
Logic of code:
    1,2,5,10,17,26.......

    1   =    1
    2   =    1 + 2*0+1
    5   =    2 + 2*1+1
    10  =    5 + 2*2+1
    17  =   10 + 2*3+1
    last term = previous tern + 2 *i + 1  --> where i is for loop i
        for (int i =0;i<n;i++)
        {
            print term 
            term(new value) = term(prevoius value) + 2*i+1
        }

    OR

    Just find formula of the series
        t(n) = a + (n-1)*d
*/