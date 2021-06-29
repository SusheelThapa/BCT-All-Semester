/*
    N   
    E   E   
    P   P   P   
    A   A   A   A   
    L   L   L   L   L
    */

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls"); /*CLear the screen*/

    printf("Sequence is :\n"); /*Information*/

    /*Double loop*/
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <i; j++)
        {
            if (i == 1)
            {
                printf("N ");
            }
            else if (i == 2)
            {
                printf("E ");
            }
            else if (i == 3)
            {
                printf("P ");
            }
            else if (i == 4)
            {
                printf("A ");
            }
            else if (i == 5)
            {
                printf("L ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

/*
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", i); (printing the i)
        }
        printf("\n");
    }

        1 1 1 1 1    
        2 2 2 2 2    
        3 3 3 3 3    
        4 4 4 4 4    
        5 5 5 5 5    

*/
/*Compairing with question 
    1 = N
    2 = E
    3 = P
    4 = E
    5 = L
    so we put if statement

    if (i == 1)
    {
        printf("N ");
    }
    else if (i == 2)
    {
        printf("E ");
    }
    else if (i == 3)
    {
        printf("P ");
    }
    else if (i == 4)
    {
        printf("A ");
    }
    else if (i == 5)
    {
        printf("L ");
    }
    
    Result:
    N N N N N    
    E E E E E    
    P P P P P    
    A A A A A    
    L L L L L   
*/
/*On restrictng the loop of j 
    i.e j<i

    Result:
    N
    E E
    P P P        
    A A A A      
    L L L L L
*/