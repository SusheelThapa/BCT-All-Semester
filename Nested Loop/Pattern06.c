/*
Pattern:
    1 2 3 4 5 
      2 3 4 5 
        3 4 5 
          4 5 
            5 
*/


/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    system("cls");/*Clear the screen*/

    /*Double for loop explained below*/
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n"); /*Prints new line after termination of each second loop*/
    }

    getch();/*Waits till a key is pressed*/
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
    We need upper right diagnol so we use if condition:

        if (j >= i)
        {
            printf("(%d,%d) ", i, j);
        }
        else
        {
            printf("      ");
        }

    We use else here because we need to replace number by space so that the space is maintained and the pattern

    You can try without else and with else to see difference
    
    Result:

        (1,1) (1,2) (1,3) (1,4) (1,5) 
              (2,2) (2,3) (2,4) (2,5) 
                    (3,3) (3,4) (3,5) 
                          (4,4) (4,5) 
                                (5,5)    
*/

/*To print the above patter we just update print in if...else condition

        if (j >= i)
        {
            printf("%d ", j);
        }
        else
        {
            printf("  ");
        }

    Note: Spaces in the else print must be equal to space that if print takes to print number

    You may try with different space to see the changes

    Result:

    1 2 3 4 5 
      2 3 4 5 
        3 4 5 
          4 5 
            5 


*/