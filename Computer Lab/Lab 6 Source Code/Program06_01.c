/*2+4+6+8+10+....................+ 2n*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("cls");
    printf("Value of n: ");
    scanf("%d", &n);
    
    printf("\nSequence is: \n\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i);
        if (n == i)
        {
            break;
        }
        else
        {
            printf("+ ");
        }
    }
    getch();
    return 0;
}