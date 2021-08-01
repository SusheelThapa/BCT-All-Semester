/*
Write a program to read a string in main(). Pass it to function. The fucntion convert all the uppercase of lower and vice-verse
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertLowerUpper(char *string)
{
    "Convert the lower case to uppercase and vice verse";

    while (*string != '\0')
    {
        (isupper(*string)) ? (*string = tolower(*string)) : (*string = toupper(*string));
        string++;
    }
}

int main()
{
    /*Variable Declaration*/
    char string[100];

    system("cls");

    /*Taking string input*/
    printf("String: ");
    scanf("%[^'\n]", string);

    /*Function call*/
    convertLowerUpper(string);

    /*Printing result*/
    printf("\nConverted String : %s\n", string);

    getch();
    return 0;
}