

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
        printf("%42s\n", Option[13].option);
    }
    else if (strcmp(identify, "Account Status") == 0)
    {
        printf("%42s\n", Option[14].option);
        printf("%42s\n", Option[15].option);
        printf("%42s\n", Option[16].option);
    }
    else if (strcmp(identify, "Load Wallet") == 0)
    {
        printf("%42s\n", Option[17].option);
        printf("%42s\n", Option[18].option);
    }
    else if (strcmp(identify, "Payment") == 0)
    {
    }
    else if (strcmp(identify, "Send Money") == 0)
    {
    }
    else if (strcmp(identify, "Statements") == 0) {
        statement();
    }
    else if (strcmp(identify, "ERROR") == 0)
    {
        printf("%42s\n", "!!!ERROR!!!");
    }
    printf("\n%58s\n",
           "=====================================");
}
