void wallet()
{
load_wallet:;
    int wallet_choice;
    interactivePage("Load Wallet");

    printf("\n\n%48s", "Choose any one of above : ");
    scanf("%d", &wallet_choice);

    if (wallet_choice == 1)
    {
        interactivePage("ESEWA");
        printf("\n\n%48s", "Press any key to send...\n");
        getch();

        printf("%lld amount has been send to %lld esewa id.\n", esewa_amount, esewa_id);
    }
    else if (wallet_choice == 2)
    {
        interactivePage("Khalti");
        printf("\n\n%48s", "Press any key to send...\n");
        getch();
        printf("%lld amount has been send to %lld khalti id.\n", khalti_amount, khalti_id);
    }
    // else
    // {
    //     interactivePage("ERROR");
    //     printf("%52s", "Press any key to continue");
    //     getch();
    // }
}