/*
    Program to swap the value of variable enter by the user without use of third variable
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*Logic of the code:
    In this code, I have used two method to swap the variable value.
        i.e. Input     Output
             a = 4     a = 5
             b = 5     b = 4

    Method one:
    let a = 4 and b =5
    then,

            a = a + b - (b = a);

        Keeping respective value,
            a = 4 + 5 - (b =4); First the value of b is kept in the statement then only b = 5 is set.

            a = 9 - 4; Since b is subtracted and b has been set to b =4; hence value of b is 4;

        Now,
             a = 5 and b = 4

        In conclusion, first the orginal value of b is used then only b = a will execute changing the value of b  to value of a I.e b = 4

    Method two:
        let a = 4 adn b = 5;
        then, 
        a = a * b = 4 * 5 = 20

        If 20 is divide by 5 we get the orignal value of a. In the form of code:

            b = a * b / b  
                -->Since 20 is a and 5 is b and we need to swap so we put b= . Now, b = 4

        Again if 20 in divided by 4 we get the value of orginal b. In the form of code:

            a= a / b  
                -->Since 20 is a and 4 is new value of b as value of b is change in above code and we need to swap so we put b= .Now, b = 4

    In the below code, I have taken the two number as an input adn used those number to swap by method one and thre result of the method one in used as number for method two.

    You may think:
     a = 4 and b =5;
     c = a;
     a = b;
     b = c;

     To swap the variable, but the question is without use of third variable and here c is variable other than a and b.
*/
int main()
{
    //Declaration of variable
    int number1, number2;

    system("cls");

    /*Taking the input from the user*/
    printf("Enter the first number:");
    scanf("%d", &number1);

    printf("Enter the second number:");
    scanf("%d", &number2);

    system("cls");
    /*Printing the orginal number*/
    printf("Original Number\n");
    printf("Number One: %d\n", number1);
    printf("Number Two: %d\n\n", number2);

    /*Method 1*/
    number1 = number1 + number2 - (number2 = number1);
    printf("Swapping Two Number(Method 1) \n");
    printf("Number One: %d\n", number1);
    printf("Number Two: %d\n\n", number2);

    /*Method 2*/
    number1 = number1 * number2;
    number2 = number1 / number2;
    number1 = number1 / number2;
    printf("Swapping Two Number(Method 2) \n");
    printf("Number One: %d\n", number1);
    printf("Number Two: %d\n\n", number2);

    getch();
    return 0;
}