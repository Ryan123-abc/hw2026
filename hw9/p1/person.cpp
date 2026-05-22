#include"person.h"

void Person::set_name(string name){
	this->name = name;
}

void Person::set_student_id(string student_id){
	this->student_id = student_id;
}

string Person::get_name(){
	return name;
}

string Person::get_student_id(){
	return student_id;
}
