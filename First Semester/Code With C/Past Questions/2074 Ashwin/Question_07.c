#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};
int main()
{
    struct Complex c1, c2, c_ans;

    printf("Complex One:\n");
    printf("\tReal: ");
    scanf("%f", &c1.real);
    printf("\tImaginary: ");
    scanf("%f", &c1.imaginary);

    printf("Complex Two:\n");
    printf("\tReal: ");
    scanf("%f", &c2.real);
    printf("\tImaginary: ");
    scanf("%f", &c2.imaginary);

    printf("Complex Multiplication:\n");
    printf("\tReal: ");
    printf("%.2f", (c1.real * c2.real - c1.imaginary * c2.imaginary));
    printf("\tImaginary: ");
    printf("%.2f", (c1.real * c2.imaginary + c2.real * c1.imaginary));

    return 0;
}