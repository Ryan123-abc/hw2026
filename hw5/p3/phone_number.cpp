#include"phone_number.h"
#include<string>
#include<cctype>
using namespace std;

int is_correct_format(string s){
	if(s.length() != 10){
		return 0;
	}
	if(s[0] != '0' || s[1] != '9'){
		return 0;
	}
	for(int i=0; i<s.length(); i++){
		if(isdigit(s[i])==0){
			return 0;
		}
	}

	return 1;
}

string formatted(string s){
	return s.substr(0,4) + "-" + s.substr(4,6);
}
