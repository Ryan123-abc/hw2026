#include "decompose.h"
#include <iostream>
using namespace std;

int main()
{
    double fp_num = 0;
    cout << "Please input a floating-point number: ";
    cin >> fp_num;

    cout << "integer part: " << int_part(fp_num) << endl;
    cout << "floating part: " << float_part(fp_num) << endl;
    return 0;
}
