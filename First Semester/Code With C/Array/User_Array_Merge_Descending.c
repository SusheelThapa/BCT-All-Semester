/*Write a program in C to merge two arrays of same size sorted in descending order.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    /*Variable declaration*/
    int array_one[5], array_two[5], array_merge[10];

    system("cls"); /*Clear the screen*/

    /*Taking input*/
    printf("<<--------ArrayOne-------->>\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of element %d of array one: ", i + 1);
        scanf("%d", &array_one[i]);
    }
    printf("\n<<--------ArrayTwo-------->>\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of element %d of array two: ", i + 1);
        scanf("%d", &array_two[i]);
    }

    /*Merging array*/
    for (int i = 0; i < 10; i++)
    {
        (i < 5) ? (array_merge[i] = array_one[i]) : (array_merge[i] = array_two[i - 5]);
    }

    /*Sorting Descending order*/
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array_merge[i] > array_merge[j])
            {
                int temp = array_merge[i];
                array_merge[i] = array_merge[j];
                array_merge[j] = temp;
            }
        }
    }

    /*Printing array*/
    printf("\n<<--------Result-------->>\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array_merge[i]);
    }

    getch();
    return 0;
}