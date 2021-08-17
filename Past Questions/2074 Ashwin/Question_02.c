#include <stdio.h>

#define MAX 5

int main()
{
    int Case[MAX] = {2, 3, 5, 4, 10}, i, sum = 0;
    float average;

    for (int i = 0; i < 5; i++)
    {
        printf("CASE %d = %3d\n", i, Case[i]);
        sum += Case[i];
    }
    average = (float)sum / MAX;
    printf("%06.2f", average);
    return 1;
}