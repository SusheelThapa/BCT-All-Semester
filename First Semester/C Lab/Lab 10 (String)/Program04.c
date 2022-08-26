/*
Write a program to read string to main() using gets(). Pass it to a function that finds the longest words of the string, counts the number of vowels and consonents on the word and display the count and the word from main().
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void longestWord(char string[])
{
    "Return the length of largest words and also replace the pass string with the largest word";

    /*
    If the string contain the words with same length then it will store first word in the string
    */

    /*Variable Declaration*/
    char *ptr_word;
    char word[100];
    int length = 0;

    /*Spliting string with delimiter --> First call*/
    ptr_word = strtok(string, " ");

    /*Accessing each word seperate by strtok and finding the word with largest length*/
    while (ptr_word != NULL)
    {
        if (strlen(ptr_word) > length)
        {
            /*Find the length*/
            length = strlen(ptr_word);

            /*Add null character at last of string since split words doesnot contain string termination character('\0')*/
            word[length] = '\0';

            /*Copy the split word in word*/
            strcpy(word, ptr_word);
        }

        /*Iterate over new word --> Call after first call*/
        ptr_word = strtok(NULL, " ");
    }

    /*Copy the largest word to string*/
    strcpy(string, word);

    /*
    MORE ON strtok()

    Why do we use null in strtok ( )?
    strtok is part of the C library and what it does is splitting a C null-delimited string into tokens separated by any delimiter you specify. The first call to strtok must pass the C string to tokenize, and subsequent calls must specify NULL as the first argument, which tells the function to continue tokenizing the string you passed in first.
    */
}

int count(char *string, char option[])
{
    "Count the vowel or consonent letter in string as per option and return count";

    char *temp;                /*Temporary to store string value*/
    int count = 0, length = 0; /*Count is used to find the vowel or consonent count and length to find the length*/

    /*Dynamic Memory Allocation*/
    temp = (char *)malloc(strlen(string) * sizeof(char));

    /*if memory is not allocated it will keep on trying to allocated*/
    while (temp == NULL)
    {
        temp = (char *)malloc(strlen(string) * sizeof(char));
    }

    /*Copy the contents to temp as we are going to modify string*/
    strcpy(temp, string);

    /*If statement as per option*/
    if (strcmp(option, "vowel") == 0)
    {
        while (*string != '\0')
        {
            /*Convert the character to lower so we write less condtion other wise we need to add it for Capital letter too*/
            *string = tolower(*string);

            /*Condition to be vowel*/
            if (*string == 'a' || *string == 'e' || *string == 'i' || *string == 'o' || *string == 'u')
            {
                count++;
            }

            /*Pointing to next address*/
            string++;

            length++;
        }
    }
    else if (strcmp(option, "consonent") == 0)
    {
        while (*string != '\0')
        {
            /*Convert the character to lower so we write less condtion other wise we need to add it for Capital letter too*/
            *string = tolower(*string);

            /*Condition to be vowel*/
            if (*string != 'a' || *string != 'e' || *string != 'i' || *string != 'o' || *string != 'u')
            {
                count++;
            }

            /*Pointing to next address*/
            string++;

            length++;
        }
    }

    /*Pointing the string to initial base address*/
    string = string - length;

    /*Copying value*/
    strcpy(string, temp);

    /*Free up memory allocated for temp*/
    free(temp);

    return count;
}

int main()
{
    /*Declaration*/
    char string[200];

    system("cls");

    /*Taking value from user*/
    printf("Sentence: ");
    scanf("%[^'\n']", string);

    /*Function call*/
    longestWord(string);

    /*Printing result along with respective function call*/
    printf("Longest Word: %s\n", string);
    printf("Vowel Count: %d\n", count(string, "vowel"));
    printf("Consonents Count: %d\n", count(string, "consonent"));

    getch();
    return 0;
}