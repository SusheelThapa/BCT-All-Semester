/*
This program asks the required size of array to the user and displays the address of allocated blocks
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int n, i;
    float *address; /*pointer variable declaration*/

    system("cls");

    /*Asking the size of array*/
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    /*Creating a array with DMA*/
    address = (float *)calloc(n, sizeof(float)); /*Using calloc function to allocate the memory for n number of float number.*/

    /*Checking if memory is allocated or not*/
    if (address == NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0); /*to exit the program if contents of address is NULL.*/
    }

    /*Printing the address of allocated blocks*/
    for (i = 0; i < n; i++)
    {
        printf("Address of %d block is %d.\n", i, (address + i));
    }

    free(address); /*To deallocate memory*/

    getch();
    return 0;
}