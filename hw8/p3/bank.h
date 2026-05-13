#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int balance;
    string transaction_record;
    int record_count;

public:
    BankAccount(string n);
    string get_name();
    int get_balance();
    int get_transaction_record_count();
    
    bool save(int money);
    bool withdraw(int money);
    bool transfer(int money, BankAccount &target);
    
    void write_transaction_record(string record);
    void show_transaction_record();
};
