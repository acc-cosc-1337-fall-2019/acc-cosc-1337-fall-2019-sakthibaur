//bank_account.h
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

private:
	int balance;

};

#endif