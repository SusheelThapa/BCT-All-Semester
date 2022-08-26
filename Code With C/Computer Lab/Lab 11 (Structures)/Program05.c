/*
Write a program to compute any two instant memory spaces in format (Kilobytes:Bytes:Bits) using structure. Build function to add and subtract given memory spaces where 1kb = 1-24b and 1b = 8bits and display the result from main()
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*Creating Structure*/
struct Memory
{
    int kb;
    int b;
    int bits;
};

/*Function with type of created structure*/
struct Memory addMemory(struct Memory first, struct Memory second)
{
    "Add the two memory passed";

    struct Memory result;

    result.bits = first.bits + second.bits;
    result.b = first.b + second.b;
    result.kb = first.kb + second.kb;

    if (result.bits >= 8)
    {
        result.bits = result.bits - 8;
        result.b = result.b + 1;
    }
    if (result.b >= 1024)
    {
        result.b = result.b - 1024;
        result.kb = result.kb + 1;
    }
    return result;
}

struct Memory subtractMemory(struct Memory first, struct Memory second)
{
    "Subtract the two Memory passed";

    struct Memory result;

    result.bits = first.bits - second.bits;
    result.b = first.b - second.b;
    result.kb = first.kb - second.kb;

    if (result.bits < 0)
    {
        result.bits = result.bits + 8;
        result.b = result.b - 1;
    }
    if (result.b < 0)
    {
        result.b = result.b + 1024;
        result.kb = result.kb - 1;
    }
    return result;
}

int main()
{
    struct Memory first, second, add, subtract;

    system("cls");

    /*Taking input*/
    printf("First Memory:\n");
    printf("Kilobytes: ");
    scanf("%d", &first.kb);
    printf("Bytes: ");
    scanf("%d", &first.b);
    printf("Bits: ");
    scanf("%d", &first.bits);

    printf("\nSecond Memory:\n");
    printf("Kilobytes: ");
    scanf("%d", &second.kb);
    printf("Bytes: ");
    scanf("%d", &second.b);
    printf("Bits: ");
    scanf("%d", &second.bits);

    /*Function call*/
    add = addMemory(first, second);
    subtract = subtractMemory(first, second);

    /*Printing result*/
    printf("Added Memory(kb:b:bits)\n");
    printf("%d:%d:%d\n", add.kb, add.b, add.bits);

    printf("\nSubtracted Memory(kb:b:bits)\n");
    printf("%d:%d:%d\n", subtract.kb, subtract.b, subtract.bits);

    getch();
    return 0;
}