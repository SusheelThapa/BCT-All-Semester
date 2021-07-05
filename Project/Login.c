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
            
        }
        fscanf(in, "%s", user_id);
    }
    fclose(in);
    return 0;
}
