#include "caesar_cipher_decode.h"
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "[Input cipher]: ";
    getline(cin, str);
    caesar_decode(str);
    cout << "[ Plaintext ]:  ";
    cout << str << endl;
}
