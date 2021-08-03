/*
Write a program to reverse the word using recursive function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char string[], int length)
{
    "Reverse the string recursively based on length of string is even or odd";

    /*Find the length of string and it is constant so it is stored in const integer variable*/
    const int length_of_string = strlen(string);

    /*Check length is odd or even as when have seperate process of reversing odd and even length of string*/
    if (strlen(string) % 2 == 0)
    {

        /*Recursive termination condition*/
        if (length == length_of_string / 2)
        {
            return;
        }
        else
        {
            /*Swap the element of first and last position*/
            char temp = string[length_of_string - length];
            string[length_of_string - length] = string[length - 1];
            string[length - 1] = temp;

            /*Decrease length by 1*/
            length = length - 1;

            /*Function call*/
            reverse(string, length);
        }
    }
    else if (length_of_string % 2 == 1)
    {
        /*Finding midpoint as in odd length midpoint element isn't changed*/
        const int midpoint = (length_of_string + 1) / 2;

        /*Terminating condition*/
        if (length == midpoint)
        {
            // goto stop;
            return;
        }
        else
        {
            /*Swap the last and first element*/
            char temp = string[length_of_string - length];
            string[length_of_string - length] = string[length - 1];
            string[length - 1] = temp;

            /*Decrese length by 1*/
            length = length - 1;

            /*Function call*/
            reverse(string, length);
        }
    }
}

int main()
{
    /*Variable declaration*/
    char string[100];

    system("cls");

    /*Taking string from user*/
    printf("String: ");
    scanf("%[^'\n']", string);

    /*Function call*/
    reverse(string, strlen(string));

    /*Reversing the string*/
    printf("Reversed string is %s\n", string);

    getch();
    return 0;
}