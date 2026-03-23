#include "grade.h"
#include <iostream>
using namespace std;

int main()
{
    int arr_i[10], data_type = 0;
    double arr_d[10];

    cout << "Should the grades be entered as integers(1) or floats(2)? ";
    cin >> data_type;

    if ((data_type < 1) || (data_type > 2))
    {
        cout << "Wrong Input!" << endl;
        return -1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << ": ";
        if (data_type == 1)
            cin >> arr_i[i];
        else
            cin >> arr_d[i];
    }

    cout << "The highest score: " << ((data_type == 1) ? max(arr_i) : max(arr_d));
    cout << endl;
    cout << "The lowest score: " << ((data_type == 1) ? min(arr_i) : min(arr_d));
    cout << endl;
    cout << "average score: " << ((data_type == 1) ? average(arr_i) : average(arr_d));
    cout << endl;

    return 0;
}
