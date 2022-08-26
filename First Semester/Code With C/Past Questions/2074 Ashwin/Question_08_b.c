#include <stdio.h>

int main()
{
    FILE *out_odd, *out_even;

    out_odd = fopen("Odd.txt", "a");
    out_even = fopen("Even.txt", "a");

    int number;
    char choice[3];

    do
    {
        scanf("%d", &number);
        (number % 2 == 0) ? fprintf(out_even, "%d\n", number) : fprintf(out_odd, "%d\n", number);

        printf("Do you want to give more input(yes/no)?");
        scanf("%s", choice);

    } while (choice[0] != 'n' && choice[1] != 'o');
    return 0;
}