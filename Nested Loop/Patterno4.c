/*
Pattern:
        5
        5 4       
        5 4 3     
        5 4 3 2   
        5 4 3 2 1

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
        for (int j = 5; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    getch(); /*Waits till a key is pressed*/
    return 0;
}
/*
Double for loop:

    for (int i = 5; i > 0; i--)
    {
        for (int j = 5; j > 0; j--)
        {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }

    Result:

        (5,5) (5,4) (5,3) (5,2) (5,1) 
        (4,5) (4,4) (4,3) (4,2) (4,1) 
        (3,5) (3,4) (3,3) (3,2) (3,1) 
        (2,5) (2,4) (2,3) (2,2) (2,1) 
        (1,5) (1,4) (1,3) (1,2) (1,1) 

*/

/*
Since we want number in lower diagnol part. It can be acheive by two ways:

    ~Changing second for loop condition to j>=i
        for (int j = 5; j >= i; j--){
            //code
        }
    ~Keeping if condition i<=j to print value

        if (i<=j) {
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
To acheive the pattern given in question we print the value of j in each iterations:
    
    printf("%d ",j); replaces printf("(%d,%d) ", i, j);

    Result:
        5
        5 4       
        5 4 3     
        5 4 3 2   
        5 4 3 2 1

*/