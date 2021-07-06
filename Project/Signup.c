int signUp()
{
    char user_name[MAX_LIMIT], user_password[MAX_LIMIT], user_address[MAX_LIMIT], user_phone_number[MAX_LIMIT], user_email[MAX_LIMIT], user_account_number[MAX_LIMIT] = "123456789", user_balance[MAX_LIMIT]="0";
    
    interactivePage("Sign Up");

    strcpy(username, user.name);

    /*Printing data to login.txt*/
    FILE *outLogIn = fopen("Login.txt", "a+");
    FILE *outLogIn1 = fopen("Login1.txt", "a+");

    /*Loop to copy data from prevoius files into new files*/
    fscanf(outLogIn, "%s", user_name);
    do
    {
        if ((strcmp(user_name, "END") == 0))
        {
            break;
        }
        else {
            fprintf(outLogIn1, "%s ", user_name);
            fscanf(outLogIn, "%s", user_password);
            fprintf(outLogIn1, "%s\n", user_password);
            fscanf(outLogIn, "%s", user_name);
        }

    } while (1);
    
    /*Add new records*/
    fprintf(outLogIn1, "%s %s\n", username, password);
    fprintf(outLogIn1, "%s", "END");

    /*Closes the files*/
    fclose(outLogIn);
    fclose(outLogIn1);

    /*Deleting old login.txt and renaming new  login1.txt to login.txt*/
    system("del Login.txt");
    system("ren Login1.txt Login.txt");


    /*Print data to userdata.txt*/
    FILE *outUserData = fopen("UserData.txt", "r");
    FILE *outUserData1 = fopen("UserData1.txt", "w");

    fscanf(outUserData, "%s", user_name);
    do
        {
            if ((strcmp(user_name, "END") == 0))
            {
                break;
            }
            else {
                fprintf(outUserData1, "%s ", user_name);
                fscanf(outUserData, "%s %s %s %s", user_address, user_phone_number, user_email, user_account_number);
                fprintf(outUserData1, "%s %s %s %s\n", user_address, user_phone_number, user_email, user_account_number);
                fscanf(outUserData, "%s", user_name);
            }
       
    } while(1);

    fprintf(outUserData1, "%s %s %s %s %s\n", user.name, user.address, user.phone_number, user.email,user_account_number);
    fprintf(outUserData1, "%s", "END");

    fclose(outUserData);
    fclose(outUserData1);

    /*Deleting old UserData.txt and renaming new UserData1.txt to UserData.txt*/
    system("del UserData.txt");
    system("ren UserData1.txt UserData.txt");

    FILE* outAccountStatus = fopen("Accountstatus.txt", "a+");
    FILE* outAccountStatus1 = fopen("Accountstatus1.txt", "a+");

    fscanf(outAccountStatus, "%s", user_name);
    do
    {
        if ((strcmp(user_name, "END") == 0))
        {
            break;
        }
        else {
        fprintf(outAccountStatus1, "%s ", user_name);
            fscanf(outAccountStatus, "%s %s", user_account_number, user_balance);
            //fprintf(outAccountStatus1, "%s %s\n", user_account_number, user_balance);
            fprintf(outAccountStatus1, "%s %s\n", user_account_number, user_balance);
        }
        fscanf(outAccountStatus, "%s", user_name);
    }while (1);

    //fprintf(outAccountStatus1, "%s %s %s\n", user.name, user_account_number,user_balance);
    fprintf(outAccountStatus1, "%s %s %s\n", user.name, user_account_number,user_balance);

    fprintf(outAccountStatus1, "END");

    fclose(outAccountStatus);
    fclose(outAccountStatus1);

    /*Deleting old Accountstatus.txt and renaming new  Accountstatus1.txt to Accountstatus.txt*/
    system("del Accountstatus.txt");
    system("ren Accountstatus1.txt Accountstatus.txt");
    return 1;
}