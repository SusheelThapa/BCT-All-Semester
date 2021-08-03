/*
Write a program to do following things:
    -->To print the question "Who is prime minister of Nepal?"
    -->To accept answer
    -->TO print "Good" and stop if the answer is correct
    -->To print the message "try again", if the answer is wrong.
    -->To display the correct answer when the answer is wrong even at the third attempt, exit the program
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*Variable Declaration*/
    char answer[50];
    int attempt = 0;

    system("cls");

    /*While loop to take,check answer and print infomation on the answer and stop when attempt is 3*/
    while (attempt != 3)
    {
        fflush(stdin); /*CLear Buffer*/

        /*Asking Question and receivng answer*/
        printf("Who is prime minister of Nepal?\n");
        scanf("%[^'\n']", answer);

        /*Checking Answer and taking decision*/
        if (strcmpi(answer, "Pushpa Kamal Dahal") == 0)
        {
            printf("Good");
            break;
        }
        else
        {
            system("cls");
            printf("Try again\n");
            attempt++;
        }
    }

    /*If user gives all wrong answer*/
    if (attempt == 3)
    {
        printf("\nYou have tried for 3 times but you were unable to give correct answer.\n");
        printf("\nCorrect Answer: %s", "'Pushpa Kamal Dahal'");
    }

    getch();
    return 0;
}
