#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    string employee_id;
    string department;
    string job_title;
    int daily_rate;
    int attemdance_days;
    int salary;
public:
    void set_name(string name);
    void set_employee_id(string id);
    void set_department(string department);
    void set_job_title(string job_title);
    void set_daily_rate(int daily_rate);
    void set_attemdance_days(int days);

    void calculate_pay();

    string get_name();
    string get_employee_id();
    string get_department();
    string get_job_title();
    int get_salary();
};
