#include"foreign_student.h"
#include<cmath>

void ForeignStudent::set_nationality(string nationality){
	this->nationality = nationality;
}

void ForeignStudent::set_passport_id(string passport_id){
	this->passport_id = passport_id;
}

string ForeignStudent::get_nationality(){
	return nationality;
}

string ForeignStudent::get_passport_id(){
	return passport_id;
}

void ForeignStudent::calculate_term_score(){
	general_performance = general_performance * 1.25;
	if(general_performance > 100.0){
		general_performance = 100.0;
	}

	double raw_score = (general_performance + exam1 + exam2 + final_exam) * 0.25;
	term_score = std::round(raw_score * 10.0) / 10.0;
}
