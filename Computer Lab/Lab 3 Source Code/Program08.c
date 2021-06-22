/*This example illustrates the concept of printing mixed data.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n = 12345;
    float m = 123.9876;
    char ch = 'a';
    char str[20] ="I love Baglung.";
    system("cls");

    printf("n=%7d\nm=%12.5f\nch=%-2c\nstr=%16s\n", n, m, ch, str);

    getch();
    return 0;
}