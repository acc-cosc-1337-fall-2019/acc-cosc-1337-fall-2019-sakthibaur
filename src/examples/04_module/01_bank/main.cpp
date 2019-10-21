#include<iostream>
#include<vector>
#include"checking_account.h"
#include "savings_account.h"
//#include "bank_account.h"
//#include "atm.h"
//#include "customer.h"

using std::cout; using std::cin;
using std::vector;

int main()
{
	CheckingAccount checking(1500);
	cout << "\n Checking get_balance: " << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	cout<<"\n Savings get_balance: " << savings.get_balance()<<"\n";

	BankAccount& account = savings;
	cout << "\n Ref to savings get_balance: " << account.get_balance() << "\n";
	return 0;



	//code from older examples below-
	//cout << "Calls bank account overload ostream"<<savings;
	/*	cout << a;

	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;
	cout << c;*/
	//cout << a.get_balance();
		//CheckingAccount b(1500);
		//CheckingAccount c = a + b;
	//BankAccount(1500);
	//CheckingAccount a(1000);
	//Customer customer;
	//customer.add_account(BankAccount(500));
	//customer.add_account(BankAccount(1500));
	//customer.add_account(BankAccount(5000));

	//cout << customer;
	//vector<BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) };
	//BankAccount a;
	//BankAccount b = a; //also creates copy (will have two diff reference locations)
	//display(a); //class friend function
	//scan card and enter pin
	//get customer records from db into a vector (since usually have multiple accounts-saving, checking, etc.)

	//for (auto act : accounts)
	//{
	//	cout << act;
	//}

	///BankAccount account(9000);
	//ATM atm(accounts[0]);
	//atm.deposit(100);
	//atm.withdraw(50);
	//atm.display_balance();
	//cin >> a;
	//cout << a; //overload operator

	//vector<BankAccount> accounts;
	//accounts.push_back(BankAccount());
	// BankAccount b1;
	// accounts.push_back(b1); these two lines of code do the same thing as the line above
	//accounts.push_back(BankAccount(750));

	//for (auto account : accounts)
	//{
		//cout << "Balance: " << account.get_balance() << "\n";
	//}

}