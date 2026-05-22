#include "student_employee.h"
#include <iostream>
using namespace std;

int main()
{
    Student Renata;
    Employee Mick;
    StudentEmployee Julia;

    Renata.set_name("Renata");
    Renata.set_school_department("CSIE");
    Renata.set_student_id("cbb114901");
    Renata.set_grade('a');
    cout << Renata.get_student_id() << "(" << Renata.get_name() << ") "
         << ", Department: " << Renata.get_school_department() << ", Grade: " << Renata.get_grade() << endl;

    Mick.set_name("Mick");
    Mick.set_employee_id("892314");
    Mick.set_department("Frontend");
    Mick.set_job_title("Engineer");
    Mick.set_attemdance_days(22);
    Mick.set_daily_rate(1800);
    Mick.calculate_pay();
    cout << Mick.get_name() << "(" << Mick.get_employee_id() << ", "
         << Mick.get_department() << " " << Mick.get_job_title() << ") Salary: " << Mick.get_salary() << endl;

    Julia.Student::set_name("Julia");
    Julia.set_school_department("CSIE");
    Julia.set_student_id("cbb114902");
    Julia.set_grade('b');
    Julia.set_employee_id("809345");
    Julia.set_department("Library");
    Julia.set_work_hour(32);
    Julia.set_hourly_rate(196);
    Julia.calculate_pay();
    cout << Julia.get_student_id() << "(" << Julia.Student::get_name() << "), Department: " 
         << Julia.get_school_department() << ", Grade: " << Julia.get_grade()
         << ", employee id: " << Julia.get_employee_id() << "(" << Julia.get_department() 
         << ") Salary: " << Julia.get_salary() << endl;
    
    Julia.set_grade('c');
    cout << Julia.get_student_id() << "(" << Julia.Student::get_name() << "), Department: " 
         << Julia.get_school_department() << ", Grade: " << Julia.get_grade()
         << ", employee id: " << Julia.get_employee_id() << "(" << Julia.get_department() 
         << ") Salary: " << Julia.get_salary() << endl;
    
    Julia.set_grade('A');
    cout << Julia.get_student_id() << "(" << Julia.Student::get_name() << "), Department: " 
         << Julia.get_school_department() << ", Grade: " << Julia.get_grade()
         << ", employee id: " << Julia.get_employee_id() << "(" << Julia.get_department() 
         << ") Salary: " << Julia.get_salary() << endl;

    return 0;
}
