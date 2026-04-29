#include "student.h"

int main()
{
    double class_average = 0;
    Student student[] = {
        {"Alex", "cbb999001", 82, 75, 93},
        {"Bob", "cbb999002", 40, 73, 96},
        {"Charlie", "cbb999003", 88, 76, 57},
        {"Dennis", "cbb999004", 82, 21, 93},
        {"Emily", "cbb999005", 82, 73, 76},
        {"Frank", "cbb999006", 90, 94, 98},
        {"George", "cbb999007", 82, 90, 93},
        {"Hawk", "cbb999008", 90, 70, 93},
        {"Iris", "cbb999009", 82, 73, 93},
        {"Jessica", "cbb999010", 82, 33, 97}
    };
    Student highest = student[0];

    for (int i = 0; i < 10; i++)
    {
        student[i].calculate_average();
        if (student[i].average > highest.average)
        {
            highest = student[i];
        }
        class_average += student[i].average;
    }

    class_average /= 10.0;
    cout << "Class Average = " << class_average << endl;
    cout << "The student with the highest average score: "
         << highest.name << "(" << highest.stu_id << "): " << highest.average << endl;

    return 0;
}
