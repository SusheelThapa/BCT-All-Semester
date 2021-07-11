/*
Register Variable:
Scope: Local to funtion they declared in
Default: Garbage value
Life: Till the function end, in which variable is defined

Address of registor varible cannot be used
Note:
~Register variable requests the compiler to store the variable in the CPU register instead of sorting in the memory to have faster access.
~Generally this is done for the variable which are being used frequently
~If the allocation of memory in CPU registor fails then compiler make is auto storage class. So through program output we cannot see whether register variable in created or not*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    /*<-----Address of registor cannot be accessed----->*/

    register int a = 5;
    /*Will throw and error*/
    printf("Value is %d", &a);

    getch();
    return 0;
}