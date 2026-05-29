#include "saving_account.h"
using namespace std;

int main()
{
    BankAccount * customer[3];
    BankAccount Justin("Justin");
    BankAccount Amy("Amy");
    SavingAccount Phineas("Phineas");
    customer[0] = &Justin;
    customer[1] = &Amy;
    customer[2] = &Phineas;

    cout << "[1] ------------------------" << endl;
    customer[0]->show_balance();
    customer[1]->show_balance();

    cout << "[2] ------------------------" << endl;
    customer[1]->save(4090);
    customer[1]->save(0);
    customer[1]->save(-216);

    cout << "[3] ------------------------" << endl;
    customer[1]->transfer(1080, Justin);
    customer[1]->transfer(4050, Justin);
    customer[1]->transfer(0, Justin);
    customer[1]->transfer(-512, Justin);

    cout << "[4] ------------------------" << endl;
    customer[1]->withdraw(12000);
    customer[1]->withdraw(3000);
    customer[1]->withdraw(0);

    cout << "[5] ------------------------" << endl;
    customer[0]->show_balance();
    customer[1]->show_balance();

    cout << "[6] ------------------------" << endl;
    customer[1]->show_record();

    cout << "[7] ------------------------" << endl;
    customer[2]->show_balance();
    customer[2]->save(10000);
    customer[2]->show_balance();
    Phineas.calculate_interest(10); // for 10 years
    customer[2]->show_balance();

    cout << "[8] ------------------------" << endl;
    customer[2]->withdraw(450);
    customer[2]->show_balance();

    cout << "[9] ------------------------" << endl;
    customer[2]->show_balance();
    customer[2]->transfer(10, Amy);
    customer[2]->show_balance();
    customer[1]->show_balance();

    cout << "[10] ------------------------" << endl;
    customer[2]->withdraw(11231);
    customer[2]->show_balance();
    customer[2]->transfer(11231, Justin);
    customer[2]->show_balance();
    customer[2]->withdraw(11230);
    customer[2]->show_balance();

    cout << "[11] ------------------------" << endl;
    customer[2]->show_record();

    return 0;
}