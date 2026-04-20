#include"trim.h"
#include<string>
using namespace std;

void trim(string &s){
	int left = 0;
	while(left < s.length() && s[left] == ' '){
		left++;
	}

	int right = s.length()-1;
	while(right >= left && s[right] == ' '){
		right--;
	}

	s = s.substr(left, right-left+1);
}
