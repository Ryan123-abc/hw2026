#include "saving_account.h"

SavingAccount::SavingAccount(string name_str) : BankAccount(name_str) {}

void SavingAccount::calculate_interest(int years) 
{
    if (years > 0) 
    {
        double result = (double)balance * pow(1.0 + 0.016, years);
        balance = (int)result;
    }
}
