/*
Program to create a chess board
*/

/*Header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");/*Clear the screen*/

    printf("Chessboard:\n"); /*Information*/

    /*Simple for loop*/
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            /*Below if for check where the i+j is odd or even*/
            if ((i + j) % 2 == 0)
            {
                printf("\xdb"); /*print white space*/
            }
            else
            {
                printf(" "); /*Since terminal is black we use space*/
            }
        }
        printf("\n");/*Prints new line after one complete termiantion of second loop*/
    }

    getch(); /* Waits till a key is pressed*/
    return 0;
}
/*
Double for loop:
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            printf("(%d,%d)", i, j);
        }
        printf("\n");
    }

    Result:
        (1,1)(1,2)(1,3)(1,4)(1,5)(1,6)(1,7)(1,8)
        (2,1)(2,2)(2,3)(2,4)(2,5)(2,6)(2,7)(2,8)
        (3,1)(3,2)(3,3)(3,4)(3,5)(3,6)(3,7)(3,8)
        (4,1)(4,2)(4,3)(4,4)(4,5)(4,6)(4,7)(4,8)
        (5,1)(5,2)(5,3)(5,4)(5,5)(5,6)(5,7)(5,8)
        (6,1)(6,2)(6,3)(6,4)(6,5)(6,6)(6,7)(6,8)
        (7,1)(7,2)(7,3)(7,4)(7,5)(7,6)(7,7)(7,8)
        (8,1)(8,2)(8,3)(8,4)(8,5)(8,6)(8,7)(8,8)

*/
/*
if the value of i+j is even we put white space
if not value of i+j is odd we put black space
 
    Result:
        w b w b w b w b 
        b w b w b w b w 
        w b w b w b w b 
        b w b w b w b w 
        w b w b w b w b 
        b w b w b w b w 
        w b w b w b w b 
        b w b w b w b w 

*/
/*
To print the black space,
    we just use 
        printf(" ");

To print the white space,
    we just use
        printf("\xdb"); (\xdb create white space) 

            █ █ █ █
             █ █ █ █
            █ █ █ █
             █ █ █ █
            █ █ █ █
             █ █ █ █
            █ █ █ █
             █ █ █ █
    */