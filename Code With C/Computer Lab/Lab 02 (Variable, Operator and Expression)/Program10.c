/*Write a program to evaluate the following expression*/
/*
    S =x^5 + 0.2*x*y + y^7
    L = (a+b)^((2x+y)/(p-q))+c-100
    r = A/B [Where A and B are integers]
    R = ((u/x+v/y)^5)/((((p^2)/(3u^2.5))-(q/2v))^3.5)
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, a, b, p, q, c, A, B, u, v;
    float S, L, r, R;
    system("cls");

    printf("Expression 1:\n\n\t S =x^5 + 0.2*x*y + y^7\n");
    printf("\nValue of x: ");
    scanf("%d", &x);
    printf("Value of y: ");
    scanf("%d", &y);
    S = pow(x, 5) + (float)0.2 * x * y + pow(y, 7);
    printf("\nValue of expression S =x^5 + 0.2*x*y + y^7 is %.3f ", S);

    printf("\n\nExpression 2:\n\n\t L = (a+b)^((2x+y)/(p-q))+c-100\n");
    printf("\nValue of x: ");
    scanf("%d", &x);
    printf("Value of y: ");
    scanf("%d", &y);
    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);
    printf("Value of p: ");
    scanf("%d", &p);
    printf("Value of q: ");
    scanf("%d", &q);

    float base2 = (float)(a + b);
    float power2 = (float)(2 * x + y) / (p - q);
    L = pow(base2, power2) + c - 100;
    printf("\nValue of expression L = (a+b)^((2x+y)/(p-q))+c-100 is %.3f ", L);

    printf("\n\nExpression 3:\n\n\t  r = A/B [Where A and B are integers]\n");
    printf("\nValue of A: ");
    scanf("%d", &A);
    printf("Value of B: ");
    scanf("%d", &B);
    r = A / B;
    printf("\nValue of expression r = A/B [Where A and B are integers] without typecasting is %.2f ", r);
    r = (float)A / B;
    printf("\nValue of expression r = A/B [Where A and B are integers] with typecasting is %.2f ", r);

    printf("\n\nExpression 4:\n\n\t  R = ((u/x+v/y)^5)/((((p^2)/(3u^2.5))-(q/2v))^3.5)\n");
    printf("\nValue of u: ");
    scanf("%d", &u);
    printf("Value of v: ");
    scanf("%d", &v);
    printf("Value of x: ");
    scanf("%d", &x);
    printf("Value of y: ");
    scanf("%d", &y);
    printf("Value of p: ");
    scanf("%d", &p);
    printf("Value of q: ");
    scanf("%d", &q);
    float numerator_base_4 = ((float)u / x + v / y);
    float numerator = pow(numerator_base_4, 5);
    float denominator_first_part = ((float)p * p) / (3 * pow(u, 2.5));
    float denominator_second_part = (float)q / (2 * v);
    float denominator_base = (denominator_first_part - denominator_second_part);
    float denominator = pow(denominator_base, 3.5);
    R = numerator / denominator;

    printf("\nValue of expression R = ((u/x+v/y)^5)/((((p^2)/(3u^2.5))-(q/2v))^3.5) is %f ", R);

    getch();
    return 0;
}