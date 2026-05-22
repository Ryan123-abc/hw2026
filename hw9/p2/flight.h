#include <string>
using namespace std;

class Flight
{
protected:
    string number;
    string departure;
    string destination;
    string date;
    string boarding_time;
    string gate;

public:
    // setter
    void set_info(string flight_no, string from, string to, string date, string time, string gate);

    // getter
    string get_flight_no();
    string get_departure();
    string get_destination();
    string get_date();
    string get_boarding_time();
    string get_gate();
};