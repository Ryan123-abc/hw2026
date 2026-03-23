#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string date, time, atm, bank, acc, amount, fee;

    getline(cin, date, ',');
    getline(cin, time, ',');
    getline(cin, atm, ',');
    getline(cin, bank, ',');
    getline(cin, acc, ',');
    getline(cin, amount, ',');
    getline(cin, fee);

    string d = date.substr(0,3) + "/" + date.substr(3,2) + "/" + date.substr(5,2);
    string t = time.substr(0,2) + ":" + time.substr(2,2) + ":" + time.substr(4,2);

    cout << "---------------------------------------\n";
    cout << "    Bank of \"Fantastic\" ATM Receipt\n";
    cout << "---------------------------------------\n";

    cout << left << setw(20) << "Transaction Date:"   << right << setw(19) << d << endl;
    cout << left << setw(20) << "Transaction Time:"   << right << setw(19) << t << endl;
    cout << left << setw(20) << "ATM Number:"         << right << setw(19) << atm << endl;
    cout << left << setw(20) << "Bank Code:"          << right << setw(19) << bank << endl;
    cout << left << setw(20) << "Account:"            << right << setw(19) << acc << endl;
    cout << left << setw(20) << "Withdrawal Amount:"  << right << setw(19) << amount << endl;
    cout << left << setw(20) << "Handling Charge:"    << right << setw(19) << fee << endl;

    cout << "---------------------------------------\n";

    return 0;
}
