#include "ShowAllInfo.h"
using namespace std;
int main()
{
    int amt = 0;
    cout << "Input student quantity: ";
    cin >> amt;
    Student *csie2c[amt];
    int i;
    for (int i = 0; i < amt; i++)
    {
        char student_type;
        cout << "Input student type(F/L/P): ";
        cin >> student_type;

        switch (student_type)
        {
            case 'F':
                csie2c[i] = new ForeignStudent;
                cout << "[ForeignStudent] created." << endl;
                break;
            case 'L':
                csie2c[i] = new LocalStudent;
                cout << "[LocalStudent] created." << endl;
                break;
            case 'P':
                csie2c[i] = new LocalParttimeStudent;
                cout << "[LocalParttimeStudent] created." << endl;
                break;
        }
    }
    cout << "----------------------" << endl;

    show_all_info(csie2c, amt);

}
