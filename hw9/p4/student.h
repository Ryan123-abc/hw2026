#include <string>
using namespace std;
class Student
{
protected:
    string name;
    string student_id;
    string school_department;
    char grade;

public:
    void set_name(string name);
    void set_student_id(string id);
    void set_school_department(string department);
    void set_grade(char c);

    string get_name();
    string get_student_id();
    string get_school_department();
    char get_grade();
};