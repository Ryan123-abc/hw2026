#include"tourist.h"

void Tourist::set_info(string first_name, string last_name, string cabin_class){
	name.first_name = first_name;
	name.last_name = last_name;
	this->cabin_class = cabin_class;

	if(cabin_class == "Economy"){
		luggage_limitation = 23;
	}else{
		luggage_limitation = 32;
	}
}

string Tourist::get_first_name(){
	return name.first_name;
}
string Tourist::get_last_name(){
	return name.last_name;
}
string Tourist::get_cabin_class(){
	return cabin_class;
}
int Tourist::get_luggage_limitation(){
	return luggage_limitation;
}
