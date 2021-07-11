/*
Concept of passing array to function
*/



/*Importing header files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


/*Function that accepts array */
void arrayPass(int pass[], int length)
{
    printf("<----------Array Pass-------------->\n"); /*Simple Print Statements*/

    /*Prints the value of array*/
    printf("Array value is ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n<----------Function End-------------->\n"); /*Simple Print Statements*/
}


int main()
{
    /*Array Declaration*/
    int dummy_array[5];

    system("cls"); /*Clear the screen*/

    printf("<----------Main-------------->\n"); /*Simple print statement*/

    /*Taking value of array from user*/
    for (int i = 0; i < 5; i++)
    {
        printf("Value of %d number: ", i + 1);
        scanf("%d", &dummy_array[i]);
    }

    /*Function Call*/
    arrayPass(dummy_array, 5);

    /*Simple Print Statement*/
    printf("<----------Back To Main-------------->\n");
    printf("Press any key to exit...");

    getch(); /*Waits Till a Key is Pressed*/
    return 0;
}