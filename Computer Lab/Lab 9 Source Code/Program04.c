/*
This program asks the required size of array to the user and displays the address of allocated blocks
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *address; /*pointer variable declaration*/

    system("cls");

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    address = (float *)calloc(n, sizeof(float)); /*Using calloc function to allocate the memory for n number of float number.*/

    if (address == NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0); /*to exit the program if contents of address is NULL.*/
    }

    for (i = 0; i < n; i++)
    {
        printf("Address of %d block is %d.\n", i, (address + i));
    }

    free(address); /*To deallocate memory*/

    getch();
    return 0;
}