#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string name;
    int balance;
    struct
    {
        string record;
        int count = 1;
    } transaction;

public:
    BankAccount(string name_str);
    int get_balance();
    void set_balance(int new_balance);
    string get_name();
    void write_record(string record);
    void show_record();
    void save(int amount);
    virtual void show_balance();
    virtual void withdraw(int amount);
    virtual void transfer(int amount, BankAccount &recipient);
};