void main()
{
    int i, j, num[2][2] = {{4, 5}, {6, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", num[i][j]);
        }
    }

    getch();
}