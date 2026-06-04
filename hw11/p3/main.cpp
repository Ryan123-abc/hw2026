#include "operator.h"
#include <iostream>
using namespace std;

int main()
{
    string str;
    string needle;
    getline(cin, str);
    getline(cin, needle);

    cout << "Paragraph: " << endl << str << endl << endl;
    cout << "Needle: [" << needle << "]" << endl << endl;
    cout << "Occurrences of needle: " << str / needle << endl;
}