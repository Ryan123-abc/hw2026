#include"flight.h"

void Flight::set_info(string flight_no, string from, string to, string date, string time, string gate){
	number = flight_no;
	departure = from;
	destination = to;
	this->date = date;
	boarding_time = time;
	this->gate = gate;
}

string Flight::get_flight_no(){
	return number;
}
string Flight::get_departure(){
	return departure;
}
string Flight::get_destination(){
	return destination;
}
string Flight::get_date(){
	return date;
}
string Flight::get_boarding_time(){
	return boarding_time;
}
string Flight::get_gate(){
	return gate;
}
