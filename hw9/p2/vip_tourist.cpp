#include"vip_tourist.h"

void VIPTourist::set_info(string first_name, string last_name){
	name.first_name = first_name;
	name.last_name = last_name;

	cabin_class = "First";
	luggage_limitation = 32;
}

void VIPTourist::add_special_privilege(string privilege){
	if(quantity < 20){
		privileges[quantity] = privilege;
		quantity++;
	}
}

string *VIPTourist::get_special_privilege(){
	return privileges;
}

int VIPTourist::get_special_privilege_quantity(){
	return quantity;
}
