#include "calculator.h"
#include <iostream>
using namespace std;
int main()
{
    double a = 0, b = 0, ans = 0;
    char op = '\0'; // operator

    while (true)
    {
        cout << ">> ";
        cin >> a;
        if (a == -127)
        {
            cout << "Calculator terminated successfully." << endl;
            return 0;
        }
        cin >> op >> b;

        switch (op)
        {
            case '+':
            {
                add(a, b, ans);
                break;
            }
            case '-':
            {
                sub(a, b, ans);
                break;
            }
            case '*':
            {
                mult(a, b, ans);
                break;
            }
            case '/':
            {
                if (b == 0)
                {
                    cout << "Warning! Division by zero!" << endl;
                    continue;
                }
                else
                {
                    divi(a, b, ans);
                }
                break;
            }
            default:
                cout << "Unreadable operator!" << endl;
                break;
        }
        cout << ans << endl;
    }
    return 0;
}