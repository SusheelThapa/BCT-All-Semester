/*
Pattern: 
    *
    * *       
    * * *     
    * * * *   
    * * * * * 
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");/*Clear the screen*/

    /*Double for loop explained below:*/
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n"); /*Prints a new line after completion of second for loop*/
    }

    getch();/*Waits till a key is pressed*/
    return 0;
}
/*
Double for loop:

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            printf("(%d,%d) ");
        }
        printf("\n");
    }

    Result: 

    (1,1) (1,2) (1,3) (1,4) (1,5) 
    (2,1) (2,2) (2,3) (2,4) (2,5) 
    (3,1) (3,2) (3,3) (3,4) (3,5) 
    (4,1) (4,2) (4,3) (4,4) (4,5) 
    (5,1) (5,2) (5,3) (5,4) (5,5) 

*/

/*Since we want number in lower diagnol part. It can be acheive by two ways:
    ~Changing second for loop contion to j<=i
        for(int j =1;j<=i;j++){
            //code
        }
    ~Keeping if condition i>=2 to print value

        if (i>=j) {
            //print
        }

    Result:
        (1,1)
        (2,1) (2,2)
        (3,1) (3,2) (3,3)
        (4,1) (4,2) (4,3) (4,4)       
        (5,1) (5,2) (5,3) (5,4) (5,5)
*/
/*
Instead of printing value of i and j we need to print * so,

    printf("* ");  in place of printf("(%d,%d) ");

*/