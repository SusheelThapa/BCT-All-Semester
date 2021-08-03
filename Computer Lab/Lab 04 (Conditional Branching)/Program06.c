/*Write a program to determine the root of quadratic equation. Take the value of a, b and c from user.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root_one_real, root_two_real, root_imaginary;

       system("cls");

    printf("Enter the value of a,b,c:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a != (float)0)
    {
        discriminant = pow(b, 2) - 4 * a * c;

        if (discriminant >= 0)
        {
            root_one_real = (-b + pow(discriminant, 0.5)) / (2 * a);
            root_two_real = (-b - pow(discriminant, 0.5)) / (2 * a);

            printf("\nRoot One : %.2f \nRoot Two : %.2f", root_one_real, root_two_real);
        }
        else if (discriminant < 0)
        {
            discriminant = -discriminant;
            root_one_real = (-b) / (2 * a);
            root_two_real = (-b) / (2 * a);
            root_imaginary = (pow(discriminant, 0.5)) / (2 * a);

            printf("\nRoot One : %.2f + %.2fi \nRoot Two : %.2f - %.2fi", root_one_real, root_imaginary, root_two_real, root_imaginary);
        }
    }
    else
    {
        printf("\nYou didnot give correct quadratic equation.");
    }

    return 0;
}