#include <stdio.h>

void main()
{
    int string[3][3], minimum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d row and %d column: ", i + 1, j + 1);
            scanf("%d", &string[i][j]);
            (i == 0 && j == 0) ? (minimum = string[i][j]) : (1);
            (string[i][j] < minimum) ? (minimum = string[i][j]) : (1);
        }
    }

    string[0][0] = minimum;
    string[1][1] = minimum;
    string[2][2] = minimum;
    string[0][2] = minimum;
    string[2][0] = minimum;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(string + i) + j));
        }
        printf("\n");
    }
}