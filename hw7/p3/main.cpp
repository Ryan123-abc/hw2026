#include "tourist.h"
using namespace std;

int main()
{
    Tourist Dennis("Dennis", "Smith");
    Dennis.flight.number = "CI 950";
    Dennis.flight.departure = "Kaohsiung (KHH)";
    Dennis.flight.destination = "Hong Kong (HKG)";
    Dennis.flight.date.year = 2026;
    Dennis.flight.date.month = 1;
    Dennis.flight.date.day = 30;
    Dennis.flight.boarding_time.hour = "10";
    Dennis.flight.boarding_time.minute = "00";
    Dennis.flight.gate = "092";

    Dennis.send_email();
    return 0;
}