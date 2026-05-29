#include <iostream>
#include <string>
using namespace std;

enum StudentType
{
    Normal,
    Foreign,
    Local,
    LocalParttime
};

class Student
{
public:
    string name;
    StudentType type;
    Student();
    void showInfo();
};