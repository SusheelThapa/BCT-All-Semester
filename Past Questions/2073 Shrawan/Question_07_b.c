#include <stdio.h>

int main()
{
    int roll_number;
    char name[100];

    FILE *in_data;
    in_data = fopen("Question_07_b.txt", "a");

    // system("cls");

    for (int i = 0; i < 48; i++)
    {
        printf("Student %d:\n", i + 1);
        printf(" Name: ");
        fflush(stdin);
        gets(name);
        printf(" Roll number: ");
        scanf("%d", &roll_number);

        fprintf(in_data, "%s %d", name, roll_number);
    }
    fclose(in_data);

    return 0;
}