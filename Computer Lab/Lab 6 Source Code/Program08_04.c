/*
A
A   B
A   b   C
A   B   C   D
A   b   C   d   E
*/

/*Logic Of Code:

Coordinate value of double for loop (i,j) as in question upto alphabet E = 5 iterations.
0,0
1,0   1,1
2,0   2,1   2,2
3,0   3,1   3,2   3,3
4,0   4,1   4,2   4,3   4,4 

 We can see that at (2,1), (4,1) and (4,3 )we have small alphabet 
    i.e i mod 2 =0 and j mod 2 not equal to zero
We use above result to know where capital should be placed an where small is

Moreover,
For capital Alphabet
We know ascii value of A is 65
0,0 = A = 65+0
1,0 = B = 65+1
2,0 = C = 65+2
3,0 = D = 65+3
4,0 = E = 65+4
i,j = 65+i

For small ASCII Difference is 32
2,1 = b = 65+2+32 = b
4,1 = b = 65+4+32 = d
4,3 = b = 65+4+32 = d


*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls"); /*CLear the screen*/

    /*Double for loop*/
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                printf("%c ", 65 + j + 32);
            }
            else
            {
                printf("%c ", 65 + j);
            }
        }
        printf("\n");
    }

    getch(); /*Waits till a key is pressed*/
    return 0;
}