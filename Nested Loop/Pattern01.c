/*
Pattern:
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 

*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls"); /*Clear the screen*/

    /*Double for loop explained below*/
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n"); /*Make anew line after each termination of second loop*/
    }

    getch(); /*Waits till a key is pressed*/
    return 0;
}
/*
Double for loop:

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("(%d,%d) ", i, j);
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

/*
To acheive the pattern given we print j,

    printf("%d ",j); inplace of printf("(%d,%d) ",i,j);

    Result:

        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
        1 2 3 4 5 
*/