#include"bank.h"
#include <cmath>

class SavingAccount : public BankAccount 
{
private:
	double deposit_interest_rate = 0.016;
	int handling_fee = 5;

public:
    SavingAccount(string name_str);
    void calculate_interest(int years);
};
