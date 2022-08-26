#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int number, n;

    system("cls");

    printf("Number one: ");
    scanf("%d", &number);

    n = number;

    for (int i = 1; i < n; i++)
    {
        number = number - i;

        if (number <= -1)
        {
            printf("It isn't Traingular number");
            break;
        }
        else if (number == 0)
        {
            printf("It is Traingular number");
            break;
        }
    }

    getch();
    return 0;
}