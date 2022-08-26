/*
                    1
              1     2     1
        1     2     3     2     1
  1     2     3     4     3     2     1
*/

/*Declaration ofHeader files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{

    system("cls"); /*Clear the screen*/

    /*Double for loop explained below*/
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i + j >= 4 && j - i != 3 && j - i != 4 && j - i != 5)
            {
                if (j == 3)
                {
                    printf("  %d   ", i);
                }
                else if (j == 2 || j==4)
                {
                    printf("  %d   ", i - 1);
                }
                else if (j == 1 || j ==5)
                {
                    printf("  %d   ", i - 2);
                }
                else
                {
                    printf("  %d   ", i - 3);
                }
            }
            else
            {
                printf("      ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

/*
Double for loop:

for (int i = 1; i <= 4; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("(%d,%d) ", i, j);
    }
    printf("\n");
}

Result:
(1,0) (1,1) (1,2) (1,3) (1,4) (1,5) (1,6) 
(2,0) (2,1) (2,2) (2,3) (2,4) (2,5) (2,6) 
(3,0) (3,1) (3,2) (3,3) (3,4) (3,5) (3,6) 
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6)

*/
/*Use if condition to obtain:
if (i + j >= 4 && j - i != 3 && j - i != 4 && j - i != 5)
{
    printf("(%d,%d) ", i, j);
}
else
{
    printf("      ");
}

                  (1,3)
            (2,2) (2,3) (2,4)
      (3,1) (3,2) (3,3) (3,4) (3,5)       
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6) 
*/
/*
Just use some if condition to obtain the series:

                    1
              1     2     1
        1     2     3     2     1
  1     2     3     4     3     2     1

*/