int signUp()
{
    char user_name[MAX_LIMIT], user_password[MAX_LIMIT], user_address[MAX_LIMIT], user_phone_number[MAX_LIMIT], user_email[MAX_LIMIT];
    interactivePage("Sign Up");
    strcpy(username, user.name);

    FILE *outLogIn = fopen("Login.txt", "a+");
    FILE *outLogIn1 = fopen("Login1.txt", "a+");
    fscanf(outLogIn, "%s", user_name);
    while (1)
    {
        if (strcmp(user_name, "END") != 0)
        {
            fprintf(outLogIn1, "%s ", user_name);
            fscanf(outLogIn, "%s", user_password);
            fprintf(outLogIn1, "%s\n", user_password);
            fscanf(outLogIn, "%s", user_name);
        }
        else
        {
            break;
        }
    }
    fprintf(outLogIn1, "%s %s\n", username, password);
    fprintf(outLogIn1, "%s", "END");
    fclose(outLogIn);
    fclose(outLogIn1);

    system("del Login.txt");
    system("ren Login1.txt Login.txt");

    FILE *outUserData = fopen("UserData.txt", "r");
    FILE *outUserData1 = fopen("UserData1.txt", "w");

    fscanf(outUserData, "%s", user_name);
    while (1)
    {
        if (strcmp(user_name, "END") != 0)
        {
            fprintf(outUserData1, "%s ", user_name);
            fscanf(outUserData, "%s %s %s", user_address, user_phone_number, user_email);
            fprintf(outUserData1, "%s %s %s\n", user_address, user_phone_number, user_email);
            fscanf(outUserData, "%s", user_name);
        }
        else
        {
            break;
        }
    }
    fprintf(outUserData1, "%s %s %s %s\n", user.name, user.address, user.phone_number, user.email);
    fprintf(outUserData1, "%s", "END");
    fclose(outUserData);
    fclose(outUserData1);

    system("del UserData.txt");
    system("ren UserData1.txt UserData.txt");

    return 1;
}