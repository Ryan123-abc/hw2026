#include "bank.h"

class SavingAccount : public BankAccount
{
private:
    double deposit_interest_rate = 0.016;
    int handling_fee = 10;

public:
    SavingAccount(string name_str);
    void calculate_interest(int year);
    void show_balance();
    void withdraw(int amount);
    void transfer(int amount, BankAccount &recipient);
};