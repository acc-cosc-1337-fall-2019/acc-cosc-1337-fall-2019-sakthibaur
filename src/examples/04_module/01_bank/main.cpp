#include<iostream>
#include<vector>
#include "bank_account.h"

using std::cout;
using std::vector;

int main()
{
	vector<BankAccount> accounts;
	accounts.push_back(BankAccount());
	// BankAccount b1;
	// accounts.push_back(b1); these two lines of code do the same thing as the line above
	accounts.push_back(BankAccount(750));

	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance() << "\n";
	}

	return 0;
}