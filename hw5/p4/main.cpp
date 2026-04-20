#include "trim.h"
#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Please enter a string: ";
    getline(cin, str);
    trim(str);
    cout << "Trimmed string is [" << str << "]" << endl;
    return 0;
}