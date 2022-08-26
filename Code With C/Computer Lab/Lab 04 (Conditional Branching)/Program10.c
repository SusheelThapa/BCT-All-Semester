/*
"You are given a task to develop a system to read at least 100 integer numbers and continue until the user enters NO. Your system must have capacity to calculate the sum and average of those numbers which are exactly divisible by 9 but notby 6 and lies in between 1 to 100 and display  a suitable message if no such number is read."
Write algorithm, flowchart and code tp develop the system*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sum = 0, input_number = 0, no_of_valid_number = 0, valid_number[500], entries = 1;
    float average = 0;
    char input[100];

    system("cls");

    printf("\t\t  <-----QUESTION 10 SYSTEM------>\n\n\n");
    printf("\t\t   <-----TAKING INPUT------>\n\n\n");

    while (1)
    {

        printf("\nValue %d : ", entries);
        scanf("%s", input);

        if ((strcmp(input, "No") == 0) || (strcmp(input, "no") == 0) || (strcmp(input, "NO") == 0))
        {
            if (no_of_valid_number == 0)
            {
                system("cls");
                printf("\t\t  <-----QUESTION 10 SYSTEM------>\n\n\n");
                printf("\t\t<-----SYSTEM ANALYSIS RESULT------>\n\n\n");
                printf("\t\t!!!!!!!!ERROR!!!!!!!!!\n\n");
                printf(" You didn't enter the number with following characteristic:\n\n");
                printf("\t\t-->Divisible by 9\n");
                printf("\t\t-->Not divisible by 6\n");
                printf("\t\t-->Number should be between 1 to 100.\n\n");
                printf("\n\n\t\t<---Thanks for using our sytem--->");
                getch();
                exit(0);
            }
            else
            {
                system("cls");
                printf("\t\t  <-----QUESTION 10 SYSTEM------>\n");
                printf("\t\t<-----SYSTEM ANALYSIS RESULT------>\n\n\n");
                printf("Total number of entries: %d\n", entries - 1);
                printf("Valid Entries: %d\n\n", no_of_valid_number);
                printf("\nValid Entries: ");

                for (int i = 0; i < no_of_valid_number; i++)
                {
                    printf(" %d", valid_number[i]);
                }

                average = (float)sum / no_of_valid_number;

                printf("\n\nSum : %d", sum);
                printf("\nAverage  =  %.2f", average);
                printf("\n\n\n\t\t  <---Thanks for using our sytem--->");
                getch();
                exit(0);
            }
        }
        else
        {
            for (int i = 0; i < strlen(input); i++)
            {
                char c = input[i];
                if (c == '1')
                {
                    input_number = input_number * 10 + 1;
                }
                else if (c == '2')
                {
                    input_number = input_number * 10 + 2;
                }
                else if (c == '3')
                {
                    input_number = input_number * 10 + 3;
                }
                else if (c == '4')
                {
                    input_number = input_number * 10 + 4;
                }
                else if (c == '5')
                {
                    input_number = input_number * 10 + 5;
                }
                else if (c == '6')
                {
                    input_number = input_number * 10 + 6;
                }
                else if (c == '7')
                {
                    input_number = input_number * 10 + 7;
                }
                else if (c == '8')
                {
                    input_number = input_number * 10 + 8;
                }
                else if (c == '9')
                {
                    input_number = input_number * 10 + 9;
                }
                else if (c == '0')
                {
                    input_number = input_number * 10 + 0;
                }
            }
            // printf("%d", input_number);
        }
        if (input_number > 0 && input_number <= 100)
        {
            if ((input_number % 9 == 0) && (input_number % 6 != 0))
            {
                sum = input_number + sum;
                valid_number[no_of_valid_number] = input_number;

                no_of_valid_number++;
            }
        }
        input_number = 0;
        entries++;
    }
}
