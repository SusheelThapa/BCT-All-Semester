/*WAP that takes an array of size n and eliminates the repeated members. Display the array of non-repeated members from the main function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable pointer and other declaration*/
    int *ptr_repeated, *ptr_unrepeated, *ptr_temp, status, size_repeated, size_unrepeated = 1; /*Size unrepeated is 1 so that we can initialize it to store a value*/

    system("cls"); /*Clear the screen*/

    /*Asking the size of array*/
    printf("Size of array: ");
    scanf("%d", &size_repeated);

    /*Dynamic memory allocation*/
    ptr_repeated = (int *)malloc(size_repeated * sizeof(int));
    ptr_unrepeated = (int *)malloc(size_unrepeated * sizeof(int));

    /*Taking input*/
    printf("Please, enter the value:\n");
    for (int i = 0; i < size_repeated; i++)
    {
        scanf("%d", (ptr_repeated + i));
    }

    /*Removing the repeated array*/
    "Need to write logic for this";
    for (int i = 0; i < size_repeated; i++)
    {
        status = 0; /*Represent the the element is not repeared*/

        /*Check whether the element is repeated or not if repeated set status to 1*/
        for (int j = 0; j < size_unrepeated; j++)
        {
            "Iterated over each value of ptr_unrepeated and check with value of ptr_repeated";

            if (*(ptr_repeated + i) == *(ptr_unrepeated + j))
            {
                status = 1;
                break;
            }
        }

        /*Add element if status is zero i.e not repeated or not*/
        if (status == 0)
        {
            *(ptr_unrepeated + size_unrepeated - 1) = *(ptr_repeated + i);

            size_unrepeated++; /*Increase as we need to store next unique variable*/

            ptr_unrepeated = realloc(ptr_unrepeated, size_unrepeated * sizeof(int)); /*Reallocation of memory*/
        }
    }

    /*Printing the array*/
    printf("\nOld Array:\n");
    for (int i = 0; i < size_repeated; i++)
    {
        printf("%d ", *(ptr_repeated + i));
    }

    printf("\nNew Array:\n");
    for (int i = 0; i < size_unrepeated - 1; i++) /*Size_unrepeated -1 is done as we have started from 1 in declaration but array start from 0 */
    {
        printf("%d ", *(ptr_unrepeated + i));
    }

    getch();
    return 0;
}