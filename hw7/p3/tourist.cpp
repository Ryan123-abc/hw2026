#include"tourist.h"

Tourist::Tourist(string f, string l){
	first_name = f;
	last_name = l;
}

void Tourist::send_email(){
	cout << "Dear " << first_name << " " << last_name << "," << endl;
	cout << "Thank you for choosing Pineapple Airlines. We are excited to welcome you on board for your upcoming flight to " << flight.destination << ". Please find your flight details below to ensure a smooth journey." << endl << endl;
 
	cout << "Flight Information: " << endl;
	cout << "\tFlight Number: " << flight.number << endl;
	cout << "\tFrom: " << flight.departure << endl;
	cout << "\tTo: " << flight.destination << endl;

	cout << "\tDate: " << flight.date.month << "/" << flight.date.day << "/" << flight.date.year << endl;
	cout << "\tBoarding Time: " << flight.boarding_time.hour << ":" << flight.boarding_time.minute << endl;
	cout << "\tGate: " << flight.gate << endl;
	cout << "Safe travels,\nThe Pineapple Airlines Team" << endl;
}
