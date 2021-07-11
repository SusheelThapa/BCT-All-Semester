/*
External Variable:
Scope: global 
Default value:  0
Life : Till program ends


Note:
~Declared outside the function
~It is suggested to use in very less
~Same as global variable
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Declarating extern variable*/
#include "extern2.c" /*External files which have value of number*/
extern int number;   /*It tells the value of number will comes externally*/
int value;

//Files other than c ---> It should have valid C syntax:
#include "1.txt"
extern int sum;

/*Function Body*/
void scope1();
void scope2();

int main()
{

    system("cls");
    exit(0);
    /*<------1]Scope and Life------->*/

    scope1();
    scope2();
    printf("Value of number is %d\n", number);

    /*<------2]Default value------->*/

    printf("Value of number is %d\n", value);


/*<-----Files other than c------>*/

    printf("%d", sum);
    getch();
    return 0;
}

/*<------1]Scope and Life------->*/

/*Function Defination*/
void scope1()
{
    printf("Value of number is %d\n", number);
}
void scope2()
{
    printf("Value of number is %d\n", number);
}