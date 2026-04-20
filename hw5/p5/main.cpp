#include "palindrome.h"
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Please enter a string: ";
    getline(cin, str);
    cout << "[" << str << "] ";
    if (is_palindrome(str))
    {
        cout << "is a palindrome string.";
    }
    else
    {
        cout << "is not a palindrome string.";
    }
    cout << endl;
    return 0;
}