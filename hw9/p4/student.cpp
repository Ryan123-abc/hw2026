#include "student.h"

void Student::set_name(string name) 
{
    this->name = name;
}

void Student::set_student_id(string id) 
{
    student_id = id;
}

void Student::set_school_department(string department) 
{
    school_department = department;
}

void Student::set_grade(char c) 
{
    grade = c;
}

string Student::get_name() 
{
    return name;
}

string Student::get_student_id() 
{
    return student_id;
}

string Student::get_school_department() 
{
    return school_department;
}

char Student::get_grade() 
{
    if (grade >= 'a' && grade <= 'z') 
    {
        return grade - 32;
    }
    return grade;
}
