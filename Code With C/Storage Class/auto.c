/*
Automatic Variable:
Scope: Local to function body
Default value: garbage value
Life: Till the function end

Note:
Variable defined without storage class in automatic variable

int number === auto int number
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*1]Function to show scope and life of automatic variable*/
int auto_sum(int a, int b)
{
    auto int sum = a + b;
    return sum;
}

int main()
{
    /*<------1]Scope and Life------->*/

    /*Below will throw an error as sum is auto and sum declared in auto_sum() is killed when the functions end*/

    auto_sum(4, 5);
    // print("Sum is %d", sum);

    /*<-----2]Default Value of auto variable------>

/*Below will gives you a value rather than error value given is garbage value*/

    auto int a;
    printf("Value of garbage is  %d\n", a);

    getch();
    return 0;
}