#include "student.h"
#define MAX 10

int main()
{
    double class_average = 0;
    Student **student = new Student *[MAX];
    string names[MAX] = {"Daphne Lloyd", "Aaron Gold", "Julia Ruth", "Mick Felix", "Adonis Attlee",
                         "Renata Grote", "Abner Piers", "Kama Hood", "Kennedy George", "Ian Blake"};

    for (int i = 0; i < MAX; i++)
    {
        student[i] = new Student;
        student[i]->set_name(names[i]);
        student[i]->set_stu_id("cbb11341" + to_string(i));
    }

    student[0]->set_score(87.42, 73.56, 95.30, 68.18);
    student[1]->set_score(62.15, 78.94, 94.01, 73.67);
    student[2]->set_score(15.33, 65.76, 82.89, 74.24);
    student[3]->set_score(68.02, 84.19, 82.47, 65.85);
    student[4]->set_score(99.11, 65.62, 84.78, 78.49);
    student[5]->set_score(84.54, 86.30, 93.92, 85.06);
    student[6]->set_score(67.28, 81.45, 65.17, 86.31);
    student[7]->set_score(79.66, 83.22, 91.50, 97.03);
    student[8]->set_score(83.79, 76.81, 53.04, 61.46);
    student[9]->set_score(90.23, 70.88, 65.55, 74.72);

    cout << "Student ID\tName\t\tgeneral performance\texam1\t\texam2\t\tfinal exam\tterm score" << endl;
    for (int i = 0; i < MAX; i++)
    {
        student[i]->calculate_term_score();
        cout << student[i]->get_stu_id() << "\t"
             << student[i]->get_name() << "\t\t"
             << student[i]->get_general_performance() << "\t\t"
             << student[i]->get_exam1() << "\t\t"
             << student[i]->get_exam2() << "\t\t"
             << student[i]->get_final_exam() << "\t\t"
             << student[i]->get_term_score() << endl;
    }

    for (int i = 0; i < MAX; i++)
    {
        delete student[i];
    }
    delete[] student;
    student = nullptr;
    return 0;
}
