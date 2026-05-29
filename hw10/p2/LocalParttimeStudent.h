#ifndef LOCALPARTTIMESTUDENT_H
#define LOCALPARTTIMESTUDENT_H

#include "LocalStudent.h"

class LocalParttimeStudent : public LocalStudent
{
public:
    LocalParttimeStudent();
    void showInfo() override;
};

#endif
