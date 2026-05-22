#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string name;
    int balance;
    string transaction_record;
    int transaction_record_count = 1;

public:
    BankAccount(string name_str);
    string get_name();
    int get_balance();
    int get_transaction_record_count();
    void write_transaction_record(string record);
    void show_transaction_record();
    bool save(int amount);
    bool withdraw(int amount);
    bool transfer(int amount, BankAccount &recipient);
};