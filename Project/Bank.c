#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    strcpy(Option[10].option, "2.Load Wallet");
    strcpy(Option[11].option, "3.Payment");
    strcpy(Option[12].option, "4.Send Money");

    strcpy(Option[13].option, "Account Holder Name:");
    strcpy(Option[14].option, "Account Number: ");
    strcpy(Option[15].option, "Account Total Balance:");
    strcpy(Option[16].option, "Statements: ");

    strcpy(Option[17].option, "ESEWA");
    strcpy(Option[18].option, "Khalti");
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
    }
    else if (strcmp(identify, "Account Status") == 0)
    {
        printf("%42s\n", Option[13].option);
        printf("%42s\n", Option[14].option);
        printf("%42s\n", Option[15].option);
        printf("%42s\n", Option[16].option);
    }
    else if (strcmp(identify,"Load Wallet")==0){
        printf("%42s\n", Option[17].option);
        printf("%42s\n", Option[18].option);
    }
    else if (strcmp(identify,"Payment")==0){

    }
    else if (strcmp(identify,"Send Money")==0){

    }
    else if (strcmp(identify,"ERROR")==0){
        printf("%42s\n", "!!!ERROR!!!");
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
