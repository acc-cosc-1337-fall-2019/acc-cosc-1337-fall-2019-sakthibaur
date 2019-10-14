//customer.h
#include<iostream>
#include<vector>
#include "bank_account.h"

using std::vector;
using std::ostream;

class Customer
{
public:
	void add_account(BankAccount act);
	friend ostream& operator<<(ostream& out, const Customer& act);

private:
	vector<BankAccount> accounts;
	int total_balance{ 0 };
};