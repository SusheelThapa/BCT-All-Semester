/*
1
1   2
1   2   3
1   2   3   4   
1   2   3   4   5
*/

/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int n;

    system("cls");/*Clear the screen*/

    /*Taking input from user*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Sequence is :\n\n");/*Information*/

    /*Double loop*/
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d  ", j);  
        }
        printf("\n");
    }
    getch();
    return 0;
}
/*
Double loop
    n =7
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d  ", j);  
        }
        printf("\n");
    }

    Result:

            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7  
            1  2  3  4  5  6  7 
*/

/*
We just need 1 in first line and 2 number is second and so on
    if we limit j<=i then we can achieve that

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d  ", j);  
            }
            printf("\n");
        }
                1
                1  2
                1  2  3
                1  2  3  4
                1  2  3  4  5        
                1  2  3  4  5  6     
                1  2  3  4  5  6  7
    
if we take value of n from user we can do this for any number
    scanf("%d",&n);
*/