#include"ForeignStudent.h"

ForeignStudent::ForeignStudent(){
	name = "";
	type = StudentType::Foreign;
	nationality = "";
}

void ForeignStudent::showInfo(){
	cout << "I'm a foreign student." << endl;
}
