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