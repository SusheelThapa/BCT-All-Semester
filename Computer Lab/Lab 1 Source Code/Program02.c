/*Type the following program and run with different input.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int s, a, b, c = 20;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    s = a + b + c;
    printf("Sum is %d", s);

    getch();
    return 0;
}