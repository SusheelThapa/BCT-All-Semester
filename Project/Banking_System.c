#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

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
int login_status;

struct BankingOptions Option[100];
struct UserDetails user;

void option()
{
    strcpy(Option[1].option, "1.Log in");
    strcpy(Option[2].option, "2.SignUp");

    strcpy(Option[3].option, "Id: ");
    strcpy(Option[4].option, "Password: ");

    strcpy(Option[5].option, "Name: ");
    strcpy(Option[6].option, "Address: ");
    strcpy(Option[7].option, "Phone: ");
    strcpy(Option[8].option, "Email: ");

    strcpy(Option[9].option, "1.Account Status");
    strcpy(Option[10].option, "2.Load Fund");
    strcpy(Option[11].option, "3.Payment");
    strcpy(Option[12].option, "4.Send Money");
}

void interactivePage(char identify[MAX_LIMIT])
{
    option();
    system("cls");
    printf("%51s\n\n",
           "ONLINE BANKING SYSTEM");
    printf("%58s\n\n",
           "=====================================");

    if ((strcmp(identify, "Welcome") == 0))
    {
        printf("%42s\n", Option[1].option);
        printf("%42s\n", Option[2].option);
    }
    else if (strcmp(identify, "Log in") == 0)
    {
        printf("%38s", Option[3].option);
        scanf("%s", username);

        printf("%38s", Option[4].option);
        scanf("%s", password);
    }
    else if (strcmp(identify, "Sign Up") == 0)
    {
        printf("%35s", Option[5].option);
        scanf("%s", user.name);

        printf("%35s", Option[6].option);
        scanf("%s", user.address);

        printf("%35s", Option[8].option);
        scanf("%s", user.email);

        printf("%35s", Option[7].option);
        scanf("%s", user.phone_number);

        printf("%35s", Option[4].option);
        scanf("%s", password);
    }
    else if (strcmp(identify, "Account Page") == 0)
    {
        printf("%42s\n", Option[9].option);
        printf("%42s\n", Option[10].option);
        printf("%42s\n", Option[11].option);
        printf("%42s\n", Option[12].option);
        // printf("%42s\n", Option[1].option);
        // printf("%42s\n", Option[2].option);
    }
    printf("\n%58s\n",
           "=====================================");
}

int logIn()
{
    interactivePage("Log in");

    FILE *in = fopen("Login.txt", "r");

    char user_id[MAX_LIMIT], pass_code[MAX_LIMIT];

    fscanf(in, "%s", user_id);

    while (strcmp(user_id, "END") != 0)
    {
        if (strcmp(user_id, username) == 0)
        {
            fscanf(in, "%s", pass_code);
            if (strcmp(pass_code, password) == 0)
            {
                return 1;
            }
            else
            {
                fscanf(in, "%s", pass_code);
            }
        }
        fscanf(in, "%s", user_id);
    }
    fclose(in);
    return 0;
}
int signUp()
{
    interactivePage("Sign Up");
    strcpy(username, user.name);

    FILE *outLogIn = fopen("Login.txt", "a+");

    fprintf(outLogIn, "%s %s\n", username, password);

    fclose(outLogIn);

    FILE *outUserData = fopen("UserData.txt", "a");
    fprintf(outUserData, "%s %s %s %s\n", user.name, user.address, user.phone_number, user.email);

    fclose(outUserData);
    return 1;
}
int main()
{
    int n;
    int signup_status;

    interactivePage("Welcome");

    printf("\n\n%48s", "Chose any one of above : ");
    scanf("%d", &n);

    switch (n)
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
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Account Status");
            break;
        }
        case 2:
        {
            printf("Load Fund");
            break;
        }
        case 3:
        {
            printf("Payment");
            break;
        }
        case 4:
        {
            printf("Send Money");
            break;
        }
        default:
        {
            printf("ERROR");
        }
        }
    }

    getch();
    return 0;
}