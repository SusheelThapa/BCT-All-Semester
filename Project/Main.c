#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LIMIT 100

int login_status;
long long int esewa_amount, esewa_id;
char esewa_purpose[MAX_LIMIT];
long long int khalti_amount, khalti_id;
char khalti_purpose[MAX_LIMIT];

long long int payment_amount;
char payment_account_number[MAX_LIMIT], payment_account_name[MAX_LIMIT];

struct UserDetails
{
    char name[MAX_LIMIT], address[MAX_LIMIT], email[MAX_LIMIT], phone_number[MAX_LIMIT], account_number[MAX_LIMIT];
};

char username[MAX_LIMIT], password[MAX_LIMIT];

struct UserDetails user;

#include "D:\Coding Universe\Code With C\Project\Statement.c"
#include "D:\Coding Universe\Code With C\Project\Interactivepage.c"
#include "D:\Coding Universe\Code With C\Project\Login.c"
#include "D:\Coding Universe\Code With C\Project\Signup.c"
#include "D:\Coding Universe\Code With C\Project\Esewa.c"
#include "D:\Coding Universe\Code With C\Project\Khalti.c"
#include "D:\Coding Universe\Code With C\Project\Sendmoney.c"
#include "D:\Coding Universe\Code With C\Project\Payment.c"
#include "D:\Coding Universe\Code With C\Project\MyAccount.c"
#include "D:\Coding Universe\Code With C\Project\Wallet.c"
int main()
{

    int signup_status;
    int choice;

login_signup:;

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
            printf("%52s", "Press any key to continue");
            getch();
        }
        else
        {
            printf("%56s\n", "Id and Password doesn't match.");
            printf("%52s", "Press any key to continue");
            getch();
            goto login_signup;
        }

        break;
    }
    case 2:
    {
        signup_status = signUp();

        if (signup_status == 1)
        {
            printf("%50s\n", "Sign up successfully");
            printf("%60s\n", "Use name as id and password to sign in.");
            printf("%52s", "Press any key to continue");
        }
        else
        {
            printf("%50s\n", "Some error occurred");
            printf("%52s", "Press any key to continue");
            getch();
            goto login_signup;
        }
        getch();
        goto login_signup;

        break;
    }
    default:
    {
    }
    }
    if (login_status == 1)
    {
    account_page:;
        interactivePage("Account Page");

        printf("\n\n%48s", "Chose any one of above : ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
        {
            interactivePage("Account Status");
            printf("%52s", "Press any key to continue");
            getch();
            goto account_page;

            break;
        }
        case 2:
        {
            wallet();
            printf("%52s", "Press any key to continue");
            getch();
            goto account_page;
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
            printf("%40s", "Press any key to send...\n\n");
            getch();
            printf("%60s\n", "%lld amount has be tranfer from %s to %s.\n", payment_amount, payment_account_number, "4567832138");
            getch();
            goto account_page;
            break;
        }
        case 5:
        {
            interactivePage("Statements");
            printf("%40s", "Press any key...");
            getch();
            goto account_page;
            break;
        }
        default:
        {
            interactivePage("ERROR");
            printf("%42s", "Press any key to continue");
            goto account_page;
        }
        }
    }

    getch();
    return 0;
}