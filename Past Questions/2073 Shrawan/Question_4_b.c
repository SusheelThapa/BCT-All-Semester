#include <stdio.h>

void main()
{
    int range_one, range_two;

    printf("Range one:");
    scanf("%d", &range_one);
    printf("Range two:");
    scanf("%d", &range_two);

    for (; range_one <= range_two; range_one++)
    {
        printf("Range: %d -----> %c\n", range_one, range_one);
    }
}