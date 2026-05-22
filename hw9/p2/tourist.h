#include "flight.h"

class Tourist
{
protected:
    string cabin_class;
    int luggage_limitation;
    struct Name
    {
        string last_name;
        string first_name;
    } name;

public:
    Flight flight;

    // setter
    void set_info(string first_name, string last_name, string cabin_class);

    // getter
    string get_first_name();
    string get_last_name();
    string get_cabin_class();
    int get_luggage_limitation();
};
