/*
Write a program to open a new files, read roll number, name, address and phone number of students until user says "no" after reading the data write it to file then display the contents of files
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *in, *out;
    char roll_number[100], name[100], address[100];
    long long int phone_number;

    // system("cls");
    in = fopen("Program03.txt", "a");

    while (1)
    {
        // fflush(stdin);

        printf("Roll Number: ");
        scanf(" %[^'\n']", roll_number);

        // printf("%s", roll_number);
        // exit(0);

        if (strcmpi(roll_number, "no") == 0)
        {
            break;
        }

        printf("Name: ");
        scanf(" %[^'\n']", name);

        printf("Address: ");
        scanf(" %[^'\n']", address);

        printf("Phone Number: ");
        scanf("%lld", &phone_number);
        fprintf(in, "%30s%30s%30s%15lld\n", roll_number, name, address, phone_number);
    }

    fclose(in);

    system("cls");

    out = fopen("Program03.txt", "r");

    printf("\n%30s%30s%30s%15s\n", "Roll Number", "Name", "Address", "Phone Number");

    while (1)
    {
        char ch = fgetc(out);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(out);

    getch();
    return 0;
}