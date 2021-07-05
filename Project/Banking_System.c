#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "D:\Coding Universe\Code With C\Project\bank.c"
#include "D:\Coding Universe\Code With C\Project\Account.c"

int login_status;

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
            accountStatus(username);
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
        default:
        {
            interactivePage("ERROR");
        }
        }
    }

    getch();
    return 0;
}