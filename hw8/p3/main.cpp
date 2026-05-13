#include "bank.h"
#define SUCCESS "\e[0;32m[ SUCCESS ]\e[0m " // show "[ SUCCESS ] " with green color
#define FAIL "\e[0;31m[   FAIL  ]\e[0m "      // show "[   FAIL  ] " with red color

class Banking
{
public:
    void show_status(BankAccount a)
    {
        cout << a.get_name() << "\'s current balance: " << a.get_balance() << endl;
    }

    void save(BankAccount &a, int money)
    {
        string output;
        if (a.save(money))
        {
            output = SUCCESS + a.get_name() + " saved $" + to_string(money);
        }
        else
        {
            output = FAIL + a.get_name() + " failed to save $" + to_string(money);
        }
        cout << output << endl;
        a.write_transaction_record(to_string(a.get_transaction_record_count()) + " " + output + "\n");
    }

    void transfer(BankAccount &a, BankAccount &b, int money)
    {
        string output;
        if (a.transfer(money, b))
        {
            output = SUCCESS + a.get_name() + " transfered $" + to_string(money) + " to " + b.get_name();
        }
        else
        {
            output = FAIL + a.get_name() + " failed to transfer $" + to_string(money) + " to " + b.get_name();
        }
        cout << output << endl;
        a.write_transaction_record(to_string(a.get_transaction_record_count()) + " " + output + "\n");
    }

    void withdraw(BankAccount &a, int money)
    {
        string output;
        if (a.withdraw(money))
        {
            output = SUCCESS + a.get_name() + " withdrew $" + to_string(money);
        }
        else
        {
            output = FAIL + a.get_name() + " failed to withdraw $" + to_string(money);
        }
        cout << output << endl;
        a.write_transaction_record(to_string(a.get_transaction_record_count()) + " " + output + "\n");
    }
};

int main()
{
    Banking bank;
    BankAccount Justin("Justin");
    BankAccount Amy("Amy");

    cout << "[1] ------------------------" << endl;
    bank.show_status(Justin);
    bank.show_status(Amy);

    cout << "[2] ------------------------" << endl;
    bank.save(Amy, 4090);
    bank.save(Amy, 0);
    bank.save(Amy, -216);

    cout << "[3] ------------------------" << endl;
    bank.transfer(Amy, Justin, 1080);
    bank.transfer(Amy, Justin, 4050);
    bank.transfer(Amy, Justin, 0);

    cout << "[4] ------------------------" << endl;
    bank.withdraw(Amy, 12000);
    bank.withdraw(Amy, 3000);
    bank.withdraw(Amy, 0);

    cout << "[5] ------------------------" << endl;
    bank.show_status(Amy);
    bank.show_status(Justin);

    cout << "[6] ------------------------" << endl;
    Amy.show_transaction_record();

    return 0;
}