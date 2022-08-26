#include <stdio.h>

void main()
{
    int matA[5][5], small, large;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
            (i == 0 && j == 0) ? (small = large = matA[i][j]) : (small = small);
            if (small > matA[i][j])
                small = matA[i][j];
            if (large < matA[i][j])
                large = matA[i][j];
        }
    }
    printf("Smallest: %d\n", small);
    printf("Largeest: %d", large);
}