/*
Write a program to input name, roll, address, telephone number and score of a student. Store the contents of the person in file first.txt After that, copy the contents of first.txt to second.txt and display the contents of second.txt In this progrm, you should use the text files.[You can use structure for data handling]
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Data
{
    char name[100];
    int roll_number;
    char address[100];
    long long int telephone_number;
    float score;
};

int main()

{
    char ch;

    /*Structure variable*/
    struct Data user;

    /*Creating Files pointer*/
    FILE *in_first;
    FILE *out_first;
    FILE *in_second;
    FILE *out_second;

    system("cls");

    /*Taking input from user*/
    printf("Name: ");
    scanf("%[^'\n']", user.name);

    printf("Roll Number: ");
    scanf("%d", &user.roll_number);

    printf("Address: ");
    scanf(" %[^'\n']", user.address);

    printf("Telephone Number:");
    scanf("%lld", &user.telephone_number);

    printf("IOE score: ");
    scanf("%f", &user.score);

    /*Opening first.txt in write mode and write the inputed data*/
    in_first = fopen("First.txt", "w");
    fprintf(in_first, "%s %d %s %lld %.2f", user.name, user.roll_number, user.address, user.telephone_number, user.score);
    fclose(in_first);

    /*Opening First.txt in read mode and Second.txt in write mode*/
    out_first = fopen("First.txt", "r");
    in_second = fopen("Second.txt", "w");

    /*Coping character from first.txt to second.txt character by character*/
    while (1)
    {

        /*Taking a character*/
        ch = fgetc(out_first);

        /*Condition if the character in the files has reached to end*/
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, in_second); /*First argument character , Second argument File pointer*/
    }

    /*Closing the files*/
    fclose(out_first);
    fclose(in_second);

    /*Opening the second.txt in read mode and reading charcter by character and printing*/
    out_second = fopen("Second.txt", "r");
    while (1)
    {
        ch = fgetc(out_second);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(out_second);

    getch();
    return 0;
}