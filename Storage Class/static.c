/*
Static Variable:
Scope: Local to function body
Default Value: 0
Life: Till progam ends

Note:
~Declared outside function
~Even though it is local in scope but its value doesnot get terminated even after termination of fucntion and when the function is called again and again it simply use previous value to do it.

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*<-----Scope, Life and Notes------>*/
int staticDemo()
{
    static int value;
    value++;
    printf("Value is %d\n", value);
}

int main()
{

    system("cls");

    /*<-----Scope, Life and Notes------>*/

    for (int i = 0; i < 10; i++)
    {
        staticDemo();
    }

    /*<------Default Value------->*/

    static int defaultValue;
    printf("\n\nValue : %d", defaultValue);

    getch();
    return 0;
}