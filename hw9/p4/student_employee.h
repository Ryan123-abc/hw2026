#include "student.h"
#include "employee.h"

class StudentEmployee : public Student, public Employee 
{
private:
    int work_hour;
    int hourly_rate;

public:
    void set_work_hour(int hour);
    void set_hourly_rate(int rate);
    void calculate_pay();
	void set_grade(char c);
};
