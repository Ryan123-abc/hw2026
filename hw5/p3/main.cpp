#include "phone_number.h"
#include <iostream>
using namespace std;

int main()
{
    string phone_number;
    cout << "Please enter your phone number: ";
    getline(cin, phone_number);
    if (!is_correct_format(phone_number))
    {
        cout << "[" << phone_number << "] is invaild phone number format!" << endl;
        return -1;
    }
    cout << "Your phone number is ["
         << formatted(phone_number) << "], which is valid." << endl;
    return 0;
}
