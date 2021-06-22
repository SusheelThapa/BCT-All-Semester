/*This example illustrates the concept of reading string using %wc format specification*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str[50];

    system("cls");

    printf("Enter the string: ");
    scanf("%10c", &str);

    printf("Read string : %s", str);

    getch();
    return 0;
}