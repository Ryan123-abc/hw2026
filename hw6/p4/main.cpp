#include "bank.h"

void show_div()
{
    cout << "----------------------" << endl;
}

int main()
{
    BankAccount Bob("Bob");
    BankAccount Justin("Justin");
    BankAccount Amy("Amy");

    show_div();

    Bob.show_balance();
    Justin.show_balance();
    Amy.show_balance();

    show_div(); // ------------------

    Bob.save(1945);
    Justin.save(476);
    Amy.save(1453);

    show_div(); // ------------------

    Bob.withdraw(1900);
    Bob.transfer(46, Justin);
    Bob.transfer(45, Amy);
    Bob.show_balance();

    show_div(); // ------------------

    Amy.show_balance();
    Amy.withdraw(15);
    Amy.show_balance();
    Amy.withdraw(2000);
    Amy.withdraw(1500);
    Amy.withdraw(1400);
    Amy.show_balance();

    show_div(); // ------------------

    Justin.transfer(1453, Amy);
    Justin.transfer(12, Amy);
    Justin.show_balance();
    Amy.show_balance();

    return 0;
}