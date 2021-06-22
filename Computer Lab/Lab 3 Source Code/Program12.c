/*This example show the concept of defining search set to read string*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char str[70];
    system("cls");
    printf("Enter the string: ");
    scanf("%[^M]",str);
    printf("Read string: %s",str);
    getch();
    return 0;
}