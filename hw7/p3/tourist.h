#include<iostream>
#include<string>
using namespace std;

struct Date{
	int year;
	int month;
	int day;
};

struct Time{
	string hour;
	string minute;
};

class Flight{
public:
	string number;
	string departure;
	string destination;
	string gate;

	Date date;
	Time boarding_time;
};

class Tourist{
public:
	string first_name;
	string last_name;
	Flight flight;

	Tourist(string f, string l);

	void send_email();
};
