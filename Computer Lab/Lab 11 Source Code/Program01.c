/*
Write a program to create a structure having members: Name, Address, Telephone number and Salary of an employee. Read the values of members from the user and display.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Creating structure*/
struct UserData
{
    /*Member of structure*/
    char user_name[100];
    char user_address[100];
    long long int user_telephone_number;
    long int user_salary;
};

int main()
{
    /*Creating Structure Variable*/
    struct UserData UD_one;

    system("cls");

    /*Taking input from user*/
    printf("User Name: ");
    scanf("%[^'\n']", UD_one.user_name);

    printf("User Address: ");
    scanf(" %[^'\n']", UD_one.user_address);

    printf("Telephone Number: ");
    scanf("%lld", &UD_one.user_telephone_number);

    printf("Salary: ");
    scanf("%ld", &UD_one.user_salary);

    /*Print the taken value*/
    printf("\nData of User:");
    printf("\nName: %s", UD_one.user_name);
    printf("\nAddress: %s", UD_one.user_address);
    printf("\nTelephone Number: %lld", UD_one.user_telephone_number);
    printf("\nSalary: %ld", UD_one.user_salary);
    getch();
    return 0;
}