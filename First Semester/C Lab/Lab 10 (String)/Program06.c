/*
Write a seperate program that exactly stimulate the task of strlen(),strcat(),strcpy() and strcmp() using \nuser defined function
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*All these function are avaliable in string folder*/
void combine(char *str_one, char *str_two)
{
    "Combine the two string and kept combine result in first variable";

    while (*str_one != '\0')
    {
        str_one++;
    }

    while (*str_two != '\0')
    {
        *str_one = *str_two;
        str_one++;
        str_two++;
    }
    *str_one = '\0';
}

int compareString(char *string_one, char *string_two)
{
    while (1)
    {
        if (*string_one != *string_two)
        {
            return 1;
        }
        else if (*string_one == *string_two)
        {
            if (*string_one == '\0' || *string_two == '\0')
            {
                return 0;
            }
        }
        if (*string_one == '\0' || *string_two == '\0')
        {
            return 1;
        }

        string_one++;
        string_two++;
    }
}

void copyString(char *destination, char *source)
{
    "Copy string from one variable to another";

    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

int lengthString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    /*Vaeiable Declaration*/
    char string1[100], string2[100], temp[100];

    system("cls");

    /*Taking two string from user*/
    printf("String one: ");
    scanf("%[^'\n']", string1);

    fflush(stdin); /*To clear buffer*/

    printf("String two: ");
    scanf("%[^'\n']", string2);

    /*Copying value to temp as string2 value will be change later on*/
    copyString(temp, string2);

    /*Calling each function and printing meaningful result*/
    printf("\nUser Defined Length\n");
    printf("Length of string one is %d\n", lengthString(string1));
    printf("Length of string two is %d\n", lengthString(string2));

    printf("\nUser Defined Compare\n");
    if (compareString(string1, string2) == 0)
    {
        printf("Two string is same.\n");
    }
    else
    {
        printf("Two string isn't same.\n");
    }

    printf("\nUser Defined Copy\n");
    copyString(string2, string1);
    printf("Copying items of string one to string two: %s\n", string2);

    /*Since string is change so we reinitialized it*/
    copyString(string2, temp);

    printf("\nUser Defined Combine\n");
    combine(string1, string2);
    printf("Combination of string one and string two is %s\n", string1);

    getch();
    return 0;
}