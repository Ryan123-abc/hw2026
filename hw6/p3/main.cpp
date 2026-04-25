#include "contacts.h"

void help(){
    cout << "------ manual ------" << endl;
    cout << "a: add a contact" << endl;
    cout << "d: delete a contact" << endl;
    cout << "s: sort by name" << endl;
    cout << "f: find a contact" << endl;
    cout << "l: list all contact" << endl;
    cout << "q: terminate this program" << endl;
    cout << "h: show this manual" << endl;
}

int main()
{
    bool quit = false;
    char cmd = '\0';
    int data_count = 0;
    Contacts *data = nullptr;
    Contacts *ptr = data;

    while (!quit)
    {
        cout << ">> ";
        cin >> cmd;
        switch (cmd)
        {
            case 'h':
            {
                help();
                break;
            }
            case 'a':
            {
                add_a_contact(&data, &data_count);
                break;
            }
            case 'd':
            {
                delete_a_contact(&data, &data_count);
                break;
            }
            case 's':
            {
                sort_by_name(&data, &data_count);
                break;
            }
            case 'f':
            {
                find_a_contact(&data, &data_count);
                break;
            }
            case 'l':
            {
                list_data(&data, &data_count);
                break;
            }
            case 'q':
            {
                quit = true;
                cout << "Bye!" << endl;
                break;
            }
            default :
            {
                cout << "Unknown command. Please type \'h\' for help." << endl;
                break;
            }
        }
    }
    delete[] data;
    return 0;
}