/*
    Write a program to add any two number using all function method
*/

/*Importing Header Files*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a, b, sum;/*Global Variable*/

/*Function Declaration*/
void add_void_parameter(int x, int y);
int add_int_parameter(int x, int y);
void add_void();
int add_int();

/*Main funtion*/
int main()
{
    system("cls");/*Clearing the terminal screen*/

    /*Taking the value from user*/
    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    /*Calling different function and printing the meaningful result*/
    add_void_parameter(a, b); 

    printf("Sum of %d and %d is %d.\n\n", a, b, add_int_parameter(a, b));

    add_void();

    printf("Sum of %d and %d is %d.\n\n", a, b, add_int(a, b));


    getch();/*Waits till a character is pressed*/
    return 0;
}

/*Funtion body*/
void add_void_parameter(int x, int y)
{
    int c = x + y;

    printf("Void function add:\n");
    printf("Sum of %d and %d is %d.\n\n", x, y, c);
}
int add_int_parameter(int x, int y)
{
    printf("Int function add:\n");
    return x + y;
}
void add_void()
{
    sum = a + b;

    printf("Void function(Parameter not taking) add:\n");
    printf("Sum of %d and %d is %d.\n\n", a, b, sum);
}
int add_int()
{
    printf("Int function(Parameter not taking) add:\n");
    return a + b;
}

/*
If a variable is declared outside the main funtion as well as all other funtion then it is call global variable 
    Once declare the varaibla can be used in any function as per our need
    
    In above funtion the global variable is a , b
        Value of a and b is takaen in main funcion 
        Its value is used in void function

*/