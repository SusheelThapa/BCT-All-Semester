#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


void statement()
{
    char data[100], transaction_name[100], send_receive[100], remain_balance[100], name[100];
    printf("Account Holder Name: %s\n\n", username);
    printf("%-15s %-15s %-15s %-15s\n\n", "Date", "Transaction", "Send/Receive", "Remaining Balance");
    printf("====================================================\n\n");
    FILE *outStatement = fopen("Statements.txt", "r");
    fscanf(outStatement, "%s", name);

    while (strcmp(name, "END") != 0)
    {
        if (strcmp(name, username) == 0)
        {
            fscanf(outStatement, "%s %s %s %s", data, transaction_name, send_receive, remain_balance);
            printf("%-15s %-15s %-15s %-15s\n", data, transaction_name, send_receive, remain_balance);
            // break;
        }
        fscanf(outStatement, "%s", name);
    }
}


