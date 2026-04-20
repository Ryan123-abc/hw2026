#include"palindrome.h"
#include<string>
#include<cctype>
using namespace std;

bool is_palindrome(string s){
	string new_s = "";
	for(int i=0; i < s.length(); i++){
		if(isalpha(s[i])){
			new_s += tolower(s[i]);
		}
	}

	int left = 0;
	int right = new_s.length()-1;

	while(left<right){
		if(new_s[left] != new_s[right]){
			return false;
		}
		left++;
		right--;
	}

	return true;
}

