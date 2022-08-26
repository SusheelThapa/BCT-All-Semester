#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    "To declare the pointer we use *";
    int *p, *q, a, b;

    system("cls");

    "Data type of pointer and variable must be same";
    p = &a;
    q = &b;

    "To show that value stored in the pointer is the address of next variable";
    printf("Address of a= %u\n", &a);
    printf("Value of of p= %u\n", p);
    printf("Address of b= %u\n", &b);
    printf("Value of of q= %u\n\n", q);

    "Derefrencing the pointer";
    printf("Enter the value of a and b?\n");
    scanf("%d%d", &a, &b);
    /* * is use to get the value stored in the address store by pointer*/
    printf("Value pointed by p is %d\n", *p);
    printf("Value pointed by q is %d\n\n", *q);

    /*Pointer Artthimetic--> Pointer must be of same types */
    printf("Sum of *p and *q is %d\n", *p + *q);
    printf("Difference of *p and *q is %d\n", *p - *q);
    printf("Multiplication of *p and *q is %d\n", *p * *q);
    printf("Division of *p and *q is %.2f\n", (float)*p / *q);
    printf("Remainder when *p is divided by *q is %.2f\n\n", *p % *q);
    printf("Increment Operator");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of *p = %d\n", *p);
        *p++;
    }

    //One changing the value of *p = 5,it wonot change the value of whose address it store previously but now it store the address of given value
    *p = 5;
    printf("Value of a: %d\n", a);
    printf("Value of p: %d\n", *p);
    printf("Address of p: %d\n", p); //This address will be different from the address of a

    getch();
    return 0;
}
