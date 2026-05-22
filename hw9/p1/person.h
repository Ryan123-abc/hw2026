#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string student_id;
public:
    void set_name(string name);
    void set_student_id(string student_id);

    string get_name();
    string get_student_id();
};