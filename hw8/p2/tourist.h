#include<iostream>
using namespace std;

class Flight{
private:
	string flight_no;
	string departure;
	string destination;
	string date;
	string boarding_time;
	string gate;

public:
	void set_info(string f_no, string dep, string dest, string d, string b_time, string g);
	string get_flight_no();
	string get_departure();
	string get_destination();
	string get_date();
	string get_boarding_time();
	string get_gate();
};

class Tourist{
private:
	string first_name;
	string last_name;
	string cabin_class;

public:
	Flight flight;
	void set_info(string f_n, string l_n, string c_class);
	string get_first_name();
	string get_last_name();
	string get_cabin_class();
	int get_luggage_limitation();
};
