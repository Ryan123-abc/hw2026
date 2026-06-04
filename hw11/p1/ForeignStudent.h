#include "Student.h"

class ForeignStudent : public Student
{
public:
    string nationality;
    ForeignStudent();
    void showInfo() override;
};