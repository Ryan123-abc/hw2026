#include "area.h"
#include <iostream>
using namespace std;
int main()
{

    int select = 0;

    cout << "Please choose a shape to calculate its area (1: Square, 2: Triangle): ";
    cin >> select;

    switch (select)
    {
        case 1:
        {
            double side_length = 0;
            cout << "[Square] Please input the side length: ";
            cin >> side_length;
            cout << "area = " << area(side_length) << endl;
            return 0;
        }
        case 2:
        {
            double base = 0, height = 0;
            cout << "[Triangle] Please input the base and height(a b): ";
            cin >> base >> height;
            cout << "area = " << area(base, height) << endl;
            return 0;
        }
        default:
            cout << "Wrong Input!" << endl;
            return -1;
    }
    return 0;
}