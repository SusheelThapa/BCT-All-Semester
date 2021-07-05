void myAccount() {

	char user_name[MAX_LIMIT], account_number[MAX_LIMIT], balance[MAX_LIMIT];

	FILE    *outAccountStatus = fopen("Accountstatus.txt", "r");

	fscanf(outAccountStatus, "%s", user_name);
	while (strcmp(user_name, "END") != 0) {
		if (strcmp(user_name, username) == 0) {
			fscanf(outAccountStatus, "%s %s", account_number, balance);
			printf("%42s %s\n", "Account Holder Name: ", user_name);
			printf("%42s %s\n", "Account Number: ", account_number);
			printf("%42s %s\n", "Account Total Balance: ", balance);
			fscanf(outAccountStatus, "%s", user_name);

		}
	}
}

