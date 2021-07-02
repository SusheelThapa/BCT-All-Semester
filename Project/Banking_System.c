#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 100

char username[MAX_LIMIT], password[MAX_LIMIT];

void dataForm()
{
    printf("User name: ");
    scanf("%s", username);
    printf("Password : ");
    scanf("%s", password);
}
int logIn()
{
    dataForm();

    FILE *in = fopen("Login.txt", "r");

    char user_id[MAX_LIMIT], pass_code[MAX_LIMIT];

    fscanf(in, "%s", user_id);

    while (strcmp(user_id, "") != 0)
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
void signUp()
{
    dataForm();

    FILE *out = fopen("Login.txt", "a");
    printf("%s", username);
    fprintf(out, "%s %s\n", username, password);
    fclose(out);
}

int main()
{
    printf("%s",
           "ONLINE BANKING SYSTEM");
    printf("%s",
           "========================================");

    getch();
    return 0;
}