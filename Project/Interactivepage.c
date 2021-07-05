
void interactivePage(char identify[MAX_LIMIT])
{
    system("cls");
    printf("%51s\n\n",
           "ONLINE BANKING SYSTEM");
    printf("%58s\n\n",
           "=====================================");

    if ((strcmp(identify, "Welcome") == 0))
    {
        printf("%42s\n", "1.Log in");
        printf("%42s\n", "2.Sign up");
    }
    else if (strcmp(identify, "Log in") == 0)
    {
        printf("%38s", "Id: ");
        scanf("%s", username);

        printf("%38s", "Password: ");
        scanf("%s", password);
    }
    else if (strcmp(identify, "Sign Up") == 0)
    {
        printf("%35s", "Name :");
        scanf("%s", user.name);

        printf("%35s", "Address: ");
        scanf("%s", user.address);

        printf("%35s", "Email:");
        scanf("%s", user.email);

        printf("%35s", "Phone Number: ");
        scanf("%s", user.phone_number);

        printf("%35s", "Password: ");
        scanf("%s", password);
    }

    else if (strcmp(identify, "Account Page") == 0)
    {
        printf("%42s\n", "1.Account Status");
        printf("%42s\n", "2.Load Wallet");
        printf("%42s\n", "3.Payment");
        printf("%42s\n", "4.Send Money");
        printf("%42s\n", "5.Statements");
    }

    else if (strcmp(identify, "Account Status") == 0)
    {
        myAccount();
    }
    else if (strcmp(identify, "Load Wallet") == 0)
    {
        printf("%42s\n", "1.Esewa");
        printf("%42s\n", "2.Khalti");
    }
    else if (strcmp(identify, "ESEWA") == 0)
    {

        printf("%42s: ", "Amount");
        scanf("%lld", &esewa_amount);
        printf("%42s: ", "Esewa ID");
        scanf("%lld", &esewa_id);
        printf("%42s", "Purpose: ");
        scanf("%42[^.]", esewa_purpose);
    }
    else if (strcmp(identify, "Khalti") == 0)
    {

        printf("%42s: ", "Amount");
        scanf("%lld", &khalti_amount);
        printf("%42s: ", "Khalti ID");
        scanf("%lld", &khalti_id);
        printf("%42s", "Purpose: ");
        scanf("%[^.]", khalti_purpose);
    }
    else if (strcmp(identify, "Payment") == 0)
    {
        }
    else if (strcmp(identify, "Send Money") == 0)
    {
        printf("%42s", "Amount: ");
        scanf("%lld", &payment_amount);
        printf("%42s", "To Account: ");
        scanf("%s", payment_account_number);
        printf("%42s", "Account Name: ");
        scanf("%s", payment_account_name);
        printf("%42s%s", "From Account: ", "");
    }
    else if (strcmp(identify, "Statements") == 0)
    {
        statement();
    }
    
    else if (strcmp(identify, "ERROR") == 0)
    {
        printf("%42s\n", "!!!ERROR!!!");
    }
    printf("\n%58s\n",
           "=====================================");
}
