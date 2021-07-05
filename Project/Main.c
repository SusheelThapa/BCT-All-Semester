#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int login_status;
#define MAX_LIMIT 100

struct BankingOptions
{
    char option[MAX_LIMIT];
};

struct UserDetails
{
    char name[MAX_LIMIT], address[MAX_LIMIT], email[MAX_LIMIT], phone_number[MAX_LIMIT];
};

char username[MAX_LIMIT], password[MAX_LIMIT];
struct BankingOptions Option[100];

struct UserDetails user;

#include "D:\Coding Universe\Code With C\Project\Statement.c"
#include "D:\Coding Universe\Code With C\Project\Interactivepage.c"
#include "D:\Coding Universe\Code With C\Project\Login.c"
#include "D:\Coding Universe\Code With C\Project\Signup.c"
#include "D:\Coding Universe\Code With C\Project\Option.c"
int main()
{
    int choice;
    int signup_status;

    interactivePage("Welcome");

    printf("\n\n%48s", "Chose any one of above : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        login_status = logIn();
        printf("\n");
        if (login_status == 1)
        {
            printf("%48s\n", "You are Logged In");
        }
        else
        {
            printf("%56s\n", "Id and Password doesn't match.");
        }
        printf("%52s",
               "Press any key to continue");
        break;
    }
    case 2:
    {
        signup_status = signUp();
        if (signup_status == 1)
        {
            printf("%50s\n", "Sign up successfully");
        }
        else
        {
            printf("%50s\n", "Some error occurred");
        }
        printf("%52s",
               "Press any key to continue");
        break;
    }
    }
    if (login_status == 1)
    {
        interactivePage("Account Page");
        printf("\n\n%48s", "Chose any one of above : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            interactivePage("Account Status");
            break;
        }
        case 2:
        {
            interactivePage("Load Wallet");
            break;
        }
        case 3:
        {
            interactivePage("Payment");
            break;
        }
        case 4:
        {
            interactivePage("Send Money");
            break;
        }
        case 5:
        {
            interactivePage("Statements");
            break;
        }
        default:
        {
            interactivePage("ERROR");
        }
        }
    }

    getch();
    return 0;
}