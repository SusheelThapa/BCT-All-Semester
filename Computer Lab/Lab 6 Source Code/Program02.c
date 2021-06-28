/*Write a program to display the chessboard pattern.*/

/*Importing Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls"); /*Clear the screen*/

    printf("\t\tChessBoard\n\n"); /*An information while printing*/

    /*Double Loop explained below:*/
    for (int i = 0; i < 9; i++)
    {
        printf("\t\t"); /*Just make a space so that chessboard comes in middle*/
        for (int j = 0; j < 9; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("\xdb"); /*Prints white*/
            }
            else
            {
                printf(" "); /*Prints black*/
            }
        }
        printf("\n");
    }

    getch(); /*Waits till a character is pressed*/
    return 0;
}
/*
Double loop:
for (int i = 0; i < 9; i++)
{
    for (int j = 0; j < 9; j++)
    {
        printf("(%d,%d) ",i,j);
    }
    printf("\n");
}

(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) 
(1,0) (1,1) (1,2) (1,3) (1,4) (1,5) (1,6) (1,7) (1,8) 
(2,0) (2,1) (2,2) (2,3) (2,4) (2,5) (2,6) (2,7) (2,8) 
(3,0) (3,1) (3,2) (3,3) (3,4) (3,5) (3,6) (3,7) (3,8) 
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6) (4,7) (4,8) 
(5,0) (5,1) (5,2) (5,3) (5,4) (5,5) (5,6) (5,7) (5,8) 
(6,0) (6,1) (6,2) (6,3) (6,4) (6,5) (6,6) (6,7) (6,8) 
(7,0) (7,1) (7,2) (7,3) (7,4) (7,5) (7,6) (7,7) (7,8) 
(8,0) (8,1) (8,2) (8,3) (8,4) (8,5) (8,6) (8,7) (8,8) 
*/

/*
In chess board white and black are in alternate order so
    Taking i+j%2 ==0 as white
    Taking i+j%2 ==1 as black

Inside second for loop:
    if((i+j)%2==0){
        printf("w ");
    }
    else{
        printf("b ");
    }

w b w b w b w b w
b w b w b w b w b
w b w b w b w b w
b w b w b w b w b
w b w b w b w b w
b w b w b w b w b
w b w b w b w b w 
b w b w b w b w b 
w b w b w b w b w 

*/

/*
We use \xdb for white space so changing "w" to"\xdb" abd we leave space to print blaak so "b" to "  "
        if((i+j)%2==0){
            printf("\xdb");
        }
        else{
            printf(" ");
        }

            █ █ █ █ █
             █ █ █ █
            █ █ █ █ █
             █ █ █ █ 
            █ █ █ █ █
             █ █ █ █ 
            █ █ █ █ █
             █ █ █ █ 
            █ █ █ █ █

*/
