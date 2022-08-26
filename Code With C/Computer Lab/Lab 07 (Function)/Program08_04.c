/*Sum from 1 to n*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Fucntion declaration*/
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}


int main()
{
    /*Varaible declaration*/
    int n;

    system("cls");/*Clear the screen*/

    /*Taking user input*/
    printf("Value of n: ");
    scanf("%d", &n);

    /*Meaningful output*/
    printf("\nSum from 1 to %d is %d.", n, sum(n));
    
    getch();
    return 0;
}