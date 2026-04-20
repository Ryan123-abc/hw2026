#include "swap.h"
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Please input two integers(a b): ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << " and b = " << b << endl;
    swap(&a, &b);
    cout << "After swapping:  a = " << a << " and b = " << b << endl;
    return 0;
}