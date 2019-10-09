#include<iostream>
#include<vector>
#include "atm.h"
//#include "bank_account.h"

using std::cout; using std::cin;
using std::vector;

int main()
{
	BankAccount a;
	BankAccount b = a; //also creates copy (will have two diff reference locations)
	display(a); //class friend function
	//scan card and enter pin
	//get customer records from db into a vector (since usually have multiple accounts-saving, checking, etc.)
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) };

	for (auto act : accounts)
	{
		cout << act;
	}

	BankAccount account(9000);
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a; //overload operator

	//vector<BankAccount> accounts;
	//accounts.push_back(BankAccount());
	// BankAccount b1;
	// accounts.push_back(b1); these two lines of code do the same thing as the line above
	//accounts.push_back(BankAccount(750));

	//for (auto account : accounts)
	//{
		//cout << "Balance: " << account.get_balance() << "\n";
	//}

	return 0;
}