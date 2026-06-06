#include "saving_account.h"
#include <cmath>

SavingAccount::SavingAccount(string name_str) : BankAccount(name_str){

}
void SavingAccount::calculate_interest(int year){
    double current_balance = get_balance() * pow((1.0 + deposit_interest_rate), year);
    set_balance((int)current_balance);

    string msg = get_name() + " accrued interest for " + to_string(year) + " yr(s).";
    cout << msg << endl;
    write_record(msg);
}

void SavingAccount::show_balance(){
    cout << get_name() << "'s current balance: " << get_balance() << " (Savings Account)" << endl;
}

void SavingAccount::withdraw(int amount){
    if (amount > 0 && get_balance() >= (amount + handling_fee)){
        set_balance(get_balance() - (amount + handling_fee));
        string msg = "[ SUCCESS ] " + get_name() + " withdrew $" + to_string(amount) + " with $" + to_string(handling_fee) + " handling fee";
        cout << msg << endl;
        write_record(msg);
    }
    else{
        string msg = "[   FAIL  ] " + get_name() + " failed to withdraw $" + to_string(amount);
        cout << msg << endl;
        write_record(msg);
    }
}

void SavingAccount::transfer(int amount, BankAccount &recipient){
    if (amount > 0 && get_balance() >= (amount + handling_fee)){
        set_balance(get_balance() - (amount + handling_fee));
        recipient.set_balance(recipient.get_balance() + amount);
        string msg = "[ SUCCESS ] " + get_name() + " transfered $" + to_string(amount) + " to " + recipient.get_name() + " with $" + to_string(handling_fee) + " handling fee";
        cout << msg << endl;
        write_record(msg);
    }
    else{
        string msg = "[   FAIL  ] " + get_name() + " failed to transfer $" + to_string(amount) + " to " + recipient.get_name();
        cout << msg << endl;
        write_record(msg);
    }
}
