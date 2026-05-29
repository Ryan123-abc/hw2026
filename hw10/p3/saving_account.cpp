#include "saving_account.h"
#include <cmath>

SavingAccount::SavingAccount(string name_str) : BankAccount(name_str)
{
}

void SavingAccount::calculate_interest(int year)
{
    int current_balance = get_balance();
    int future_balance = static_cast<int>(current_balance * pow(1 + deposit_interest_rate, year));
    set_balance(future_balance);
    
    cout << name << " accrued interest for " << year << " yr(s)." << endl;
    write_record(name + " accrued interest for " + to_string(year) + " yr(s).");
}

void SavingAccount::show_balance()
{
    cout << name << "'s current balance: " << get_balance() << " (Savings Account)" << endl;
}

void SavingAccount::withdraw(int amount)
{
    if (amount > 0 && (amount + handling_fee) <= get_balance()) {
        set_balance(get_balance() - (amount + handling_fee));
        cout << "[ SUCCESS ] " << name << " withdrew $" << amount << " with $" << handling_fee << " handling fee" << endl;
        write_record("[ SUCCESS ] " + name + " withdrew $" + to_string(amount) + " with $" + to_string(handling_fee) + " handling fee");
    } else {
        cout << "[   FAIL   ] " << name << " failed to withdraw $" << amount << endl;
        write_record("[   FAIL   ] " + name + " failed to withdraw $" + to_string(amount));
    }
}

void SavingAccount::transfer(int amount, BankAccount &recipient)
{
    if (amount > 0 && (amount + handling_fee) <= get_balance()) {
        set_balance(get_balance() - (amount + handling_fee));
        recipient.set_balance(recipient.get_balance() + amount);
        cout << "[ SUCCESS ] " << name << " transfered $" << amount << " to " << recipient.get_name() << " with $" << handling_fee << " handling fee" << endl;
        write_record("[ SUCCESS ] " + name + " transfered $" + to_string(amount) + " to " + recipient.get_name() + " with $" + to_string(handling_fee) + " handling fee");
    } else {
        cout << "[   FAIL   ] " << name << " failed to transfer $" << amount << " to " << recipient.get_name() << endl;
        write_record("[   FAIL   ] " + name + " failed to transfer $" + to_string(amount) + " to " + recipient.get_name());
    }
}
