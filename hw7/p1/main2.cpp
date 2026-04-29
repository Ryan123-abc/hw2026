#include "bank.h"

void show_div()
{
    cout << "----------------------" << endl;
}

int main()
{
    BankAccount Austin("Austin");
    BankAccount Jessica("Jessica");
    BankAccount Alison("Alison");

    show_div(); // ------------------

    Austin.show_balance();
    Jessica.show_balance();
    Alison.show_balance();

    show_div(); // ------------------

    Austin.save(1945);
    Austin.save(20000);
    Jessica.save(92456);
    Alison.save(453459);

    show_div(); // ------------------

    Austin.show_balance();
    Jessica.show_balance();
    Alison.show_balance();

    show_div(); // ------------------

    Austin.withdraw(1900);
    Austin.transfer(892314, Jessica);
    Jessica.transfer(84298, Alison);
    Alison.transfer(35545723, Austin);

    show_div(); // ------------------

    Austin.show_balance();
    Jessica.show_balance();
    Alison.show_balance();

    show_div(); // ------------------

    Alison.show_balance();
    Alison.withdraw(15);
    Alison.show_balance();
    Alison.withdraw(78245);
    Alison.withdraw(19855124);
    Alison.withdraw(19834565);
    Alison.show_balance();
    Alison.save(89412354);
    Alison.show_balance();

    return 0;
}