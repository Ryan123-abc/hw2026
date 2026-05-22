#include"student.h"
#include<cmath>

void Student::set_score(double gp, double e1, double e2, double fe){
	general_performance = gp;
	exam1 = e1;
	exam2 = e2;
	final_exam = fe;
}

void Student::calculate_term_score(){
	double raw_score = (general_performance + exam1 + exam2 + final_exam)*0.25;
	term_score = std::round(raw_score * 10.0) / 10.0;
}

double Student::get_general_performance(){
	return general_performance;
}

double Student::get_exam1(){
	return exam1;
}

double Student::get_exam2(){
	return exam2;
}

double Student::get_final_exam(){
	return final_exam;
}

double Student::get_term_score(){
	return term_score;
}
