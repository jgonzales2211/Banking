#include <stdio.h>

struct bank_account {
	int number;
	double balance;
	double interest_rate;
};

void update_account(struct bank_account *account) {
	account-> balance *= (1.0 + account -> interest_rate);
}
int main() {
	struct bank_account accounts[] = {
	{10907, 2000.00, 0.015},
	{47112, 5372.25, 0.024},
	{87435, 1800.00, 0.030}
	};
	
	printf("Acct #  Balance\n");
	printf("------  -------\n");
	for (int i = 0; i < sizeof(accounts) / sizeof(accounts[0]); i++) {
		update_account(&accounts[i]);
		printf(" %5d  $%.2f\n", accounts[i].number, accounts[i].balance);
	}
	return 0;
}
