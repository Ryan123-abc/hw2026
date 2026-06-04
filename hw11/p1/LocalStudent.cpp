#include"LocalStudent.h"

LocalStudent::LocalStudent(){
	name = "";
	type = StudentType::Local;
}

void LocalStudent::showInfo(){
	cout << "I'm a local student." << endl;
}
