#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int HCF = 1;
    int number_one, number_two;
    int i;

    system("cls");

    printf("Number One: ");
    scanf("%d", &number_one);
    printf("Number Two: ");
    scanf("%d", &number_two);

    for ((number_one > number_two) ? (i = number_two) : (i = number_one); i > 1; i--)
    {
        if (number_one % i == 0 && number_two % i == 0)
        {
            HCF = i;
            break;
        }
    }
    printf("HCf is %d", HCF);
    
    getch();
    return 0;
}