#include <stdio.h>

int main()
{
    int *ptr = NULL;

    printf("The address of ptr(null pointer) is %d.\n", ptr);
    "As most of the complier set the address of NULL pointer to 0";

    printf("Value of NULL pointer is %d \n", *ptr);
    "As NULL pointer cannot be dereference so complier get confused and crash the program lines below this wonot run";

    /*These lines wonot run*/
    printf("Program is not crasheed\n");

    "We can handle that error using if statement";
    if (ptr == NULL)
    {
        /*Code to be executed*/
    }
    else
    {
        /*Code to be excuted*/
    }

    return 0;
}