/*
WAP to find largest and smallest of an array using the concept of pointer and function
*/

#include <stdio.h>

void largest_smallest_Array(int *point, int length)
{
    "Finds largest and smallest value from array passed and prints ";

    "We accept the first element of array.";
    int large, small;

    small = *point;
    large = *point;

    for (int i = 0; i < length; i++)
    {
        if (small > *point)
        {
            small = *point;
        }
        if (large < *point)
        {
            large = *point;
        }

        point++; //Since array is continous it will now points to next element of array
    }
    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);
}
int main()
{
    int n, arr[n];

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest_smallest_Array(arr, n);

    return 0;
}