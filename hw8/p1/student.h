#include<iostream>
#include<cmath>
using namespace std;

class Student{
private:
	string name;
	string stu_id;
	double general_performance;
	double exam1;
	double exam2;
	double final_exam;
	double term_score;

public:
	void set_name(string n);
	void set_stu_id(string id);
	void set_score(double gp, double e1, double e2, double f);
	void calculate_term_score();

	string get_name();
	string get_stu_id();
	double get_general_performance();
	double get_exam1();
	double get_exam2();
	double get_final_exam();
	double get_term_score();
};
