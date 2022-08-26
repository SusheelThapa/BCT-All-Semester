/*
Write a program to read a string in main, pass it to a function that returns the count of numbers of words to main(). Display the count
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int wordCount(char string[])
{
    "Count the words in string and return the counted words";
    int words = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (isalpha(string[i]) && (string[i + 1] == ' ' || string[i + 1] == '\t' || string[i + 1] == '\0'))
        {
            words++;
        }
    }

    return words;
}
int main()
{
    char sentence[100];

    system("cls");

    /*Taking string*/
    printf("String: ");
    scanf("%[^'\n']", sentence);

    /*Printing the result and calling function*/
    printf("Number of words is %d.", wordCount(sentence));

    getch();
    return 0;
}