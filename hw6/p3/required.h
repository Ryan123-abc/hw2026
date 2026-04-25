#include <string>
using namespace std;

struct Contacts
{
    string name;
    struct Birthday
    {
        int year;
        int month;
        int day;
    } birthday;
    string phone_number;
    string email;
};