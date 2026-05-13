#include "tourist.h"
using namespace std;

void show_email_content(Tourist tourist)
{
    cout << "Dear " << tourist.get_first_name() << " " << tourist.get_last_name() << "," << endl;
    cout << "Thank you for choosing Pineapple Airlines. We are excited to welcome you on board for your upcoming flight to "
         << tourist.flight.get_destination() << ". Please find your flight details below to ensure a smooth journey." << endl
         << endl;

    cout << "Flight Information: " << endl;
    cout << "\tFlight Number: " << tourist.flight.get_flight_no() << endl;
    cout << "\tFrom: " << tourist.flight.get_departure() << endl;
    cout << "\tTo: " << tourist.flight.get_destination() << endl;
    cout << "\tLuggage Limit: " << tourist.get_luggage_limitation() << endl;
    cout << "\tCabin Class: " << tourist.get_cabin_class() << endl;
    cout << "\tDate: " << tourist.flight.get_date() << endl;
    cout << "\tBoarding Time: " << tourist.flight.get_boarding_time() << endl;
    cout << "\tGate: " << tourist.flight.get_gate() << endl;
    cout << "Safe travels,\nThe Pineapple Airlines Team" << endl;
}

int main()
{
    Tourist Alex, Jamie, Dennis;
    cout << "------------------------------------------------------------------------" << endl;
    //          first name, last name, cabin class
    Alex.set_info("Alex", "Brookes", "Economy");
    //                  flight no.      from               to               mm/dd/yyyy   hr:mm   gate no.
    Alex.flight.set_info("PI 564", "Hong Kong(HKG)", "Taiwan Taoyuan(TPE)", "9/27/2021", "18:45", "527");
    show_email_content(Alex);

    cout << "------------------------------------------------------------------------" << endl;
    Jamie.set_info("Jamie", "Davis", "Business");
    Jamie.flight.set_info("PI 612", "Osaka (KIX)", "Seoul(ICN)", "3/26/2026", "06:30", "7");
    show_email_content(Jamie);

    cout << "------------------------------------------------------------------------" << endl;
    Dennis.set_info("Dennis", "Wilson", "First");
    Dennis.flight.set_info("PI 950", "Kaohsiung (KHH)", "Hong Kong(HKG)", "1/30/2026", "10:00", "092");
    show_email_content(Dennis);

    return 0;
}