#include "bank.h"

BankAccount::BankAccount(string name_str) 
{
    name = name_str;
    balance = 0;
    transaction_record = "";
    transaction_record_count = 1;
}

string BankAccount::get_name() 
{
    return name;
}

int BankAccount::get_balance() 
{
    return balance;
}

int BankAccount::get_transaction_record_count() 
{
    return transaction_record_count;
}

void BankAccount::write_transaction_record(string record) 
{
    transaction_record += record;
    transaction_record_count++;
}

void BankAccount::show_transaction_record() 
{
    cout << name << "'s transaction record:\n" << transaction_record;
}

bool BankAccount::save(int amount) 
{
    if (amount > 0) 
    {
        balance += amount;
        return true;
    }
    return false;
}

bool BankAccount::withdraw(int amount) 
{
    if (amount > 0 && balance >= amount) 
    {
        balance -= amount;
        return true;
    }
    return false;
}

bool BankAccount::transfer(int amount, BankAccount &recipient) 
{
    if (amount > 0 && balance >= amount) 
    {
        balance -= amount;
        recipient.save(amount);
        return true;
    }
    return false;
}
