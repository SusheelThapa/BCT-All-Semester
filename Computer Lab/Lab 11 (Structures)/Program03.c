/*
Create a structure Data containing three members: int dd,int mm,int yy.
Create another member date of birth, create an object of structure data inside person. Using these structure, Write a program to input records until user enter 'n' or 'N'.Then, dispaly the contents in tabular form.
*/

// "Need so modification to convert data to string";

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/*A Structure*/
struct Date
{
    int dd;
    int mm;
    int yy;
};

/*Nested Structure*/
struct Person
{
    char name[100];
    char address[100];
    long long int telephone_number;
    struct Date date_of_birth;
};

int main()
{
    /*Creating the variable of srtucture*/
    struct Person p[100];
    int records = 0;

    system("cls");

    /*While loop to take data for infinite times till user enter n */
    while (1)
    {
        printf("Name: ");
        scanf(" %[^'\n']", p[records].name);

        if (strcmpi(p[records].name, "n") == 0)
        {
            break;
        }

        printf("Address: ");
        scanf(" %[^'\n']", p[records].address);

        printf("Telephone Number: ");
        scanf("%lld", &p[records].telephone_number);

        printf("Date of Birth:\n");
        printf(" Day: ");
        scanf("%d", &p[records].date_of_birth.dd);
        printf(" Month: ");
        scanf("%d", &p[records].date_of_birth.mm);
        printf(" Year: ");
        scanf("%d", &p[records].date_of_birth.yy);

        records++;
    }

    system("cls");

    /*Printing the data in tabular way*/
    printf("%10s%30s%30s%20s\n", "DOB", "Name", "Address", "Telephone Number");
    for (int i = 0; i < records; i++)
    {
        printf("%02d-%02d-%4d%30s%30s%20lld", p[i].date_of_birth.dd, p[i].date_of_birth.mm, p[i].date_of_birth.yy, p[i].name, p[i].address, p[i].telephone_number);
        printf("\n");
    }

    getch();
    return 0;
}