#include <stdio.h>

void main()
{
    int mat[100][100], size, diagnol_one = 0, diagnol_two = 0;

    printf("Enter the size of matrix?\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the value of %d row and %d column:\n ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);

            if (i == j)
            {
                diagnol_one += mat[i][j];
            }
            if (i + j == size - 1)
            {
                diagnol_two += mat[i][j];
            }
        }
    }

    printf("Sum of diagnol one is %d\n", diagnol_one);
    printf("Sum of diagnol two is %d\n", diagnol_two);
}