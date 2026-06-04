#include "bank.h"

BankAccount::BankAccount(string name_str){
    name = name_str;
    balance = 0;
    transaction.record = "";
    transaction.count = 1;
}

int BankAccount::get_balance(){
    return balance;
}

void BankAccount::set_balance(int new_balance){
    balance = new_balance;
}

string BankAccount::get_name(){
    return name;
}

void BankAccount::write_record(string record){
    transaction.record += to_string(transaction.count) + " " + record + "\n";
    transaction.count++;
}

void BankAccount::show_record(){
    cout << name << "'s transaction record: " << endl;
    cout << transaction.record;
}

void BankAccount::save(int amount){
    if (amount > 0){
        balance += amount;
        string msg = "[ SUCCESS ] " + name + " saved $" + to_string(amount);
        cout << msg << endl;
        write_record(msg);
    }
    else{
        string msg = "[   FAIL   ] " + name + " failed to save $" + to_string(amount);
        cout << msg << endl;
        write_record(msg);
    }
}

void BankAccount::show_balance(){
    cout << name << "'s current balance: " << balance << endl;
}

void BankAccount::withdraw(int amount){
    if (amount > 0 && balance >= amount){
        balance -= amount;
        string msg = "[ SUCCESS ] " + name + " withdrew $" + to_string(amount);
        cout << msg << endl;
        write_record(msg);
    }
    else{
        string msg = "[   FAIL   ] " + name + " failed to withdraw $" + to_string(amount);
        cout << msg << endl;
        write_record(msg);
    }
}

void BankAccount::transfer(int amount, BankAccount &recipient){
    if (amount > 0 && balance >= amount){
        balance -= amount;
        recipient.set_balance(recipient.get_balance() + amount);
        string msg = "[ SUCCESS ] " + name + " transfered $" + to_string(amount) + " to " + recipient.get_name();
        cout << msg << endl;
        write_record(msg);
    }
    else{
        string msg = "[   FAIL   ] " + name + " failed to transfer $" + to_string(amount) + " to " + recipient.get_name();
        cout << msg << endl;
        write_record(msg);
    }
}
