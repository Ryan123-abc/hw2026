#include "bank.h"

BankAccount::BankAccount(string name_str)
{
    name = name_str;
    balance = 0;
    transaction.record = "";
    transaction.count = 1;
}

int BankAccount::get_balance()
{
    return balance;
}

void BankAccount::set_balance(int new_balance)
{
    balance = new_balance;
}

string BankAccount::get_name()
{
    return name;
}

void BankAccount::write_record(string record)
{
    if (!transaction.record.empty()) {
        transaction.record += "\n";
    }
    transaction.record += to_string(transaction.count) + " " + record;
    transaction.count++;
}

void BankAccount::show_record()
{
    cout << name << "'s transaction record:" << endl;
    if (!transaction.record.empty()) {
        cout << transaction.record << endl;
    }
}

void BankAccount::save(int amount)
{
    if (amount > 0) {
        balance += amount;
        cout << "[ SUCCESS ] " << name << " saved $" << amount << endl;
        write_record("[ SUCCESS ] " + name + " saved $" + to_string(amount));
    } else {
        cout << "[   FAIL   ] " << name << " failed to saved $" << amount << endl;
        write_record("[   FAIL   ] " + name + " failed to saved $" + to_string(amount));
    }
}

void BankAccount::show_balance()
{
    cout << name << "'s current balance: " << balance << endl;
}

void BankAccount::withdraw(int amount)
{
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "[ SUCCESS ] " << name << " withdrew $" << amount << endl;
        write_record("[ SUCCESS ] " + name + " withdrew $" + to_string(amount));
    } else {
        cout << "[   FAIL   ] " << name << " failed to withdraw $" << amount << endl;
        write_record("[   FAIL   ] " + name + " failed to withdraw $" + to_string(amount));
    }
}

void BankAccount::transfer(int amount, BankAccount &recipient)
{
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        recipient.set_balance(recipient.get_balance() + amount);
        cout << "[ SUCCESS ] " << name << " transfered $" << amount << " to " << recipient.get_name() << endl;
        write_record("[ SUCCESS ] " + name + " transfered $" + to_string(amount) + " to " + recipient.get_name());
    } else {
        cout << "[   FAIL   ] " << name << " failed to transfer $" << amount << " to " << recipient.get_name() << endl;
        write_record("[   FAIL   ] " + name + " failed to transfer $" + to_string(amount) + " to " + recipient.get_name());
    }
}
