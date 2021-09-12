//Write a program that illustrates passing the function address to other function directly and using pointer

#include <stdio.h>

int sum(int a, int b) { return a + b; }

int fun(int a, int b, int (*p)(int, int))
{
    int l = p(a, b);
    return l;
}
void main()
{
    int (*p)(int, int); //Fucntion Pointer
    int l;
    int n1, n2;

    p = sum;

    printf("Value of Number one and Number Two\n");
    scanf("%d%d", &n1, &n2);

    l = fun(n1, n2, p);

    printf("Sum of Two Number is %d ", l);
}
