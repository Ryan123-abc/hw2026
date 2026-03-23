#include "branch.h"
#include <iostream>
using namespace std;

int main()
{
    int select = 0;
    double subtotal = 0;
    cout << "Welcome to Matsons!" << endl;
    cout << "Choose a region(1: Taiwan, 2: Hong Kong): ";
    cin >> select;

    if (select < 1 || select > 2)
    {
        cout << "Unknown region!" << endl;
        return -1;
    }

    cout << "How much should the customer pay(excluding tax)? ";
    cin >> subtotal;

    cout << "Customer should pay $";
    switch (select)
    {
        case 1:

            cout << tw::with_tax(subtotal);
            break;
        case 2:
            cout << hk::with_tax(subtotal);
            break;
        default:
            cout << "Wrong Input!" << endl;
            return -1;
    }
    cout << endl;

    return 0;
}