#ifndef LOCALSTUDENT_H
#define LOCALSTUDENT_H

#include "ForeignStudent.h"

class LocalStudent : public Student
{
public:
    LocalStudent();
    void showInfo() override;
};

#endif
