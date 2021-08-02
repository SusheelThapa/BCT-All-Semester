/*
WAP to read words from the user until user hits 'NO' and write them to a file if the word is vowel free. Display the content in the files
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int vowelCheck(char *word)
{
    "Check whether the word contain the vowel letter of not";

    char vowel[] = "aeiouAEIOU";

    while (*word != '\0')
    {
        for (int i = 0; i < 10; i++)
        {
            if (*word == vowel[i])
            {
                return 1;
            }
        }
        word++;
    }
    return 0;
}
int main()
{
    char word[100], file_content;
    FILE *ptr_word;
    int vowel_check_result;

        system("cls");

    do
    {
        printf("Words: ");
        scanf("%s", word);

        vowel_check_result = vowelCheck(word);

        if (vowel_check_result == 0)
        {
            ptr_word = fopen("Program02.txt", "a");

            fprintf(ptr_word, "~%s\n", word);

            fclose(ptr_word);
        }
    } while (strcmpi(word, "NO") != 0);

    /*Reading and printing the content of file*/
    printf("Content of file:\n");
    ptr_word = fopen("Program02.txt", "r");
    do
    {
        file_content = fgetc(ptr_word);

        printf("%c", file_content);
    } while (file_content != EOF);

    fclose(ptr_word);

    /*Deleting the content of files*/
    ptr_word = fopen("Program02.txt", "w");
    fclose(ptr_word);

    getch();
    return 0;
}