#include"LocalParttimeStudent.h"

LocalParttimeStudent::LocalParttimeStudent(){
	name = "";
	type = StudentType::LocalParttime;
}

void LocalParttimeStudent::showInfo(){
	cout << "I'm a local part-time student." << endl;
}
