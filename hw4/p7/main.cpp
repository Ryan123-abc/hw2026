#include "gcd.h"
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    cout << "Please input 2 numbers(a b): ";
    cin >> a >> b;

    cout << "gcd(" << a << ", " << b << ")" << " = " << gcd(a, b) << endl;
    return 0;
}