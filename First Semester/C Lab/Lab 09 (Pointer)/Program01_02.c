/*
Run the following program and see the output
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *p, *q; /*Declaration of pointer variable*/
    int a, b;   /*Declaration of variables*/
    p = &a;     /*Using refrencing operator to initialize pointer variable*/
    q = &b;

    system("cls");

    printf("Address of a= %u\n", &a);
    printf("Address of b= %u\n", &b);

    printf("Value of p= %u\n", p);
    printf("Value of q= %u\n", q);

    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);

    printf("The value pointed by p is %d.\n", *p); /*USing derefrencing operator*(*)*/
    printf("The value pointed by q is %d.\n", *q);

    printf("a + b = %d\n", a + b);
    printf("*p + *q = %d\n", *p + *q);/* ----> Pointer expression*/

    getch();
    return 0;
}