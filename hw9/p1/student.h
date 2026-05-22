#include"person.h"

class Student : public Person{
protected:
	double general_performance;
	double exam1;
	double exam2;
	double final_exam;
	double term_score;

public:
	void set_score(double gp, double e1, double e2, double fe);
	void calculate_term_score();

	double get_general_performance();
	double get_exam1();
	double get_exam2();
	double get_final_exam();
	double get_term_score();
};
