//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H //header guards-to prevent class redefinition
#define BANK_ACCOUNT_H
class BankAccount
{

public:
	BankAccount();
	BankAccount(int b) : balance(b) {};//inline constructor
	void deposit(int amount);
	int get_balance() const; //const makes class memebers read only
	void BankAccount::withdraw(int amount);
	friend void display(const BankAccount& account);
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);
	friend std::istream & operator >>(std::istream&in, BankAccount & b);//no const bc we have to be able to modify the data

private:
	int balance;

};

#endif