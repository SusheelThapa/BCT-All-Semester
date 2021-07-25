
#include <stdio.h>

void largest(int *a, int *b, int *large)
{
    large = (*a > *b) ? a : b;
}

int main()
{
    int a, b, *large;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    largest(&a, &b, large);
    printf("The largest number is: %d", *large);
    return 0;
}