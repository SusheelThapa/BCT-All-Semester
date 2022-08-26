/*
Pattern:
        # # # # * 
        # # # * * 
        # # * * * 
        # * * * * 
        * * * * *
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    system("cls");/*Clear the screen*/

    /*Explained below*/
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i+j<4){
            printf("# ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

/*
Double for loop :
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("(%d %d)", i, j);
        }
        printf("\n");
    }

    Result:

        (0 0)(0 1)(0 2)(0 3)(0 4)
        (1 0)(1 1)(1 2)(1 3)(1 4)
        (2 0)(2 1)(2 2)(2 3)(2 4)
        (3 0)(3 1)(3 2)(3 3)(3 4)
        (4 0)(4 1)(4 2)(4 3)(4 4)
*/
/*
We can in the position where i+j<4 there is '#' and other '*':

    if(i+j<4){
        printf("# ");
    }
    else{
        printf("* ");
    }

    Result:

        # # # # * 
        # # # * * 
        # # * * * 
        # * * * * 
        * * * * * 
*/
