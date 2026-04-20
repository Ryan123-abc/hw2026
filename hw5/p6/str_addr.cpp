#include"str_addr.h"

void get_string(char *ptr, int size){
	cin.getline(ptr, size);
}

void print_substr_addr(char *ptr){
	cout<<"["<<(void*)ptr<<"]";
	cout<<"["<<ptr<<"]"<<endl;
}
