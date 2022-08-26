/*
      4 
    3 4 
  2 3 4 
1 2 3 4 
  2 3 4 
    3 4 
      4 

*/

/*Importing Header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    system("cls"); /*Clear the screen*/

    /*Explained below:*/
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i + j >= 4 && i - j != 3 && i - j != 4 && i - j != 5)
            {
                printf("%d ", j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
/*
Double for loop:
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("(%d,%d)", i, j);
        }
        printf("\n");
    }

    Result:
        (0,1) (0,2) (0,3) (0,4) 
        (1,1) (1,2) (1,3) (1,4) 
        (2,1) (2,2) (2,3) (2,4) 
        (3,1) (3,2) (3,3) (3,4) 
        (4,1) (4,2) (4,3) (4,4) 
        (5,1) (5,2) (5,3) (5,4) 
        (6,1) (6,2) (6,3) (6,4) 
        
*/
/*Filter above to obtain below:
    if (i + j >= 4 && i - j != 3 && i - j != 4 && i - j != 5)
    {
        printf("(%d,%d) ", i, j);
        }
    else{
        printf("      ");
    }

    Result:
                  (0,4) 
            (1,3) (1,4) 
      (2,2) (2,3) (2,4) 
(3,1) (3,2) (3,3) (3,4) 
      (4,2) (4,3) (4,4) 
            (5,3) (5,4) 
                  (6,4) 
*/
/*
Just apply condtition to get the result:
BEST OF LUCK

      4 
    3 4 
  2 3 4 
1 2 3 4 
  2 3 4 
    3 4 
      4 
*/