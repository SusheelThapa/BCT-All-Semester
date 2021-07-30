/*
WAP to convert lower case character to upper case and vice verse in a string entered by user and also find the number of words in string
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*Declaration of variable*/
    char string[100], upper_string[100], lower_string[100];
    int i = 0, word_count = 1;
    ;

    system("cls");

    /*Taking string*/
    printf("String: ");
    gets(string);

    /*Convert to lower and upper case*/
    i = 0;
    while (string[i] != '\0')
    {
        upper_string[i] = toupper(string[i]);
        lower_string[i] = tolower(string[i]);
        if (string[i] == ' ')
        {
            word_count++;
        }
        i++;
    }

    /*Adding null character*/
    upper_string[i] = '\0';
    lower_string[i] = '\0';

    i = 0;

    /*Printing upper case*/
    printf("Upper Case: ");
    while (upper_string[i] != '\0')
    {
        printf("%c", upper_string[i]);
        i++;
    }

    i = 0;

    /*Printing lower case*/
    printf("\nLower Case: ");
    while (lower_string[i] != '\0')
    {
        printf("%c", lower_string[i]);
        i++;
    }

    /*Printing number of words*/
    printf("\nNumber of word in string is %d.", word_count);

    getch();
    return 0;
}