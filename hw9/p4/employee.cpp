#include "employee.h"

void Employee::set_name(string name) 
{
    this->name = name;
}

void Employee::set_employee_id(string id) 
{
    employee_id = id;
}

void Employee::set_department(string department) 
{
    this->department = department;
}

void Employee::set_job_title(string job_title) 
{
    this->job_title = job_title;
}

void Employee::set_daily_rate(int daily_rate) 
{
    this->daily_rate = daily_rate;
}

void Employee::set_attemdance_days(int days) 
{
    attemdance_days = days;
}

void Employee::calculate_pay() 
{
    salary = daily_rate * attemdance_days;
}

string Employee::get_name() 
{
    return name;
}

string Employee::get_employee_id() 
{
    return employee_id;
}

string Employee::get_department() 
{
    return department;
}

string Employee::get_job_title() 
{
    return job_title;
}

int Employee::get_salary() 
{
    return salary;
}
