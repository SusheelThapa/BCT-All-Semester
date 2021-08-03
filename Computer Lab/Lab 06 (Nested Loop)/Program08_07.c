/* 
 * * * * *    
  * * * *     
   * * *      
    * *       
     *        
    
*/

/*Importing header files*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
Logic:
We use double loop 
    First loop iterate from n to 1
    Second loop iterate from 0 to number provided by first for loop

Problem lies in maintianing spaces:
     we use while loop: 
        We can observe fromabove series that on next iteration we need to maintian 1 soace more than previous space
          * * * * *    space = 0 =  n-n
           * * * *     space = 1 = n-(n-1)
            * * *      space = 2 = n-(n-2)
             * *       space = 3 = n-(n-3)
              *        space = 4 = n-(n-4)
        Spaces  = n-i
    This wil continue till spaces value is zero
        while(space!=0){
            prnitf(" ");
            space--
        }
        for space = 4 four space will be printed
    To maintained spaces between the * 
        * * * * *
        we use: 
        printf("* ") so a space is maintained between each element 

    For every second loop on termination we use 
     printf("\n");
     as every line is printed on exection of second loop
          * * * * *    first time second loop
           * * * *     second time second loop
            * * *      third time third loop
             * *       fourth time fourth loop
              *        fifth time fifth loop

*/

int main()
{
    /*Variable Declartions*/
    int n, space;

    system("cls");/*Clear the screen*/

    /*Taking user input*/
    printf("Value of n: ");
    scanf("%d", &n);

    printf("Sequence is : \n");
    /*Printing the sequence*/
    for (int i = n; i >= 0; i--)
    {
        space = n - i; /*Value of how many space*/
        while (space != 0) /*Loop to maintain spaces*/  
        {
            printf(" ");
            space--;
        }
        /*Second loop*/
        for (int j = 0; j < i; j++)
        {
            printf("* "); /*As said above to maintain space between element we use "%d "*/
        }
        /*Creates a newline afer termination of each second for loop*/
        printf("\n");
    }

    getch();/*Waits a key to be pressed*/
    return 0;
}
