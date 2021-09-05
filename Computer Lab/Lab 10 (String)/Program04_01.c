/*
TO find the highest word in the string
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void calculate(char sentence[10000], int *vowel, int *consonant, int *length, char longest[100])
{
    char temp[100][20];
    int position = 0;
    int i = 0, j = 0, k = 0;

    int v = 0, c = 0, l = 0;

    while (1)
    {
    NextIteration:

        /*Count the length of words, vowel, consonant*/
        if (isalpha(sentence[j]))
        {
            if (sentence[j] == 'a' || sentence[j] == 'e' || sentence[j] == 'i' || sentence[j] == 'o' || sentence[j] == 'u' || sentence[j] == 'A' || sentence[j] == 'E' || sentence[j] == 'I' || sentence[j] == 'O' || sentence[j] == 'U')
            {
                v++;
                l++;
                temp[i][k] = sentence[j];
            }

            else if (sentence[j] != 'a' || sentence[j] != 'e' || sentence[j] != 'i' || sentence[j] != 'o' || sentence[j] != 'u' || sentence[j] != 'A' || sentence[j] != 'E' || sentence[j] != 'I' || sentence[j] != 'O' || sentence[j] != 'U')
            {
                c++;
                l++;
                temp[i][k] = sentence[j];
            }
        }

        if (sentence[j] == ' ' || sentence[j] == '.' || sentence[j] == '\0')
        {
            temp[i][k] = '\0';

            if (i != 0)
            {
                if (strlen(temp[position]) < strlen(temp[i]))
                {
                    position = i;

                    *vowel = v;
                    *consonant = c;
                    *length = l;
                }
            }
            if (i == 0)
            {
                *vowel = v;
                *consonant = c;
                *length = l;
            }

            v = 0;
            c = 0;
            l = 0;

            i++;
            k = 0;
            j++;

            if (sentence[j] == '\0')
            {
                break;
            }

            goto NextIteration;
        }

        if (sentence[j] == '\0')
        {
            break;
        }

        j++;
        k++;
    }

    strcpy(longest, temp[position]);
}
int main()
{
    char string[200], longest[200];
    int vowel, consonant, length;

    system("cls");

    printf("String: ");
    gets(string);

    calculate(string, &vowel, &consonant, &length, longest);

    printf("\nVowel =%d,\nConsonant = %d, \nLength = %d \nWords = %s\n", vowel, consonant, length, longest);

    getch();
    return 0;
}
