/*
WAP that finds the largest of two numbers using teh concept of pointer and function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void largestPointer(int *one, int *two, int *large)
{
    "Calculate two variable and store largest in large";

    if (*one > *two)
    {
        *large = *one;
    }
    else
    {
        *large = *two;
    }
}
int main()
{
    int one, two, largest;

    system("cls");

    printf("Number one: ");
    scanf("%d", &one);
    printf("Number two: ");
    scanf("%d", &two);

    largestPointer(&one, &two, &largest);

    printf("\nLargest is %d", largest);

    getch();
    return 0;
}