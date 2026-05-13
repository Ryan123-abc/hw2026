#include "bank.h"

BankAccount::BankAccount(string n) {
    name = n;
    balance = 0;
    transaction_record = "";
    record_count = 1;
}

string BankAccount::get_name() {
    return name;
}

int BankAccount::get_balance() {
    return balance;
}

int BankAccount::get_transaction_record_count() {
    return record_count;
}

bool BankAccount::save(int money) {
    if (money > 0) {
        balance += money;
        return true;
    }
    return false;
}

bool BankAccount::withdraw(int money) {
    if (money > 0 && balance >= money) {
        balance -= money;
        return true;
    }
    return false;
}

bool BankAccount::transfer(int money, BankAccount &target) {
    if (money > 0 && balance >= money) {
        balance -= money;
        target.save(money);
        return true;
    }
    return false;
}

void BankAccount::write_transaction_record(string record) {
    transaction_record += record;
    record_count++;
}

void BankAccount::show_transaction_record() {
    cout << name << "'s transaction record: " << endl;
    cout << transaction_record;
}
