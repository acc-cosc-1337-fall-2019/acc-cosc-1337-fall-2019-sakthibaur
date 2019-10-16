//savings_account.h
#include "bank_account.h"

class SavingsAccount : public BankAccount

{
public:

	SavingsAccount(int bal = 0, float i = .09) :
		BankAccount(bal), interest_rate(i) {}

	void add_interest();
	int get_balance() const;

private:

	const float interest_rate;

	const float time = 1.0 / 12.0;

};