/*
Write a program to display following pattern:
        1
        1 2       
        1 2 3     
        1 2 3 4   
        1 2 3 4 5
*/

/*Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Varaible Declaration*/
    int n;
    system("cls"); /*CLear the screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);

    /*Double for loop*/
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /*Condition to print the pattern*/
            if (i >= j)
            {
                printf("%d ", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();/*Wait till a character is pressed*/
    return 0;
}
/*
Double for loop

(1,1) (1,2) (1,3) (1,4) (1,5) 
(2,1) (2,2) (2,3) (2,4) (2,5) 
(3,1) (3,2) (3,3) (3,4) (3,5) 
(4,1) (4,2) (4,3) (4,4) (4,5) 
(5,1) (5,2) (5,3) (5,4) (5,5) 

*/
/*
Use a simple if statement to obtaint th result

    if i>=j we print j 
    if not print " "

        1
        1 2       
        1 2 3     
        1 2 3 4   
        1 2 3 4 5
*/
