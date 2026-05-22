#include "student_employee.h"

void StudentEmployee::set_work_hour(int hour) 
{
    work_hour = hour;
}

void StudentEmployee::set_hourly_rate(int rate) 
{
    hourly_rate = rate;
}

void StudentEmployee::calculate_pay() 
{
    char current_grade = get_grade();
    if (current_grade == 'A' || current_grade == 'B') 
    {
        Employee::salary = work_hour * hourly_rate;
    } 
    else 
    {
        Employee::salary = 0;
    }
}

void StudentEmployee::set_grade(char c) 
{
    Student::set_grade(c);
    
    char current_grade = get_grade();
    if (current_grade != 'A' && current_grade != 'B') 
    {
        Employee::salary = 0;
    }
    else
    {
        Employee::salary = work_hour * hourly_rate;
    }
}
