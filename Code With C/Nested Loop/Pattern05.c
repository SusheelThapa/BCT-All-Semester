/*
Pattern:
            5 
          4 5
        3 4 5
      2 3 4 5
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
    for (int i = 5; i > 0; i--)
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
        printf("\n"); /*Make anew line after each termination of second loop*/
    }

    getch(); /*Waits till a key is pressed*/
    return 0;
}
/*
Double for loop:

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("(%d,%d) ",i,j);
        }
        printf("\n"); 
    }
    Result:

        (5,1) (5,2) (5,3) (5,4) (5,5) 
        (4,1) (4,2) (4,3) (4,4) (4,5) 
        (3,1) (3,2) (3,3) (3,4) (3,5) 
        (2,1) (2,2) (2,3) (2,4) (2,5) 
        (1,1) (1,2) (1,3) (1,4) (1,5) 
*/

/*
We need lower diagnol right part number so we can use
    
    if (j >= i)
    {
        printf("(%d,%d) ", i, j);
    }
    else{
        printf("      ");
    }

    Since their is space to maintain that we have kept else that print the same number of space as there was number so that the space it maintain

    See result without using else and with using else

    Result:
                            (5,5) 
                      (4,4) (4,5)
                (3,3) (3,4) (3,5)
          (2,2) (2,3) (2,4) (2,5)
    (1,1) (1,2) (1,3) (1,4) (1,5)   
*/

/*
To obtained above result we replace print statement inside if else to :

    if (j >= i)
    {
        printf("%d ", j);
    }
    else{
        printf("  ");
    }

    Result:

            5 
          4 5
        3 4 5
      2 3 4 5
    1 2 3 4 5

    */
