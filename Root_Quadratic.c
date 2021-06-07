/*This program calculate the roots of quadratic equation.*/

//Importing the header files
#include <stdio.h>
#include <conio.h>  //From here getch() is used
#include <stdlib.h> //From here system('cls') is used
#include <math.h>   //From here pow() is used
/*
Syntax of pow():
            pow(base,power)
        For eg:
            3^7
            Base = 3 and Power = 7
*/

/*
Formula used:
    x = −b ± √ (b2 − 4ac) 2a
*/
int main()
{
    //Declaring the required variable
    float a, b, c, discriminant, root_one, root_two;

    //Below lines are just to given a brief knowledge on how to input the value to the user...
    system("cls");
    printf("Here, the basic format of quadratic equation:\n\n");
    printf("\t\t aX^2 + bX + c= 0 ");
    printf("For the equation 1X^2 + 2X  + 1 = 0\n\n");
    printf("\tHere,\n\t\t a = 1 ,b = 2 , c = 1");
    printf("\n\nPress any key to begin...");
    getch();

    //Main code
    system("cls");
    printf("Enter the value of a,b,c:\n");
    scanf("%f %f %f", &a, &b, &c);

    //Below if check whether the given value is of quadratic or not..
    if (a != (float)0)
    {
        //Calculating the discriminant
        discriminant = pow(b, 2) - 4 * a * c; // Discriminant = b^2 - 4ac
        //Below if check whether the root is imaginary or real root.
        if (discriminant >= 0)
        {
            // Calculating roots usingx = −b ± √ (dicriminant)* 1 / 2a
            root_one = (-b + pow(discriminant, 0.5)) / (2 * a);
            root_two = (-b - pow(discriminant, 0.5)) / (2 * a);
            printf("\nThe root are %.2f and %.2f.", root_one, root_two);
        }
        else if (discriminant < 0)
        {
            //Here discriminant is changeed to positive and used  x = −b ± √ (dicriminant)* 1 / 2a
            discriminant = -discriminant;
            root_one = (-b + pow(discriminant, 0.5)) / (2 * a);
            root_two = (-b + pow(discriminant, 0.5)) / (2 * a);
            printf("\nThe root are %.2fi and %.2fi.", root_one, root_two);
        }
    }
    else
    {
        printf("\nYou didnot give correct quadritic equation.");
    }
    getch(); //Wait till a character is pressed
    return 0;
}