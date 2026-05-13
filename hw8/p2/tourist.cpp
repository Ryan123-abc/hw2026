#include "tourist.h"

void Flight::set_info(string f_no, string dep, string dest, string d, string b_time, string g) {
    flight_no = f_no;
    departure = dep;
    destination = dest;
    date = d;
    boarding_time = b_time;
    gate = g;
}

string Flight::get_flight_no() {
    return flight_no;
}

string Flight::get_departure() {
    return departure;
}

string Flight::get_destination() {
    return destination;
}

string Flight::get_date() {
    return date;
}

string Flight::get_boarding_time() {
    return boarding_time;
}

string Flight::get_gate() {
    return gate;
}

void Tourist::set_info(string f_n, string l_n, string c_class) {
    first_name = f_n;
    last_name = l_n;
    cabin_class = c_class;
}

string Tourist::get_first_name() {
    return first_name;
}

string Tourist::get_last_name() {
    return last_name;
}

string Tourist::get_cabin_class() {
    return cabin_class;
}

int Tourist::get_luggage_limitation() {
    if (cabin_class == "Economy") {
        return 23;
    } else {
        return 32;
    }
}
