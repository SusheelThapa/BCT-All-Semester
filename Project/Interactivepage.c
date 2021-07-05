
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
        
        accountStatus();
    }
    else if (strcmp(identify, "Load Wallet") == 0)
    {
        printf("%42s\n", "1.Esewa");
        printf("%42s\n", "2.Khalti");
        
        
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
    else if (strcmp(identify, "ESEWA") == 0) {

    }
    else if (strcmp(identify, "Khalti") == 0) {

    }
    else if (strcmp(identify, "ERROR") == 0)
    {
        printf("%42s\n", "!!!ERROR!!!");
    }
    printf("\n%58s\n",
           "=====================================");
}
