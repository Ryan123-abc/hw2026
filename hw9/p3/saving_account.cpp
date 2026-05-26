#include "saving_account.h"

SavingAccount::SavingAccount(string name_str) : BankAccount(name_str) {}

void SavingAccount::calculate_interest(int years) 
{
    this->balance = (int)(this->balance * pow((1 + this->deposit_interest_rate), years));
}
