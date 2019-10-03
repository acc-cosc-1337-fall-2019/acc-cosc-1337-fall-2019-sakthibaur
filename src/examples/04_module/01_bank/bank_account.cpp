#include "bank_account.h"
//bank_account.cpp
BankAccount::BankAccount() //special function called a constructor
{
	//code to read balance from database
	balance = 500;
}



void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

int BankAccount::get_balance() const
{
	return balance;
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;
	}
}
