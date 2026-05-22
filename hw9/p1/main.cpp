#include "foreign_student.h"
#include <iostream>
using namespace std;

int main()
{
    Student Kennedy;
    ForeignStudent Juila;

    Kennedy.set_name("Kennedy");
    Kennedy.set_student_id("cbb114901");
    Kennedy.set_score(87.42, 73.56, 95.30, 68.18);
    cout << "Student [" << Kennedy.get_name() << "]("
         << Kennedy.get_student_id() << ")" << endl;
    Kennedy.calculate_term_score();
    cout << "general performance: " << Kennedy.get_general_performance() << endl
         << "exam1: " << Kennedy.get_exam1() << endl
         << "exam2: " << Kennedy.get_exam2() << endl
         << "final exam: " << Kennedy.get_final_exam() << endl
         << "term score: " << Kennedy.get_term_score() << endl;

    cout << "---------------------------------------------" << endl;
    Juila.set_name("Juila");
    Juila.set_student_id("cbb113442");
    Juila.set_score(87.42, 73.56, 95.30, 68.18);
    Juila.set_nationality("Korea (ROK)");
    Juila.set_passport_id("M98238646");
    Juila.calculate_term_score();
    cout << "Foreign student [" << Juila.get_name() << "]("
         << Juila.get_student_id() << ", "
         << Juila.get_nationality() << " passport no. "
         << Juila.get_passport_id() << "): " << endl
         << endl;

    cout << "general performance: " << Juila.get_general_performance() << endl
         << "exam1: " << Juila.get_exam1() << endl
         << "exam2: " << Juila.get_exam2() << endl
         << "final exam: " << Juila.get_final_exam() << endl
         << "term score: " << Juila.get_term_score() << endl;

    return 0;
}
