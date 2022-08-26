/*
WAP  to reverse the string without using any string handling functions
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX_LIMIT 100
void reverseString(char *string)
{
    "Reverse the string porvided";

    int length = 0;
    char *temp;

    temp = (char *)malloc(MAX_LIMIT * sizeof(*temp)); //Dynamic memory allocation of arrray

    /*Copy the element of string in new character array*/
    while (*string != '\0')
    {
        temp[length] = *string;
        length++;
        string++;
    }

    "IMPPORTANT";
    string = string - length; /*Since we have move ahead in address of string we to bring back to orginal position we just subtract by the number we have moved ahead*/

    /*Copy the element in orginal string in reverse manner*/
    while (*string != '\0')
    {
        *string = temp[length - 1];
        string++;
        length--;
    }

    free(temp); /*Free up the memory taken by temp*/
}

int main()
{
    char string[MAX_LIMIT];

    system("cls");

    printf("String:");
    gets(string);

    reverseString(string);

    printf("Reverse string:%s", string);

    getch();
    return 0;
}